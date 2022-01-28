/*
 * Simulator of microcontrollers (m68hc12cl.h)
 *
 * Copyright (C) 2020,20 Drotos Daniel, Talker Bt.
 * 
 * To contact author send email to drdani@mazsola.iit.uni-miskolc.hu
 *
 */

/* This file is part of microcontroller simulator: ucsim.

UCSIM is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

UCSIM is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with UCSIM; see the file COPYING.  If not, write to the Free
Software Foundation, 59 Temple Place - Suite 330, Boston, MA
02111-1307, USA. */
/*@1@*/

#ifndef M68HC12CL_HEADER
#define M68HC12CL_HEADER

#include "uccl.h"
#include "memcl.h"

#include "m68hc11cl.h"

#define CL12 cl_m68hc12

class CL12;

typedef int (*hcwrapper_fn)(class CL12 *uc, t_mem code);

enum {
  flagS	= 0x80,
  flagX	= 0x40
};

#define rTMP2 (TMP2)
#define rTMP3 (TMP3)

/*
 * Special handling of CCR
 */

class cl_ccr: public cl_cell8
{
public:
  virtual t_mem write(t_mem val);
};


/*
 * Base of M68HC12 processor
 *
 * uc -> m6800         -> m68hcbase   -> m68hc12
 *       A,B,CC,X,SP      D,Y
 */

class cl_m68hc12: public cl_m68hcbase
{
public:
  //i8_t post_inc_dec;
  //class cl_cell16 *post_idx_reg;
  class cl_wrap *hc12wrap;
  u16_t TMP2, TMP3;
  class cl_cell16 cTMP2, cTMP3;
  class cl_memory_cell *tex_cells[8];
  const char *tex_names[8];
public:
  cl_m68hc12(class cl_sim *asim);
  virtual int init(void);
  virtual const char *id_string(void);
  virtual void reset(void);
  virtual void make_memories(void);
  virtual void setup_ccr(void) {}
  virtual void make_cpu_hw(void);
  
  virtual int proba(int,t_mem);
  virtual int prob1(int,t_mem) {return 1;}

  virtual struct dis_entry *dis_tbl(void);
  virtual struct dis_entry *get_dis_entry(t_addr addr);
  virtual char *disassc(t_addr addr, chars *comment=NULL);
  virtual void disass_xb(t_addr *addr, chars *work, chars *comment);
  virtual void disass_b7(t_addr *addr, chars *work, chars *comment);
  virtual int inst_length(t_addr addr);
  virtual int longest_inst(void) { return 6; }

  virtual int exec_inst(void);
  virtual void post_inst(void);
  virtual i16_t s8_16(u8_t op); // sex 8->16
  virtual t_addr naddr(t_addr *addr); // xb -> post_inc_dec,post_idx_reg
  virtual u8_t xbop8();
  virtual u16_t xbop16();
  virtual class cl_memory_cell &xb(void);
  virtual class cl_memory_cell &xbdst(void) { vc.rd++; vc.wr++; return xb(); }
  
  virtual void print_regs(class cl_console_base *con);

  virtual int exec_b7(void);
  virtual int trap(t_mem code);

  // ALU
  virtual int sub16(class cl_cell16 &dest, u16_t op);
  virtual int add16(class cl_cell16 &dest, u16_t op);
  virtual int cp16(u16_t op1, u16_t op2);

  // MOVE
#define ld16 ldsx

  // OTHER
  
};


enum hc12cpu_cfg {
  hc12_cpu_nuof	= 0
};

class cl_hc12_cpu: public cl_hw
{
protected:
  class cl_m68hc12 *muc;
  class cl_memory_cell *dpage, *ppage, *epage, *windef;
public:
  cl_hc12_cpu(class cl_uc *auc);
  virtual int init(void);
  virtual void reset(void);
  virtual void print_info(class cl_console_base *con);
};


#endif

/* End of m68hc12.src/m68hc12cl.h */
