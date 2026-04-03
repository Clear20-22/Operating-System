/* Generated automatically by the program `genrecog' from the target
   machine description file.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "tm_p.h"
#include "function.h"
#include "insn-config.h"
#include "recog.h"
#include "real.h"
#include "output.h"
#include "flags.h"
#include "hard-reg-set.h"
#include "resource.h"
#include "toplev.h"
#include "reload.h"



/* `recog' contains a decision tree that recognizes whether the rtx
   X0 is a valid instruction.

   recog returns -1 if the rtx is not valid.  If the rtx is valid, recog
   returns a nonnegative number which is the insn code number for the
   pattern that matched.  This is the same as the order in the machine
   description of the entry that matched.  This number can be used as an
   index into `insn_data' and other tables.

   The third argument to recog is an optional pointer to an int.  If
   present, recog will accept a pattern if it matches except for missing
   CLOBBER expressions at the end.  In that case, the value pointed to by
   the optional pointer will be set to the number of CLOBBERs that need
   to be added (it should be initialized to zero by the caller).  If it
   is set nonzero, the caller should allocate a PARALLEL of the
   appropriate size, copy the initial entries, and call add_clobbers
   (found in insn-emit.c) to fill in the CLOBBERs.


   The function split_insns returns 0 if the rtl could not
   be split or the split rtl as an INSN list if it can be.

   The function peephole2_insns returns 0 if the rtl could not
   be matched. If there was a match, the new rtl is returned in an INSN list,
   and LAST_INSN will point to the last recognized insn in the old sequence.
*/


extern rtx gen_split_505 (rtx, rtx *);
extern rtx gen_split_506 (rtx, rtx *);
extern rtx gen_split_507 (rtx, rtx *);
extern rtx gen_split_508 (rtx, rtx *);
extern rtx gen_split_509 (rtx, rtx *);
extern rtx gen_peephole2_514 (rtx, rtx *);
extern rtx gen_peephole2_515 (rtx, rtx *);
extern rtx gen_split_516 (rtx, rtx *);
extern rtx gen_split_517 (rtx, rtx *);
extern rtx gen_split_518 (rtx, rtx *);
extern rtx gen_peephole2_519 (rtx, rtx *);
extern rtx gen_peephole2_520 (rtx, rtx *);
extern rtx gen_peephole2_521 (rtx, rtx *);
extern rtx gen_split_522 (rtx, rtx *);
extern rtx gen_split_523 (rtx, rtx *);
extern rtx gen_split_526 (rtx, rtx *);
extern rtx gen_split_527 (rtx, rtx *);
extern rtx gen_split_539 (rtx, rtx *);
extern rtx gen_split_540 (rtx, rtx *);
extern rtx gen_split_541 (rtx, rtx *);
extern rtx gen_split_547 (rtx, rtx *);
extern rtx gen_split_552 (rtx, rtx *);
extern rtx gen_split_553 (rtx, rtx *);
extern rtx gen_split_554 (rtx, rtx *);
extern rtx gen_split_555 (rtx, rtx *);
extern rtx gen_split_556 (rtx, rtx *);
extern rtx gen_split_566 (rtx, rtx *);
extern rtx gen_peephole2_567 (rtx, rtx *);
extern rtx gen_split_568 (rtx, rtx *);
extern rtx gen_split_569 (rtx, rtx *);
extern rtx gen_split_570 (rtx, rtx *);
extern rtx gen_split_571 (rtx, rtx *);
extern rtx gen_split_572 (rtx, rtx *);
extern rtx gen_split_573 (rtx, rtx *);
extern rtx gen_split_574 (rtx, rtx *);
extern rtx gen_split_575 (rtx, rtx *);
extern rtx gen_split_576 (rtx, rtx *);
extern rtx gen_split_578 (rtx, rtx *);
extern rtx gen_split_580 (rtx, rtx *);
extern rtx gen_split_581 (rtx, rtx *);
extern rtx gen_split_585 (rtx, rtx *);
extern rtx gen_split_587 (rtx, rtx *);
extern rtx gen_split_590 (rtx, rtx *);
extern rtx gen_split_591 (rtx, rtx *);
extern rtx gen_split_592 (rtx, rtx *);
extern rtx gen_split_596 (rtx, rtx *);
extern rtx gen_split_604 (rtx, rtx *);
extern rtx gen_split_605 (rtx, rtx *);
extern rtx gen_split_606 (rtx, rtx *);
extern rtx gen_split_607 (rtx, rtx *);
extern rtx gen_split_608 (rtx, rtx *);
extern rtx gen_split_609 (rtx, rtx *);
extern rtx gen_split_610 (rtx, rtx *);
extern rtx gen_split_651 (rtx, rtx *);
extern rtx gen_split_652 (rtx, rtx *);
extern rtx gen_split_656 (rtx, rtx *);
extern rtx gen_split_658 (rtx, rtx *);
extern rtx gen_split_659 (rtx, rtx *);
extern rtx gen_split_665 (rtx, rtx *);
extern rtx gen_split_672 (rtx, rtx *);
extern rtx gen_split_673 (rtx, rtx *);



static int
recog_1 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L16;
    case MINUS:
      goto L96;
    case MULT:
      goto L132;
    case NEG:
      goto L916;
    case DIV:
      goto L1021;
    case SQRT:
      goto L1101;
    case ABS:
      goto L1158;
    case FLOAT_TRUNCATE:
      goto L1304;
    case FLOAT:
      goto L1572;
    case MEM:
      goto L1786;
    case IF_THEN_ELSE:
      goto L2809;
    case VEC_SELECT:
      goto L2951;
    case UNSPEC:
      goto L4508;
    default:
     break;
   }
  goto ret0;

 L16: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SFmode)
    goto L4513;
  goto ret0;

 L4513: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L869;
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L17;
    }
  goto ret0;

 L869: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L870;
    }
  goto ret0;

 L870: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L871;
    }
  goto ret0;

 L871: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L872;
    }
  goto ret0;

 L872: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1742 "../.././gcc/config/mips/mips.md"
(ISA_HAS_FP4 && TARGET_FUSED_MADD) && 
#line 418 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 64;  /* *maddsf */
    }
  goto ret0;

 L17: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L18;
    }
  goto ret0;

 L18: ATTRIBUTE_UNUSED_LABEL
  if (
#line 418 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 3;  /* addsf3 */
    }
  goto ret0;

 L96: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SFmode)
    goto L4515;
  goto ret0;

 L4515: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L893;
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L97;
    }
  goto ret0;

 L893: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SFmode)
    goto L4517;
  goto ret0;

 L4517: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == NEG)
    goto L945;
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L894;
    }
  goto ret0;

 L945: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SFmode))
    {
      operands[1] = x4;
      goto L946;
    }
  goto ret0;

 L946: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L947;
    }
  goto ret0;

 L947: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L948;
    }
  goto ret0;

 L948: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1775 "../.././gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (SFmode)) && 
#line 418 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 73;  /* *nmaddsf_fastmath */
    }
  goto ret0;

 L894: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L895;
    }
  goto ret0;

 L895: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L896;
    }
  goto ret0;

 L896: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1752 "../.././gcc/config/mips/mips.md"
(ISA_HAS_FP4 && TARGET_FUSED_MADD) && 
#line 418 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 67;  /* *msubsf */
    }
  goto ret0;

 L97: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode)
    goto L4519;
  goto ret0;

 L4519: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L999;
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L98;
    }
  goto ret0;

 L999: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L1000;
    }
  goto ret0;

 L1000: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      operands[3] = x3;
      goto L1001;
    }
  goto ret0;

 L1001: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1799 "../.././gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (SFmode)) && 
#line 418 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 79;  /* *nmsubsf_fastmath */
    }
  goto ret0;

 L98: ATTRIBUTE_UNUSED_LABEL
  if (
#line 418 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 16;  /* subsf3 */
    }
  goto ret0;

 L132: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L133;
    }
  goto ret0;

 L133: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L134;
    }
  goto ret0;

 L134: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 932 "../.././gcc/config/mips/mips.md"
(!TARGET_4300_MUL_FIX) && 
#line 423 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 22;  /* *mulsf3 */
    }
 L146: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 945 "../.././gcc/config/mips/mips.md"
(TARGET_4300_MUL_FIX) && 
#line 423 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 24;  /* *mulsf3_r4300 */
    }
  goto ret0;

 L916: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SFmode)
    goto L4520;
  goto ret0;

 L4520: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L917;
    case MINUS:
      goto L971;
    case REG:
    case SUBREG:
      goto L4522;
    default:
      goto ret0;
   }
 L4522: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L1193;
    }
  goto ret0;

 L917: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == MULT)
    goto L918;
  goto ret0;

 L918: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SFmode))
    {
      operands[1] = x4;
      goto L919;
    }
  goto ret0;

 L919: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SFmode))
    {
      operands[2] = x4;
      goto L920;
    }
  goto ret0;

 L920: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      operands[3] = x3;
      goto L921;
    }
  goto ret0;

 L921: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1763 "../.././gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (SFmode)) && 
#line 418 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 70;  /* *nmaddsf */
    }
  goto ret0;

 L971: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == MULT)
    goto L972;
  goto ret0;

 L972: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SFmode))
    {
      operands[2] = x4;
      goto L973;
    }
  goto ret0;

 L973: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SFmode))
    {
      operands[3] = x4;
      goto L974;
    }
  goto ret0;

 L974: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L975;
    }
  goto ret0;

 L975: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1787 "../.././gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (SFmode)) && 
#line 418 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 76;  /* *nmsubsf */
    }
  goto ret0;

 L1193: ATTRIBUTE_UNUSED_LABEL
  if (
#line 418 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 108;  /* negsf2 */
    }
  goto ret0;

 L1021: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L1022;
    }
  if (const_1_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L1040;
    }
  goto ret0;

 L1022: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L1023;
    }
  goto ret0;

 L1023: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1840 "../.././gcc/config/mips/mips.md"
(!TARGET_FIX_SB1 || flag_unsafe_math_optimizations) && 
#line 418 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 82;  /* *divsf3 */
    }
  goto ret0;

 L1040: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode)
    goto L4524;
  goto ret0;

 L4524: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == SQRT)
    goto L1118;
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L1041;
    }
  goto ret0;

 L1118: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L1119;
    }
  goto ret0;

 L1119: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1929 "../.././gcc/config/mips/mips.md"
(ISA_HAS_FP4 && flag_unsafe_math_optimizations) && 
#line 418 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 95;  /* *rsqrtsfa */
    }
  goto ret0;

 L1041: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1858 "../.././gcc/config/mips/mips.md"
(ISA_HAS_FP4 && flag_unsafe_math_optimizations) && 
#line 418 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 85;  /* *recipsf3 */
    }
  goto ret0;

 L1101: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SFmode)
    goto L4526;
  goto ret0;

 L4526: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == DIV)
    goto L1138;
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L1102;
    }
  goto ret0;

 L1138: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (const_1_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L1139;
    }
  goto ret0;

 L1139: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L1140;
    }
  goto ret0;

 L1140: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1947 "../.././gcc/config/mips/mips.md"
(ISA_HAS_FP4 && flag_unsafe_math_optimizations) && 
#line 418 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 98;  /* *rsqrtsfb */
    }
  goto ret0;

 L1102: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1911 "../.././gcc/config/mips/mips.md"
(!ISA_MIPS1) && 
#line 418 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 92;  /* sqrtsf2 */
    }
  goto ret0;

 L1158: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L1159;
    }
  goto ret0;

 L1159: ATTRIBUTE_UNUSED_LABEL
  if (
#line 418 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 101;  /* abssf2 */
    }
  goto ret0;

 L1304: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L1305;
    }
  goto ret0;

 L1305: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2172 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 127;  /* truncdfsf2 */
    }
  goto ret0;

 L1572: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L4527;
    case DImode:
      goto L4528;
    default:
      break;
    }
  goto ret0;

 L4527: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1573;
    }
  goto ret0;

 L1573: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2643 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 176;  /* floatsisf2 */
    }
  goto ret0;

 L4528: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1578;
    }
  goto ret0;

 L1578: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2654 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_FLOAT64 && TARGET_DOUBLE_FLOAT))
    {
      return 177;  /* floatdisf2 */
    }
  goto ret0;

 L1786: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L4529;
    case DImode:
      goto L4530;
    default:
      break;
    }
  goto ret0;

 L4529: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L1787;
  goto ret0;

 L1787: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1788;
    }
  goto ret0;

 L1788: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1789;
    }
  goto ret0;

 L1789: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 3478 "../.././gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 418 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 215;  /* *lwxc1_si */
    }
  goto ret0;

 L4530: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L1808;
  goto ret0;

 L1808: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1809;
    }
  goto ret0;

 L1809: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1810;
    }
  goto ret0;

 L1810: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 3478 "../.././gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 418 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 218;  /* *lwxc1_di */
    }
  goto ret0;

 L2809: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L4531;
    case DImode:
      goto L4532;
    case CCmode:
      goto L4533;
    default:
      break;
    }
  goto ret0;

 L4531: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, SImode))
    {
      operands[4] = x2;
      goto L2810;
    }
  goto ret0;

 L2810: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2811;
    }
  goto ret0;

 L2811: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2812;
  goto ret0;

 L2812: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2813;
    }
  goto ret0;

 L2813: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L2814;
    }
  goto ret0;

 L2814: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5324 "../.././gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 423 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 369;  /* *movsf_on_si */
    }
  goto ret0;

 L4532: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, DImode))
    {
      operands[4] = x2;
      goto L2828;
    }
  goto ret0;

 L2828: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2829;
    }
  goto ret0;

 L2829: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2830;
  goto ret0;

 L2830: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2831;
    }
  goto ret0;

 L2831: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L2832;
    }
  goto ret0;

 L2832: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 5324 "../.././gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 410 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 423 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 371;  /* *movsf_on_di */
    }
  goto ret0;

 L4533: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, CCmode))
    {
      operands[4] = x2;
      goto L2846;
    }
  goto ret0;

 L2846: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, CCmode))
    {
      operands[1] = x3;
      goto L2847;
    }
  goto ret0;

 L2847: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2848;
  goto ret0;

 L2848: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2849;
    }
  goto ret0;

 L2849: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L2850;
    }
  goto ret0;

 L2850: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 5324 "../.././gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 410 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)) && 
#line 423 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 373;  /* *movsf_on_cc */
    }
  goto ret0;

 L2951: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L2952;
    }
  goto ret0;

 L2952: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 1)
    goto L2953;
  goto ret0;

 L2953: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (const_0_or_1_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L2954;
    }
  goto ret0;

 L2954: ATTRIBUTE_UNUSED_LABEL
  if (
#line 161 "../.././gcc/config/mips/mips-ps-3d.md"
(TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 388;  /* vec_extractv2sf */
    }
  goto ret0;

 L4508: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 1:
      goto L4534;
    case 2:
      goto L4535;
    default:
      break;
    }
  goto ret0;

 L4534: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 208L:
      goto L3069;
    case 210L:
      goto L3102;
    default:
      break;
    }
  goto ret0;

 L3069: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L3070;
    }
  goto ret0;

 L3070: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 445 "../.././gcc/config/mips/mips-ps-3d.md"
(TARGET_MIPS3D) && 
#line 418 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 404;  /* mips_rsqrt1_s */
    }
  goto ret0;

 L3102: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L3103;
    }
  goto ret0;

 L3103: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 464 "../.././gcc/config/mips/mips-ps-3d.md"
(TARGET_MIPS3D) && 
#line 418 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 410;  /* mips_recip1_s */
    }
  goto ret0;

 L4535: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 209L:
      goto L3084;
    case 211L:
      goto L3117;
    default:
      break;
    }
  goto ret0;

 L3084: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L3085;
    }
  goto ret0;

 L3085: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L3086;
    }
  goto ret0;

 L3086: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 455 "../.././gcc/config/mips/mips-ps-3d.md"
(TARGET_MIPS3D) && 
#line 418 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 407;  /* mips_rsqrt2_s */
    }
  goto ret0;

 L3117: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L3118;
    }
  goto ret0;

 L3118: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L3119;
    }
  goto ret0;

 L3119: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 474 "../.././gcc/config/mips/mips-ps-3d.md"
(TARGET_MIPS3D) && 
#line 418 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 413;  /* mips_recip2_s */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_2 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L22;
    case MINUS:
      goto L102;
    case MULT:
      goto L138;
    case NEG:
      goto L925;
    case DIV:
      goto L1027;
    case SQRT:
      goto L1106;
    case ABS:
      goto L1163;
    case FLOAT_EXTEND:
      goto L1511;
    case FLOAT:
      goto L1562;
    case MEM:
      goto L1793;
    case UNSPEC:
      goto L4557;
    case IF_THEN_ELSE:
      goto L2818;
    default:
     break;
   }
  goto ret0;

 L22: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L4564;
  goto ret0;

 L4564: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L877;
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L23;
    }
  goto ret0;

 L877: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L878;
    }
  goto ret0;

 L878: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L879;
    }
  goto ret0;

 L879: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L880;
    }
  goto ret0;

 L880: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1742 "../.././gcc/config/mips/mips.md"
(ISA_HAS_FP4 && TARGET_FUSED_MADD) && 
#line 419 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 65;  /* *madddf */
    }
  goto ret0;

 L23: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L24;
    }
  goto ret0;

 L24: ATTRIBUTE_UNUSED_LABEL
  if (
#line 419 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 4;  /* adddf3 */
    }
  goto ret0;

 L102: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L4566;
  goto ret0;

 L4566: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L901;
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L103;
    }
  goto ret0;

 L901: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DFmode)
    goto L4568;
  goto ret0;

 L4568: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == NEG)
    goto L954;
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L902;
    }
  goto ret0;

 L954: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DFmode))
    {
      operands[1] = x4;
      goto L955;
    }
  goto ret0;

 L955: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L956;
    }
  goto ret0;

 L956: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L957;
    }
  goto ret0;

 L957: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1775 "../.././gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (DFmode)) && 
#line 419 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 74;  /* *nmadddf_fastmath */
    }
  goto ret0;

 L902: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L903;
    }
  goto ret0;

 L903: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L904;
    }
  goto ret0;

 L904: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1752 "../.././gcc/config/mips/mips.md"
(ISA_HAS_FP4 && TARGET_FUSED_MADD) && 
#line 419 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 68;  /* *msubdf */
    }
  goto ret0;

 L103: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode)
    goto L4570;
  goto ret0;

 L4570: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L1007;
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L104;
    }
  goto ret0;

 L1007: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L1008;
    }
  goto ret0;

 L1008: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      operands[3] = x3;
      goto L1009;
    }
  goto ret0;

 L1009: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1799 "../.././gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (DFmode)) && 
#line 419 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 80;  /* *nmsubdf_fastmath */
    }
  goto ret0;

 L104: ATTRIBUTE_UNUSED_LABEL
  if (
#line 419 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 17;  /* subdf3 */
    }
  goto ret0;

 L138: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L139;
    }
  goto ret0;

 L139: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L140;
    }
  goto ret0;

 L140: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 932 "../.././gcc/config/mips/mips.md"
(!TARGET_4300_MUL_FIX) && 
#line 424 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 23;  /* *muldf3 */
    }
 L152: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 945 "../.././gcc/config/mips/mips.md"
(TARGET_4300_MUL_FIX) && 
#line 424 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 25;  /* *muldf3_r4300 */
    }
  goto ret0;

 L925: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L4571;
  goto ret0;

 L4571: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L926;
    case MINUS:
      goto L980;
    case REG:
    case SUBREG:
      goto L4573;
    default:
      goto ret0;
   }
 L4573: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L1198;
    }
  goto ret0;

 L926: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DFmode
      && GET_CODE (x3) == MULT)
    goto L927;
  goto ret0;

 L927: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DFmode))
    {
      operands[1] = x4;
      goto L928;
    }
  goto ret0;

 L928: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, DFmode))
    {
      operands[2] = x4;
      goto L929;
    }
  goto ret0;

 L929: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      operands[3] = x3;
      goto L930;
    }
  goto ret0;

 L930: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1763 "../.././gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (DFmode)) && 
#line 419 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 71;  /* *nmadddf */
    }
  goto ret0;

 L980: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DFmode
      && GET_CODE (x3) == MULT)
    goto L981;
  goto ret0;

 L981: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DFmode))
    {
      operands[2] = x4;
      goto L982;
    }
  goto ret0;

 L982: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, DFmode))
    {
      operands[3] = x4;
      goto L983;
    }
  goto ret0;

 L983: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L984;
    }
  goto ret0;

 L984: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1787 "../.././gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (DFmode)) && 
#line 419 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 77;  /* *nmsubdf */
    }
  goto ret0;

 L1198: ATTRIBUTE_UNUSED_LABEL
  if (
#line 419 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 109;  /* negdf2 */
    }
  goto ret0;

 L1027: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L1028;
    }
  if (const_1_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L1046;
    }
  goto ret0;

 L1028: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L1029;
    }
  goto ret0;

 L1029: ATTRIBUTE_UNUSED_LABEL
  if (
#line 419 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 83;  /* *divdf3 */
    }
  goto ret0;

 L1046: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode)
    goto L4575;
  goto ret0;

 L4575: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == SQRT)
    goto L1125;
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L1047;
    }
  goto ret0;

 L1125: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L1126;
    }
  goto ret0;

 L1126: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1929 "../.././gcc/config/mips/mips.md"
(ISA_HAS_FP4 && flag_unsafe_math_optimizations) && 
#line 419 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 96;  /* *rsqrtdfa */
    }
  goto ret0;

 L1047: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1858 "../.././gcc/config/mips/mips.md"
(ISA_HAS_FP4 && flag_unsafe_math_optimizations) && 
#line 419 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 86;  /* *recipdf3 */
    }
  goto ret0;

 L1106: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L4577;
  goto ret0;

 L4577: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == DIV)
    goto L1145;
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L1107;
    }
  goto ret0;

 L1145: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (const_1_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L1146;
    }
  goto ret0;

 L1146: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L1147;
    }
  goto ret0;

 L1147: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1947 "../.././gcc/config/mips/mips.md"
(ISA_HAS_FP4 && flag_unsafe_math_optimizations) && 
#line 419 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 99;  /* *rsqrtdfb */
    }
  goto ret0;

 L1107: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1911 "../.././gcc/config/mips/mips.md"
(!ISA_MIPS1) && 
#line 419 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 93;  /* sqrtdf2 */
    }
  goto ret0;

 L1163: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L1164;
    }
  goto ret0;

 L1164: ATTRIBUTE_UNUSED_LABEL
  if (
#line 419 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 102;  /* absdf2 */
    }
  goto ret0;

 L1511: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L1512;
    }
  goto ret0;

 L1512: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2506 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 167;  /* extendsfdf2 */
    }
  goto ret0;

 L1562: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L4578;
    case DImode:
      goto L4579;
    default:
      break;
    }
  goto ret0;

 L4578: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1563;
    }
  goto ret0;

 L1563: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2621 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 174;  /* floatsidf2 */
    }
  goto ret0;

 L4579: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1568;
    }
  goto ret0;

 L1568: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2632 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_FLOAT64 && TARGET_DOUBLE_FLOAT))
    {
      return 175;  /* floatdidf2 */
    }
  goto ret0;

 L1793: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L4580;
    case DImode:
      goto L4581;
    default:
      break;
    }
  goto ret0;

 L4580: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L1794;
  goto ret0;

 L1794: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1795;
    }
  goto ret0;

 L1795: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1796;
    }
  goto ret0;

 L1796: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 3478 "../.././gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 419 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 216;  /* *ldxc1_si */
    }
  goto ret0;

 L4581: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L1815;
  goto ret0;

 L1815: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1816;
    }
  goto ret0;

 L1816: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1817;
    }
  goto ret0;

 L1817: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 3478 "../.././gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 419 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 219;  /* *ldxc1_di */
    }
  goto ret0;

 L4557: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 1:
      goto L4582;
    case 2:
      goto L4583;
    default:
      break;
    }
  goto ret0;

 L4582: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 0L:
      goto L1942;
    case 208L:
      goto L3074;
    case 210L:
      goto L3107;
    default:
      break;
    }
  goto ret0;

 L1942: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1943;
    }
  goto ret0;

 L1943: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3893 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !TARGET_64BIT))
    {
      return 243;  /* load_df_low */
    }
  goto ret0;

 L3074: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L3075;
    }
  goto ret0;

 L3075: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 445 "../.././gcc/config/mips/mips-ps-3d.md"
(TARGET_MIPS3D) && 
#line 419 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 405;  /* mips_rsqrt1_d */
    }
  goto ret0;

 L3107: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L3108;
    }
  goto ret0;

 L3108: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 464 "../.././gcc/config/mips/mips-ps-3d.md"
(TARGET_MIPS3D) && 
#line 419 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 411;  /* mips_recip1_d */
    }
  goto ret0;

 L4583: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 1L:
      goto L1947;
    case 209L:
      goto L3090;
    case 211L:
      goto L3123;
    default:
      break;
    }
  goto ret0;

 L1947: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1948;
    }
  goto ret0;

 L1948: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L1949;
    }
  goto ret0;

 L1949: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3908 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !TARGET_64BIT))
    {
      return 244;  /* load_df_high */
    }
  goto ret0;

 L3090: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L3091;
    }
  goto ret0;

 L3091: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L3092;
    }
  goto ret0;

 L3092: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 455 "../.././gcc/config/mips/mips-ps-3d.md"
(TARGET_MIPS3D) && 
#line 419 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 408;  /* mips_rsqrt2_d */
    }
  goto ret0;

 L3123: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L3124;
    }
  goto ret0;

 L3124: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L3125;
    }
  goto ret0;

 L3125: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 474 "../.././gcc/config/mips/mips-ps-3d.md"
(TARGET_MIPS3D) && 
#line 419 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 414;  /* mips_recip2_d */
    }
  goto ret0;

 L2818: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L4588;
    case DImode:
      goto L4589;
    case CCmode:
      goto L4590;
    default:
      break;
    }
  goto ret0;

 L4588: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, SImode))
    {
      operands[4] = x2;
      goto L2819;
    }
  goto ret0;

 L2819: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2820;
    }
  goto ret0;

 L2820: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2821;
  goto ret0;

 L2821: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2822;
    }
  goto ret0;

 L2822: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L2823;
    }
  goto ret0;

 L2823: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5324 "../.././gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 424 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 370;  /* *movdf_on_si */
    }
  goto ret0;

 L4589: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, DImode))
    {
      operands[4] = x2;
      goto L2837;
    }
  goto ret0;

 L2837: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2838;
    }
  goto ret0;

 L2838: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2839;
  goto ret0;

 L2839: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2840;
    }
  goto ret0;

 L2840: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L2841;
    }
  goto ret0;

 L2841: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 5324 "../.././gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 410 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 424 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 372;  /* *movdf_on_di */
    }
  goto ret0;

 L4590: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, CCmode))
    {
      operands[4] = x2;
      goto L2855;
    }
  goto ret0;

 L2855: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, CCmode))
    {
      operands[1] = x3;
      goto L2856;
    }
  goto ret0;

 L2856: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2857;
  goto ret0;

 L2857: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2858;
    }
  goto ret0;

 L2858: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L2859;
    }
  goto ret0;

 L2859: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 5324 "../.././gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 410 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)) && 
#line 424 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 374;  /* *movdf_on_cc */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_3 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L28;
    case MINUS:
      goto L108;
    case MULT:
      goto L156;
    case NEG:
      goto L934;
    case DIV:
      goto L1033;
    case SQRT:
      goto L1111;
    case ABS:
      goto L1168;
    case MEM:
      goto L1800;
    case IF_THEN_ELSE:
      goto L2880;
    case UNSPEC:
      goto L4614;
    case VEC_MERGE:
      goto L2905;
    case VEC_CONCAT:
      goto L2945;
    default:
     break;
   }
  goto ret0;

 L28: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SFmode)
    goto L4625;
  goto ret0;

 L4625: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L885;
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L29;
    }
  goto ret0;

 L885: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L886;
    }
  goto ret0;

 L886: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L887;
    }
  goto ret0;

 L887: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[3] = x2;
      goto L888;
    }
  goto ret0;

 L888: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1742 "../.././gcc/config/mips/mips.md"
(ISA_HAS_FP4 && TARGET_FUSED_MADD) && 
#line 420 "../.././gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 66;  /* *maddv2sf */
    }
  goto ret0;

 L29: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L30;
    }
  goto ret0;

 L30: ATTRIBUTE_UNUSED_LABEL
  if (
#line 420 "../.././gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 5;  /* addv2sf3 */
    }
  goto ret0;

 L108: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SFmode)
    goto L4627;
  goto ret0;

 L4627: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L909;
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L109;
    }
  goto ret0;

 L909: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V2SFmode)
    goto L4629;
  goto ret0;

 L4629: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == NEG)
    goto L963;
  if (register_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L910;
    }
  goto ret0;

 L963: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V2SFmode))
    {
      operands[1] = x4;
      goto L964;
    }
  goto ret0;

 L964: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L965;
    }
  goto ret0;

 L965: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[3] = x2;
      goto L966;
    }
  goto ret0;

 L966: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1775 "../.././gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (V2SFmode)) && 
#line 420 "../.././gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 75;  /* *nmaddv2sf_fastmath */
    }
  goto ret0;

 L910: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L911;
    }
  goto ret0;

 L911: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[3] = x2;
      goto L912;
    }
  goto ret0;

 L912: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1752 "../.././gcc/config/mips/mips.md"
(ISA_HAS_FP4 && TARGET_FUSED_MADD) && 
#line 420 "../.././gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 69;  /* *msubv2sf */
    }
  goto ret0;

 L109: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2SFmode)
    goto L4631;
  goto ret0;

 L4631: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L1015;
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L110;
    }
  goto ret0;

 L1015: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L1016;
    }
  goto ret0;

 L1016: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[3] = x3;
      goto L1017;
    }
  goto ret0;

 L1017: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1799 "../.././gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (V2SFmode)) && 
#line 420 "../.././gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 81;  /* *nmsubv2sf_fastmath */
    }
  goto ret0;

 L110: ATTRIBUTE_UNUSED_LABEL
  if (
#line 420 "../.././gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 18;  /* subv2sf3 */
    }
  goto ret0;

 L156: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L157;
    }
  goto ret0;

 L157: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L158;
    }
  goto ret0;

 L158: ATTRIBUTE_UNUSED_LABEL
  if (
#line 955 "../.././gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 26;  /* mulv2sf3 */
    }
  goto ret0;

 L934: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SFmode)
    goto L4632;
  goto ret0;

 L4632: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L935;
    case MINUS:
      goto L989;
    case REG:
    case SUBREG:
      goto L4634;
    default:
      goto ret0;
   }
 L4634: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L1203;
    }
  goto ret0;

 L935: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V2SFmode
      && GET_CODE (x3) == MULT)
    goto L936;
  goto ret0;

 L936: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V2SFmode))
    {
      operands[1] = x4;
      goto L937;
    }
  goto ret0;

 L937: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, V2SFmode))
    {
      operands[2] = x4;
      goto L938;
    }
  goto ret0;

 L938: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[3] = x3;
      goto L939;
    }
  goto ret0;

 L939: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1763 "../.././gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (V2SFmode)) && 
#line 420 "../.././gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 72;  /* *nmaddv2sf */
    }
  goto ret0;

 L989: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V2SFmode
      && GET_CODE (x3) == MULT)
    goto L990;
  goto ret0;

 L990: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V2SFmode))
    {
      operands[2] = x4;
      goto L991;
    }
  goto ret0;

 L991: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, V2SFmode))
    {
      operands[3] = x4;
      goto L992;
    }
  goto ret0;

 L992: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L993;
    }
  goto ret0;

 L993: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1787 "../.././gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (V2SFmode)) && 
#line 420 "../.././gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 78;  /* *nmsubv2sf */
    }
  goto ret0;

 L1203: ATTRIBUTE_UNUSED_LABEL
  if (
#line 420 "../.././gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 110;  /* negv2sf2 */
    }
  goto ret0;

 L1033: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L1034;
    }
  if (const_1_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L1052;
    }
  goto ret0;

 L1034: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L1035;
    }
  goto ret0;

 L1035: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1840 "../.././gcc/config/mips/mips.md"
(TARGET_SB1 && (!TARGET_FIX_SB1 || flag_unsafe_math_optimizations)) && 
#line 420 "../.././gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 84;  /* *divv2sf3 */
    }
  goto ret0;

 L1052: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2SFmode)
    goto L4636;
  goto ret0;

 L4636: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == SQRT)
    goto L1132;
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L1053;
    }
  goto ret0;

 L1132: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L1133;
    }
  goto ret0;

 L1133: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1929 "../.././gcc/config/mips/mips.md"
(TARGET_SB1 && flag_unsafe_math_optimizations) && 
#line 420 "../.././gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 97;  /* *rsqrtv2sfa */
    }
  goto ret0;

 L1053: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1858 "../.././gcc/config/mips/mips.md"
(TARGET_SB1 && flag_unsafe_math_optimizations) && 
#line 420 "../.././gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 87;  /* *recipv2sf3 */
    }
  goto ret0;

 L1111: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SFmode)
    goto L4638;
  goto ret0;

 L4638: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == DIV)
    goto L1152;
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L1112;
    }
  goto ret0;

 L1152: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (const_1_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L1153;
    }
  goto ret0;

 L1153: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L1154;
    }
  goto ret0;

 L1154: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1947 "../.././gcc/config/mips/mips.md"
(TARGET_SB1 && flag_unsafe_math_optimizations) && 
#line 420 "../.././gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 100;  /* *rsqrtv2sfb */
    }
  goto ret0;

 L1112: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1911 "../.././gcc/config/mips/mips.md"
(TARGET_SB1) && 
#line 420 "../.././gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 94;  /* sqrtv2sf2 */
    }
  goto ret0;

 L1168: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L1169;
    }
  goto ret0;

 L1169: ATTRIBUTE_UNUSED_LABEL
  if (
#line 420 "../.././gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 103;  /* absv2sf2 */
    }
  goto ret0;

 L1800: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L4639;
    case DImode:
      goto L4640;
    default:
      break;
    }
  goto ret0;

 L4639: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L1801;
  goto ret0;

 L1801: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1802;
    }
  goto ret0;

 L1802: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1803;
    }
  goto ret0;

 L1803: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 3478 "../.././gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 420 "../.././gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 217;  /* *ldxc1_si */
    }
  goto ret0;

 L4640: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L1822;
  goto ret0;

 L1822: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1823;
    }
  goto ret0;

 L1823: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1824;
    }
  goto ret0;

 L1824: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 3478 "../.././gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 420 "../.././gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 220;  /* *ldxc1_di */
    }
  goto ret0;

 L2880: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L4641;
    case DImode:
      goto L4642;
    default:
      break;
    }
  goto ret0;

 L4641: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, SImode))
    {
      operands[4] = x2;
      goto L2881;
    }
  goto ret0;

 L2881: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2882;
    }
  goto ret0;

 L2882: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2883;
  goto ret0;

 L2883: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L2884;
    }
  goto ret0;

 L2884: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, V2SFmode))
    {
      operands[3] = x2;
      goto L2885;
    }
  goto ret0;

 L2885: ATTRIBUTE_UNUSED_LABEL
  if (
#line 29 "../.././gcc/config/mips/mips-ps-3d.md"
(TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 380;  /* *movcc_v2sf_si */
    }
  goto ret0;

 L4642: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, DImode))
    {
      operands[4] = x2;
      goto L2890;
    }
  goto ret0;

 L2890: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2891;
    }
  goto ret0;

 L2891: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2892;
  goto ret0;

 L2892: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L2893;
    }
  goto ret0;

 L2893: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, V2SFmode))
    {
      operands[3] = x2;
      goto L2894;
    }
  goto ret0;

 L2894: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 29 "../.././gcc/config/mips/mips-ps-3d.md"
(TARGET_PAIRED_SINGLE_FLOAT) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 381;  /* *movcc_v2sf_di */
    }
  goto ret0;

 L4614: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 3:
      goto L4643;
    case 2:
      goto L4645;
    case 1:
      goto L4646;
    default:
      break;
    }
  goto ret0;

 L4643: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 200L:
      goto L2898;
    case 202L:
      goto L2958;
    default:
      break;
    }
  goto ret0;

 L2898: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L2899;
    }
  goto ret0;

 L2899: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L2900;
    }
  goto ret0;

 L2900: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, CCV2mode))
    {
      operands[3] = x2;
      goto L2901;
    }
  goto ret0;

 L2901: ATTRIBUTE_UNUSED_LABEL
  if (
#line 42 "../.././gcc/config/mips/mips-ps-3d.md"
(TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 382;  /* mips_cond_move_tf_ps */
    }
  goto ret0;

 L2958: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L2959;
    }
  goto ret0;

 L2959: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L2960;
    }
  goto ret0;

 L2960: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2961;
    }
  goto ret0;

 L2961: ATTRIBUTE_UNUSED_LABEL
  if (
#line 232 "../.././gcc/config/mips/mips-ps-3d.md"
(TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 389;  /* mips_alnv_ps */
    }
  goto ret0;

 L4645: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 204L:
      goto L2965;
    case 207L:
      goto L2981;
    case 209L:
      goto L3096;
    case 211L:
      goto L3129;
    default:
      break;
    }
  goto ret0;

 L2965: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L2966;
    }
  goto ret0;

 L2966: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L2967;
    }
  goto ret0;

 L2967: ATTRIBUTE_UNUSED_LABEL
  if (
#line 243 "../.././gcc/config/mips/mips-ps-3d.md"
(TARGET_MIPS3D))
    {
      return 390;  /* mips_addr_ps */
    }
  goto ret0;

 L2981: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L2982;
    }
  goto ret0;

 L2982: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L2983;
    }
  goto ret0;

 L2983: ATTRIBUTE_UNUSED_LABEL
  if (
#line 274 "../.././gcc/config/mips/mips-ps-3d.md"
(TARGET_MIPS3D))
    {
      return 393;  /* mips_mulr_ps */
    }
  goto ret0;

 L3096: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L3097;
    }
  goto ret0;

 L3097: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L3098;
    }
  goto ret0;

 L3098: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 455 "../.././gcc/config/mips/mips-ps-3d.md"
(TARGET_MIPS3D) && 
#line 420 "../.././gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 409;  /* mips_rsqrt2_ps */
    }
  goto ret0;

 L3129: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L3130;
    }
  goto ret0;

 L3130: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L3131;
    }
  goto ret0;

 L3131: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 474 "../.././gcc/config/mips/mips-ps-3d.md"
(TARGET_MIPS3D) && 
#line 420 "../.././gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 415;  /* mips_recip2_ps */
    }
  goto ret0;

 L4646: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 205L:
      goto L2971;
    case 206L:
      goto L2976;
    case 208L:
      goto L3079;
    case 210L:
      goto L3112;
    default:
      break;
    }
  goto ret0;

 L2971: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L2972;
    }
  goto ret0;

 L2972: ATTRIBUTE_UNUSED_LABEL
  if (
#line 253 "../.././gcc/config/mips/mips-ps-3d.md"
(TARGET_MIPS3D))
    {
      return 391;  /* mips_cvt_pw_ps */
    }
  goto ret0;

 L2976: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L2977;
    }
  goto ret0;

 L2977: ATTRIBUTE_UNUSED_LABEL
  if (
#line 263 "../.././gcc/config/mips/mips-ps-3d.md"
(TARGET_MIPS3D))
    {
      return 392;  /* mips_cvt_ps_pw */
    }
  goto ret0;

 L3079: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L3080;
    }
  goto ret0;

 L3080: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 445 "../.././gcc/config/mips/mips-ps-3d.md"
(TARGET_MIPS3D) && 
#line 420 "../.././gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 406;  /* mips_rsqrt1_ps */
    }
  goto ret0;

 L3112: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L3113;
    }
  goto ret0;

 L3113: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 464 "../.././gcc/config/mips/mips-ps-3d.md"
(TARGET_MIPS3D) && 
#line 420 "../.././gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 412;  /* mips_recip1_ps */
    }
  goto ret0;

 L2905: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SFmode)
    goto L4654;
  goto ret0;

 L4654: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_SELECT)
    goto L2922;
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L2906;
    }
  goto ret0;

 L2922: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L2923;
    }
  goto ret0;

 L2923: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 2)
    goto L2924;
  goto ret0;

 L2924: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L2925;
  goto ret0;

 L2925: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2926;
  goto ret0;

 L2926: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2SFmode)
    goto L4656;
  goto ret0;

 L4656: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_SELECT)
    goto L2937;
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L2927;
    }
  goto ret0;

 L2937: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L2938;
    }
  goto ret0;

 L2938: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 2)
    goto L2939;
  goto ret0;

 L2939: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L2940;
  goto ret0;

 L2940: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2941;
  goto ret0;

 L2941: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (2)]
      && 
#line 120 "../.././gcc/config/mips/mips-ps-3d.md"
(TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 386;  /* mips_plu_ps */
    }
  goto ret0;

 L2927: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (2)]
      && 
#line 104 "../.././gcc/config/mips/mips-ps-3d.md"
(TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 385;  /* mips_pll_ps */
    }
  goto ret0;

 L2906: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2SFmode)
    goto L4658;
  goto ret0;

 L4658: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_SELECT)
    goto L2913;
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L2907;
    }
  goto ret0;

 L2913: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L2914;
    }
  goto ret0;

 L2914: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 2)
    goto L2915;
  goto ret0;

 L2915: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L2916;
  goto ret0;

 L2916: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2917;
  goto ret0;

 L2917: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (2)]
      && 
#line 90 "../.././gcc/config/mips/mips-ps-3d.md"
(TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 384;  /* mips_puu_ps */
    }
  goto ret0;

 L2907: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (2)]
      && 
#line 76 "../.././gcc/config/mips/mips-ps-3d.md"
(TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 383;  /* mips_pul_ps */
    }
  goto ret0;

 L2945: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2946;
    }
  goto ret0;

 L2946: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2947;
    }
  goto ret0;

 L2947: ATTRIBUTE_UNUSED_LABEL
  if (
#line 142 "../.././gcc/config/mips/mips-ps-3d.md"
(TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 387;  /* vec_initv2sf_internal */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_4 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L58;
    case MINUS:
      goto L114;
    case MULT:
      goto L173;
    case NEG:
      goto L449;
    case TRUNCATE:
      goto L640;
    case CLZ:
      goto L1173;
    case NOT:
      goto L1207;
    case AND:
      goto L1216;
    case IOR:
      goto L1240;
    case XOR:
      goto L1264;
    case SIGN_EXTEND:
      goto L1337;
    case ZERO_EXTEND:
      goto L1349;
    case FIX:
      goto L1516;
    case ZERO_EXTRACT:
      goto L1582;
    case UNSPEC:
      goto L4710;
    case HIGH:
      goto L1676;
    case LO_SUM:
      goto L1686;
    case ASHIFT:
      goto L1966;
    case ASHIFTRT:
      goto L1972;
    case LSHIFTRT:
      goto L1978;
    case ROTATERT:
      goto L2065;
    case EQ:
      goto L2190;
    case NE:
      goto L2210;
    case GT:
      goto L2220;
    case GE:
      goto L2244;
    case LT:
      goto L2254;
    case LE:
      goto L2278;
    case GTU:
      goto L2302;
    case GEU:
      goto L2326;
    case LTU:
      goto L2336;
    case LEU:
      goto L2360;
    case IF_THEN_ELSE:
      goto L2755;
    case CONST:
    case LABEL_REF:
    case SYMBOL_REF:
      goto L4679;
    default:
      goto ret0;
   }
 L4679: ATTRIBUTE_UNUSED_LABEL
  if (global_got_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L1698;
    }
  goto ret0;

 L58: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L4727;
  goto ret0;

 L4727: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case REG:
      goto L4730;
    case MULT:
      goto L276;
    default:
     break;
   }
 L4728: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L71;
    }
  goto ret0;

 L4730: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 29)
    goto L59;
  goto L4728;

 L59: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_arith_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L60;
    }
  x2 = XEXP (x1, 0);
  goto L4728;

 L60: ATTRIBUTE_UNUSED_LABEL
  if (
#line 692 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 10;  /* *addsi3_sp2 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L4728;

 L276: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L277;
    }
  goto ret0;

 L277: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L278;
    }
  goto ret0;

 L278: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L279;
    }
 L844: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x2, operands[0])
      && 
#line 1710 "../.././gcc/config/mips/mips.md"
(TARGET_MAD)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 61;  /* madsi */
    }
  goto ret0;

 L279: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1156 "../.././gcc/config/mips/mips.md"
((TARGET_MIPS3900
   || ISA_HAS_MADD_MSUB)
   && !TARGET_MIPS16)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 33;  /* *mul_acc_si */
    }
 L300: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1218 "../.././gcc/config/mips/mips.md"
(ISA_HAS_MACC)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 34;  /* *macc */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L844;

 L71: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L72;
    }
  goto ret0;

 L72: ATTRIBUTE_UNUSED_LABEL
  if (
#line 704 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 12;  /* *addsi3_mips16 */
    }
  goto ret0;

 L114: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L115;
    }
  goto ret0;

 L115: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L4732;
  goto ret0;

 L4732: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L319;
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      return 19;  /* subsi3 */
    }
  goto ret0;

 L319: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L320;
    }
  goto ret0;

 L320: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L321;
    }
  goto ret0;

 L321: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1240 "../.././gcc/config/mips/mips.md"
(ISA_HAS_MSAC)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 35;  /* *msac */
    }
 L344: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1261 "../.././gcc/config/mips/mips.md"
(ISA_HAS_MACC && !ISA_HAS_MSAC)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 36;  /* *msac_using_macc */
    }
 L433: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1417 "../.././gcc/config/mips/mips.md"
(ISA_HAS_MADD_MSUB)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 39;  /* *mul_sub_si */
    }
  goto ret0;

 L173: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L174;
    }
  goto ret0;

 L174: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L175;
    }
  goto ret0;

 L175: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1028 "../.././gcc/config/mips/mips.md"
(GENERATE_MULT3_SI)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 27;  /* mulsi3_mult3 */
    }
 L207: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1088 "../.././gcc/config/mips/mips.md"
(!TARGET_FIX_R4000)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 29;  /* mulsi3_internal */
    }
 L239: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1099 "../.././gcc/config/mips/mips.md"
(TARGET_FIX_R4000)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 31;  /* mulsi3_r4000 */
    }
  goto ret0;

 L449: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L4733;
  goto ret0;

 L4733: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L450;
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      return 106;  /* negsi2 */
    }
  goto ret0;

 L450: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L451;
    }
  goto ret0;

 L451: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L452;
    }
  goto ret0;

 L452: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1472 "../.././gcc/config/mips/mips.md"
(ISA_HAS_MULS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 40;  /* *muls */
    }
  goto ret0;

 L640: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L4735;
  goto ret0;

 L4735: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case LSHIFTRT:
      goto L641;
    case ASHIFTRT:
      goto L1325;
    default:
     break;
   }
  goto ret0;

 L641: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L4737;
  goto ret0;

 L4737: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case MULT:
      goto L642;
    case NEG:
      goto L745;
    case REG:
    case SUBREG:
      goto L4739;
    default:
      goto ret0;
   }
 L4739: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1333;
    }
  goto ret0;

 L642: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode)
    goto L4740;
  goto ret0;

 L4740: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case SIGN_EXTEND:
      goto L643;
    case ZERO_EXTEND:
      goto L667;
    default:
     break;
   }
  goto ret0;

 L643: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L644;
    }
  goto ret0;

 L644: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L645;
  goto ret0;

 L645: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L646;
    }
  goto ret0;

 L646: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L4742;
  goto ret0;

 L4742: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x3, 0) == 32L)
    goto L4744;
  goto ret0;

 L4744: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1643 "../.././gcc/config/mips/mips.md"
(!ISA_HAS_MULHI && !TARGET_FIX_R4000)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 53;  /* smulsi3_highpart_internal */
    }
 L4745: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1658 "../.././gcc/config/mips/mips.md"
(ISA_HAS_MULHI)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 55;  /* smulsi3_highpart_mulhi_internal */
    }
  goto ret0;

 L667: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L668;
    }
  goto ret0;

 L668: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == ZERO_EXTEND)
    goto L669;
  goto ret0;

 L669: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L670;
    }
  goto ret0;

 L670: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L4746;
  goto ret0;

 L4746: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x3, 0) == 32L)
    goto L4748;
  goto ret0;

 L4748: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1643 "../.././gcc/config/mips/mips.md"
(!ISA_HAS_MULHI && !TARGET_FIX_R4000)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 54;  /* umulsi3_highpart_internal */
    }
 L4749: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1658 "../.././gcc/config/mips/mips.md"
(ISA_HAS_MULHI)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 56;  /* umulsi3_highpart_mulhi_internal */
    }
  goto ret0;

 L745: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == MULT)
    goto L746;
  goto ret0;

 L746: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == DImode)
    goto L4750;
  goto ret0;

 L4750: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x5))
    {
    case SIGN_EXTEND:
      goto L747;
    case ZERO_EXTEND:
      goto L775;
    default:
     break;
   }
  goto ret0;

 L747: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L748;
    }
  goto ret0;

 L748: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == SIGN_EXTEND)
    goto L749;
  goto ret0;

 L749: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L750;
    }
  goto ret0;

 L750: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (32)]
      && 
#line 1676 "../.././gcc/config/mips/mips.md"
(ISA_HAS_MULHI)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 57;  /* *smulsi3_highpart_neg_mulhi_internal */
    }
  goto ret0;

 L775: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L776;
    }
  goto ret0;

 L776: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == ZERO_EXTEND)
    goto L777;
  goto ret0;

 L777: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L778;
    }
  goto ret0;

 L778: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (32)]
      && 
#line 1676 "../.././gcc/config/mips/mips.md"
(ISA_HAS_MULHI)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 58;  /* *umulsi3_highpart_neg_mulhi_internal */
    }
  goto ret0;

 L1333: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (32)]
      && 
#line 2240 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16))
    {
      return 132;  /* *mips.md:2236 */
    }
  goto ret0;

 L1325: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1326;
    }
  goto ret0;

 L1326: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_arith_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1327;
    }
  goto ret0;

 L1327: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2231 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16 && INTVAL (operands[2]) >= 32))
    {
      return 131;  /* *mips.md:2226 */
    }
  goto ret0;

 L1173: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1174;
    }
  goto ret0;

 L1174: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1990 "../.././gcc/config/mips/mips.md"
(ISA_HAS_CLZ_CLO))
    {
      return 104;  /* clzsi2 */
    }
  goto ret0;

 L1207: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      return 111;  /* one_cmplsi2 */
    }
  goto ret0;

 L1216: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L4753;
  goto ret0;

 L4753: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == NOT)
    goto L1289;
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1217;
    }
  goto ret0;

 L1289: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1290;
    }
  goto ret0;

 L1290: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == NOT)
    goto L1291;
  goto ret0;

 L1291: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1292;
    }
  goto ret0;

 L1292: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2155 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 125;  /* *norsi3 */
    }
  goto ret0;

 L1217: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (uns_arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1218;
    }
 L1229: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1230;
    }
  goto ret0;

 L1218: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2069 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 113;  /* *andsi3 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L1229;

 L1230: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2080 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 115;  /* *andsi3_mips16 */
    }
  goto ret0;

 L1240: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1241;
    }
  goto ret0;

 L1241: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (uns_arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1242;
    }
 L1253: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1254;
    }
  goto ret0;

 L1242: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2099 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 117;  /* *iorsi3 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L1253;

 L1254: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2110 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 119;  /* *iorsi3_mips16 */
    }
  goto ret0;

 L1264: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1265;
    }
  goto ret0;

 L1265: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (uns_arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1266;
    }
  goto ret0;

 L1266: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2126 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 121;  /* *mips.md:2122 */
    }
 L1278: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2137 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 123;  /* *mips.md:2133 */
    }
  goto ret0;

 L1337: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L4754;
    case QImode:
      goto L4755;
    default:
      break;
    }
  goto ret0;

 L4754: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L1338;
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1458;
    }
 L4758: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L3956;
  goto ret0;

 L1338: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1339;
    }
  goto ret0;

 L1339: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2253 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16))
    {
      return 133;  /* *mips.md:2249 */
    }
  goto ret0;

 L1458: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2451 "../.././gcc/config/mips/mips.md"
(GENERATE_MIPS16E))
    {
      return 156;  /* *extendhisi2_mips16e */
    }
 L1478: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2462 "../.././gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E))
    {
      return 160;  /* *extendhisi2 */
    }
 L1498: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2482 "../.././gcc/config/mips/mips.md"
(ISA_HAS_SEB_SEH))
    {
      return 164;  /* *extendhisi2_seh */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L4758;

 L3956: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L3957;
  goto ret0;

 L3957: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3958;
    }
  goto ret0;

 L3958: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L3959;
    }
  goto ret0;

 L3959: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1029 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP))
    {
      return 499;  /* mips_lhx */
    }
  goto ret0;

 L4755: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L1344;
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1448;
    }
  goto ret0;

 L1344: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1345;
    }
  goto ret0;

 L1345: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2268 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16))
    {
      return 134;  /* *mips.md:2264 */
    }
  goto ret0;

 L1448: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2451 "../.././gcc/config/mips/mips.md"
(GENERATE_MIPS16E))
    {
      return 154;  /* *extendqisi2_mips16e */
    }
 L1468: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2462 "../.././gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E))
    {
      return 158;  /* *extendqisi2 */
    }
 L1488: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2482 "../.././gcc/config/mips/mips.md"
(ISA_HAS_SEB_SEH))
    {
      return 162;  /* *extendqisi2_seb */
    }
  goto ret0;

 L1349: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L4759;
    case QImode:
      goto L4760;
    default:
      break;
    }
  goto ret0;

 L4759: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L1350;
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1383;
    }
 L4764: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1403;
    }
 L4766: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1423;
    }
  goto ret0;

 L1350: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1351;
    }
  goto ret0;

 L1351: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2286 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16))
    {
      return 135;  /* *mips.md:2282 */
    }
  goto ret0;

 L1383: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2355 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 141;  /* *zero_extendhisi2 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L4764;

 L1403: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2365 "../.././gcc/config/mips/mips.md"
(GENERATE_MIPS16E))
    {
      return 145;  /* *zero_extendhisi2_mips16e */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L4766;

 L1423: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2373 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 149;  /* *zero_extendhisi2_mips16 */
    }
  goto ret0;

 L4760: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L1356;
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1373;
    }
 L4763: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1393;
    }
 L4765: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1413;
    }
 L4767: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L3948;
  goto ret0;

 L1356: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1357;
    }
  goto ret0;

 L1357: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2295 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16))
    {
      return 136;  /* *mips.md:2291 */
    }
  goto ret0;

 L1373: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2355 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 139;  /* *zero_extendqisi2 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L4763;

 L1393: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2365 "../.././gcc/config/mips/mips.md"
(GENERATE_MIPS16E))
    {
      return 143;  /* *zero_extendqisi2_mips16e */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L4765;

 L1413: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2373 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 147;  /* *zero_extendqisi2_mips16 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L4767;

 L3948: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L3949;
  goto ret0;

 L3949: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3950;
    }
  goto ret0;

 L3950: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L3951;
    }
  goto ret0;

 L3951: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1017 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP))
    {
      return 498;  /* mips_lbux */
    }
  goto ret0;

 L1516: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DFmode:
      goto L4768;
    case SFmode:
      goto L4769;
    default:
      break;
    }
  goto ret0;

 L4768: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L1517;
    }
  goto ret0;

 L1517: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2534 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && ISA_HAS_TRUNC_W))
    {
      return 168;  /* fix_truncdfsi2_insn */
    }
 L1530: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2545 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !ISA_HAS_TRUNC_W)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 169;  /* fix_truncdfsi2_macro */
    }
  goto ret0;

 L4769: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L1535;
    }
  goto ret0;

 L1535: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2572 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_TRUNC_W))
    {
      return 170;  /* fix_truncsfsi2_insn */
    }
 L1548: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2583 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && !ISA_HAS_TRUNC_W)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 171;  /* fix_truncsfsi2_macro */
    }
  goto ret0;

 L1582: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1583;
    }
  goto ret0;

 L1583: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1584;
    }
  goto ret0;

 L1584: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (immediate_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1585;
    }
  goto ret0;

 L1585: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2886 "../.././gcc/config/mips/mips.md"
(mips_use_ins_ext_p (operands[1], operands[2], operands[3])))
    {
      return 178;  /* extzvsi */
    }
  goto ret0;

 L4710: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 2:
      goto L4770;
    case 3:
      goto L4771;
    case 1:
      goto L4775;
    case 4:
      goto L4782;
    case 7:
      goto L4786;
    default:
      break;
    }
  goto ret0;

 L4770: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 18L:
      goto L1610;
    case 24L:
      goto L1716;
    case 26L:
      goto L1918;
    case 306L:
      goto L3268;
    case 327L:
      goto L3437;
    case 353L:
      goto L3777;
    case 354L:
      goto L3783;
    case 355L:
      goto L3789;
    default:
      break;
    }
  goto ret0;

 L1610: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (memory_operand (x2, BLKmode))
    {
      operands[1] = x2;
      goto L1611;
    }
  goto ret0;

 L1611: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (memory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1612;
    }
  goto ret0;

 L1612: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2944 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[1])))
    {
      return 182;  /* mov_lwl */
    }
  goto ret0;

 L1716: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1717;
    }
  goto ret0;

 L1717: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1718;
    }
  goto ret0;

 L1718: ATTRIBUTE_UNUSED_LABEL
  if (
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == SImode))
    {
      return 200;  /* load_gotsi */
    }
  goto ret0;

 L1918: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1919;
    }
  goto ret0;

 L1919: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1920;
    }
  goto ret0;

 L1920: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3864 "../.././gcc/config/mips/mips.md"
(!ISA_HAS_MACCHI))
    {
      return 239;  /* *mfhilo_si */
    }
 L1932: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3874 "../.././gcc/config/mips/mips.md"
(ISA_HAS_MACCHI))
    {
      return 241;  /* *mfhilo_si_macc */
    }
  goto ret0;

 L3268: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3269;
    }
  goto ret0;

 L3269: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3270;
    }
  goto ret0;

 L3270: ATTRIBUTE_UNUSED_LABEL
  if (
#line 124 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP))
    {
      return 428;  /* mips_modsub */
    }
  goto ret0;

 L3437: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3438;
    }
  goto ret0;

 L3438: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3439;
    }
  goto ret0;

 L3439: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 384 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP) && 
#line 19 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP)))
    {
      return 452;  /* mips_shra_r_w */
    }
  goto ret0;

 L3777: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L3778;
    }
  goto ret0;

 L3778: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4QImode))
    {
      operands[2] = x2;
      goto L3779;
    }
  goto ret0;

 L3779: ATTRIBUTE_UNUSED_LABEL
  if (
#line 753 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP))
    {
      return 482;  /* mips_cmpgu_eq_qb */
    }
  goto ret0;

 L3783: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L3784;
    }
  goto ret0;

 L3784: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4QImode))
    {
      operands[2] = x2;
      goto L3785;
    }
  goto ret0;

 L3785: ATTRIBUTE_UNUSED_LABEL
  if (
#line 763 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP))
    {
      return 483;  /* mips_cmpgu_lt_qb */
    }
  goto ret0;

 L3789: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L3790;
    }
  goto ret0;

 L3790: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4QImode))
    {
      operands[2] = x2;
      goto L3791;
    }
  goto ret0;

 L3791: ATTRIBUTE_UNUSED_LABEL
  if (
#line 773 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP))
    {
      return 484;  /* mips_cmpgu_le_qb */
    }
  goto ret0;

 L4771: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 19L:
      goto L1622;
    case 23L:
      goto L2579;
    default:
      break;
    }
  goto ret0;

 L1622: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (memory_operand (x2, BLKmode))
    {
      operands[1] = x2;
      goto L1623;
    }
  goto ret0;

 L1623: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (memory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1624;
    }
  goto ret0;

 L1624: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1625;
    }
  goto ret0;

 L1625: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2955 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[1])))
    {
      return 184;  /* mov_lwr */
    }
  goto ret0;

 L2579: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2580;
    }
  goto ret0;

 L2580: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2581;
    }
  goto ret0;

 L2581: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 79
      && (
#line 5000 "../.././gcc/config/mips/mips.md"
(TARGET_ABICALLS) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 347;  /* load_callsi */
    }
  goto ret0;

 L4775: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 28L:
      goto L2872;
    case 307L:
      goto L3274;
    case 313L:
      goto L3331;
    case 314L:
      goto L3336;
    case 346L:
      goto L3719;
    default:
      break;
    }
  goto ret0;

 L2872: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && (
#line 5419 "../.././gcc/config/mips/mips.md"
(HAVE_AS_TLS && !TARGET_MIPS16) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 378;  /* tls_get_tp_si */
    }
  goto ret0;

 L3274: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L3275;
    }
  goto ret0;

 L3275: ATTRIBUTE_UNUSED_LABEL
  if (
#line 134 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP))
    {
      return 429;  /* mips_raddu_w_qb */
    }
  goto ret0;

 L3331: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L3332;
    }
  goto ret0;

 L3332: ATTRIBUTE_UNUSED_LABEL
  if (
#line 207 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP))
    {
      return 436;  /* mips_preceq_w_phl */
    }
  goto ret0;

 L3336: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L3337;
    }
  goto ret0;

 L3337: ATTRIBUTE_UNUSED_LABEL
  if (
#line 216 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP))
    {
      return 437;  /* mips_preceq_w_phr */
    }
  goto ret0;

 L3719: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3720;
    }
  goto ret0;

 L3720: ATTRIBUTE_UNUSED_LABEL
  if (
#line 666 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP))
    {
      return 472;  /* mips_bitrev */
    }
  goto ret0;

 L4782: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 347)
    goto L3724;
  goto ret0;

 L3724: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3725;
    }
  goto ret0;

 L3725: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3726;
    }
  goto ret0;

 L3726: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 183)
    goto L3727;
  goto ret0;

 L3727: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 3);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 182
      && 
#line 679 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP))
    {
      return 473;  /* mips_insv */
    }
  goto ret0;

 L4786: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 367)
    goto L3937;
  goto ret0;

 L3937: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (const_uimm6_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3938;
    }
  goto ret0;

 L3938: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 182)
    goto L3939;
  goto ret0;

 L3939: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 183)
    goto L3940;
  goto ret0;

 L3940: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 3);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 184)
    goto L3941;
  goto ret0;

 L3941: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 4);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L3942;
  goto ret0;

 L3942: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 5);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 186)
    goto L3943;
  goto ret0;

 L3943: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 6);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 187
      && 
#line 1004 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP))
    {
      return 497;  /* mips_rddsp */
    }
  goto ret0;

 L1676: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L4787;
  goto ret0;

 L4787: ATTRIBUTE_UNUSED_LABEL
  if (global_got_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1677;
    }
 L4788: ATTRIBUTE_UNUSED_LABEL
  if (local_got_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1707;
    }
  goto ret0;

 L1677: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3073 "../.././gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 192;  /* *xgot_hisi */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L4788;

 L1707: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3120 "../.././gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 198;  /* *got_pagesi */
    }
  goto ret0;

 L1686: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1687;
    }
  goto ret0;

 L1687: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (global_got_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1688;
    }
 L1729: ATTRIBUTE_UNUSED_LABEL
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1730;
    }
  goto ret0;

 L1688: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3089 "../.././gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 194;  /* *xgot_losi */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L1729;

 L1730: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3155 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 202;  /* *lowsi */
    }
 L1742: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3164 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 204;  /* *lowsi_mips16 */
    }
  goto ret0;

 L1966: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1967;
    }
  goto ret0;

 L1967: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1968;
    }
  goto ret0;

 L1968: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4038 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 249;  /* *ashlsi3 */
    }
 L2025: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4068 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 258;  /* *ashlsi3_mips16 */
    }
  goto ret0;

 L1972: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1973;
    }
  goto ret0;

 L1973: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1974;
    }
  goto ret0;

 L1974: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4038 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 250;  /* *ashrsi3 */
    }
 L2031: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4068 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 259;  /* *ashrsi3_mips16 */
    }
  goto ret0;

 L1978: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L4789;
  goto ret0;

 L4789: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1979;
    }
 L4790: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2060;
    }
  goto ret0;

 L1979: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1980;
    }
  x2 = XEXP (x1, 0);
  goto L4790;

 L1980: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4038 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 251;  /* *lshrsi3 */
    }
 L2037: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4068 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 260;  /* *lshrsi3_mips16 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L4790;

 L2060: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2061;
    }
  goto ret0;

 L2061: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4171 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 264;  /* *mips.md:4167 */
    }
  goto ret0;

 L2065: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2066;
    }
  goto ret0;

 L2066: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2067;
    }
  goto ret0;

 L2067: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4185 "../.././gcc/config/mips/mips.md"
(ISA_HAS_ROTR_SI))
    {
      return 265;  /* rotrsi3 */
    }
  goto ret0;

 L2190: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2191;
    }
  goto ret0;

 L2191: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT)
    goto L4791;
  goto ret0;

 L4791: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x2, 0) == 0L)
    goto L4793;
  goto ret0;

 L4793: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4434 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 279;  /* *seq_si */
    }
 L4794: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4443 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 281;  /* *seq_si_mips16 */
    }
  goto ret0;

 L2210: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2211;
    }
  goto ret0;

 L2211: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 4462 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 283;  /* *sne_si */
    }
  goto ret0;

 L2220: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2221;
    }
  goto ret0;

 L2221: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2222;
    }
 L2233: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2234;
    }
  goto ret0;

 L2222: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4478 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 285;  /* *sgt_si */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2233;

 L2234: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4487 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 287;  /* *sgt_si_mips16 */
    }
  goto ret0;

 L2244: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2245;
    }
  goto ret0;

 L2245: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 4503 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 289;  /* *sge_si */
    }
  goto ret0;

 L2254: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2255;
    }
  goto ret0;

 L2255: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2256;
    }
  goto ret0;

 L2256: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4519 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 291;  /* *slt_si */
    }
 L2268: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4528 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 293;  /* *slt_si_mips16 */
    }
  goto ret0;

 L2278: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2279;
    }
  goto ret0;

 L2279: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (sle_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2280;
    }
  goto ret0;

 L2280: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4549 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 295;  /* *sle_si */
    }
 L2292: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4561 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 297;  /* *sle_si_mips16 */
    }
  goto ret0;

 L2302: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2303;
    }
  goto ret0;

 L2303: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2304;
    }
 L2315: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2316;
    }
  goto ret0;

 L2304: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4583 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 299;  /* *sgtu_si */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2315;

 L2316: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4592 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 301;  /* *sgtu_si_mips16 */
    }
  goto ret0;

 L2326: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2327;
    }
  goto ret0;

 L2327: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 4608 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 303;  /* *sge_si */
    }
  goto ret0;

 L2336: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2337;
    }
  goto ret0;

 L2337: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2338;
    }
  goto ret0;

 L2338: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4624 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 305;  /* *sltu_si */
    }
 L2350: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4633 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 307;  /* *sltu_si_mips16 */
    }
  goto ret0;

 L2360: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2361;
    }
  goto ret0;

 L2361: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (sleu_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2362;
    }
  goto ret0;

 L2362: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4654 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 309;  /* *sleu_si */
    }
 L2374: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4666 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 311;  /* *sleu_si_mips16 */
    }
  goto ret0;

 L2755: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L4795;
    case DImode:
      goto L4796;
    case CCmode:
      goto L4797;
    default:
      break;
    }
  goto ret0;

 L4795: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, SImode))
    {
      operands[4] = x2;
      goto L2756;
    }
  goto ret0;

 L2756: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2757;
    }
  goto ret0;

 L2757: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2758;
  goto ret0;

 L2758: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2759;
    }
  goto ret0;

 L2759: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2760;
    }
  goto ret0;

 L2760: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5309 "../.././gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE))
    {
      return 363;  /* *movsi_on_si */
    }
  goto ret0;

 L4796: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, DImode))
    {
      operands[4] = x2;
      goto L2774;
    }
  goto ret0;

 L2774: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2775;
    }
  goto ret0;

 L2775: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2776;
  goto ret0;

 L2776: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2777;
    }
  goto ret0;

 L2777: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2778;
    }
  goto ret0;

 L2778: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5309 "../.././gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 410 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 365;  /* *movsi_on_di */
    }
  goto ret0;

 L4797: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, CCmode))
    {
      operands[4] = x2;
      goto L2792;
    }
  goto ret0;

 L2792: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, CCmode))
    {
      operands[1] = x3;
      goto L2793;
    }
  goto ret0;

 L2793: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2794;
  goto ret0;

 L2794: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2795;
    }
  goto ret0;

 L2795: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2796;
    }
  goto ret0;

 L2796: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5309 "../.././gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 410 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 367;  /* *movsi_on_cc */
    }
  goto ret0;

 L1698: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3103 "../.././gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !TARGET_XGOT) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 196;  /* *got_dispsi */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_5 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L64;
    case SIGN_EXTEND:
      goto L82;
    case MINUS:
      goto L119;
    case MULT:
      goto L190;
    case NEG:
      goto L588;
    case TRUNCATE:
      goto L796;
    case CLZ:
      goto L1178;
    case NOT:
      goto L1211;
    case AND:
      goto L1222;
    case IOR:
      goto L1246;
    case XOR:
      goto L1270;
    case ZERO_EXTEND:
      goto L1367;
    case FIX:
      goto L1552;
    case ZERO_EXTRACT:
      goto L1589;
    case UNSPEC:
      goto L4846;
    case HIGH:
      goto L1660;
    case LO_SUM:
      goto L1692;
    case ASHIFT:
      goto L1984;
    case ASHIFTRT:
      goto L1990;
    case LSHIFTRT:
      goto L1996;
    case ROTATERT:
      goto L2071;
    case EQ:
      goto L2195;
    case NE:
      goto L2215;
    case GT:
      goto L2226;
    case GE:
      goto L2249;
    case LT:
      goto L2260;
    case LE:
      goto L2284;
    case GTU:
      goto L2308;
    case GEU:
      goto L2331;
    case LTU:
      goto L2342;
    case LEU:
      goto L2366;
    case IF_THEN_ELSE:
      goto L2764;
    case CONST:
    case LABEL_REF:
    case SYMBOL_REF:
      goto L4819;
    default:
      goto L4821;
   }
 L4819: ATTRIBUTE_UNUSED_LABEL
  if (general_symbolic_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L1672;
    }
 L4821: ATTRIBUTE_UNUSED_LABEL
  if (global_got_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L1702;
    }
  goto ret0;

 L64: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L4857;
  goto ret0;

 L4857: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case REG:
      goto L4860;
    case MULT:
      goto L849;
    default:
     break;
   }
 L4858: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L77;
    }
  goto ret0;

 L4860: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 29)
    goto L65;
  goto L4858;

 L65: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_arith_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L66;
    }
  x2 = XEXP (x1, 0);
  goto L4858;

 L66: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 692 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 11;  /* *adddi3_sp2 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L4858;

 L849: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L4861;
  goto ret0;

 L4861: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case SIGN_EXTEND:
      goto L850;
    case ZERO_EXTEND:
      goto L860;
    default:
     break;
   }
  goto ret0;

 L850: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L851;
    }
  goto ret0;

 L851: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L852;
  goto ret0;

 L852: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L853;
    }
  goto ret0;

 L853: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L854;
    }
  goto ret0;

 L854: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1721 "../.././gcc/config/mips/mips.md"
((TARGET_MAD || ISA_HAS_MACC)
   && !TARGET_64BIT))
    {
      return 62;  /* *smul_acc_di */
    }
  goto ret0;

 L860: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L861;
    }
  goto ret0;

 L861: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L862;
  goto ret0;

 L862: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L863;
    }
  goto ret0;

 L863: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L864;
    }
  goto ret0;

 L864: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1721 "../.././gcc/config/mips/mips.md"
((TARGET_MAD || ISA_HAS_MACC)
   && !TARGET_64BIT))
    {
      return 63;  /* *umul_acc_di */
    }
  goto ret0;

 L77: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L78;
    }
  goto ret0;

 L78: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 704 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 13;  /* *adddi3_mips16 */
    }
  goto ret0;

 L82: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L4863;
    case QImode:
      goto L4866;
    case HImode:
      goto L4867;
    default:
      break;
    }
  goto ret0;

 L4863: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L83;
    case MINUS:
      goto L126;
    case ASHIFT:
      goto L2003;
    case ASHIFTRT:
      goto L2010;
    case LSHIFTRT:
      goto L2017;
    case REG:
    case SUBREG:
    case MEM:
      goto L4865;
    default:
      goto ret0;
   }
 L4865: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1443;
    }
  goto ret0;

 L83: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L84;
    }
  goto ret0;

 L84: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L85;
    }
  goto ret0;

 L85: ATTRIBUTE_UNUSED_LABEL
  if (
#line 854 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16))
    {
      return 14;  /* *addsi3_extended */
    }
 L92: ATTRIBUTE_UNUSED_LABEL
  if (
#line 868 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16))
    {
      return 15;  /* *addsi3_extended_mips16 */
    }
  goto ret0;

 L126: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L127;
    }
  goto ret0;

 L127: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L128;
    }
  goto ret0;

 L128: ATTRIBUTE_UNUSED_LABEL
  if (
#line 908 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return 21;  /* *subsi3_extended */
    }
  goto ret0;

 L2003: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2004;
    }
  goto ret0;

 L2004: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2005;
    }
  goto ret0;

 L2005: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4054 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16))
    {
      return 255;  /* *ashlsi3_extend */
    }
  goto ret0;

 L2010: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2011;
    }
  goto ret0;

 L2011: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2012;
    }
  goto ret0;

 L2012: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4054 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16))
    {
      return 256;  /* *ashrsi3_extend */
    }
  goto ret0;

 L2017: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2018;
    }
  goto ret0;

 L2018: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2019;
    }
  goto ret0;

 L2019: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4054 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16))
    {
      return 257;  /* *lshrsi3_extend */
    }
  goto ret0;

 L1443: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2430 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return 153;  /* extendsidi2 */
    }
  goto ret0;

 L4866: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1453;
    }
  goto ret0;

 L1453: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2451 "../.././gcc/config/mips/mips.md"
(GENERATE_MIPS16E) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 155;  /* *extendqidi2_mips16e */
    }
 L1473: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2462 "../.././gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 159;  /* *extendqidi2 */
    }
 L1493: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2482 "../.././gcc/config/mips/mips.md"
(ISA_HAS_SEB_SEH) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 163;  /* *extendqidi2_seb */
    }
  goto ret0;

 L4867: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1463;
    }
  goto ret0;

 L1463: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2451 "../.././gcc/config/mips/mips.md"
(GENERATE_MIPS16E) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 157;  /* *extendhidi2_mips16e */
    }
 L1483: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2462 "../.././gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 161;  /* *extendhidi2 */
    }
 L1503: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2482 "../.././gcc/config/mips/mips.md"
(ISA_HAS_SEB_SEH) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 165;  /* *extendhidi2_seh */
    }
  goto ret0;

 L119: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L4871;
  goto ret0;

 L4871: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L120;
    }
 L4872: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L607;
    }
  goto ret0;

 L120: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L121;
    }
  x2 = XEXP (x1, 0);
  goto L4872;

 L121: ATTRIBUTE_UNUSED_LABEL
  if (
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return 20;  /* subdi3 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L4872;

 L607: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == MULT)
    goto L608;
  goto ret0;

 L608: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L4873;
  goto ret0;

 L4873: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case SIGN_EXTEND:
      goto L609;
    case ZERO_EXTEND:
      goto L619;
    default:
     break;
   }
  goto ret0;

 L609: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L610;
    }
  goto ret0;

 L610: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L611;
  goto ret0;

 L611: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L612;
    }
  goto ret0;

 L612: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1604 "../.././gcc/config/mips/mips.md"
(!TARGET_64BIT && ISA_HAS_MSAC))
    {
      return 51;  /* *msac_di */
    }
  goto ret0;

 L619: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L620;
    }
  goto ret0;

 L620: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L621;
  goto ret0;

 L621: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L622;
    }
  goto ret0;

 L622: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1604 "../.././gcc/config/mips/mips.md"
(!TARGET_64BIT && ISA_HAS_MSAC))
    {
      return 52;  /* *msacu_di */
    }
  goto ret0;

 L190: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L4876;
  goto ret0;

 L4876: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SIGN_EXTEND:
      goto L457;
    case ZERO_EXTEND:
      goto L465;
    case REG:
    case SUBREG:
      goto L4875;
    default:
      goto ret0;
   }
 L4875: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L191;
    }
  goto ret0;

 L457: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L458;
    }
  goto ret0;

 L458: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == SIGN_EXTEND)
    goto L459;
  goto ret0;

 L459: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L460;
    }
  goto ret0;

 L460: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1507 "../.././gcc/config/mips/mips.md"
(!TARGET_64BIT && !TARGET_FIX_R4000))
    {
      return 41;  /* mulsidi3_32bit_internal */
    }
 L487: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1517 "../.././gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_FIX_R4000)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 43;  /* mulsidi3_32bit_r4000 */
    }
 L529: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1530 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 45;  /* *mulsidi3_64bit */
    }
  goto ret0;

 L465: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L466;
    }
  goto ret0;

 L466: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L467;
  goto ret0;

 L467: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L468;
    }
  goto ret0;

 L468: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1507 "../.././gcc/config/mips/mips.md"
(!TARGET_64BIT && !TARGET_FIX_R4000))
    {
      return 42;  /* umulsidi3_32bit_internal */
    }
 L506: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1517 "../.././gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_FIX_R4000)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 44;  /* umulsidi3_32bit_r4000 */
    }
 L552: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1530 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 46;  /* *umulsidi3_64bit */
    }
  goto ret0;

 L191: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L192;
    }
  goto ret0;

 L192: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1052 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && GENERATE_MULT3_DI)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 28;  /* muldi3_mult3 */
    }
 L222: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1088 "../.././gcc/config/mips/mips.md"
(!TARGET_FIX_R4000) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 30;  /* muldi3_internal */
    }
 L256: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1099 "../.././gcc/config/mips/mips.md"
(TARGET_FIX_R4000) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 32;  /* muldi3_r4000 */
    }
  goto ret0;

 L588: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L4878;
  goto ret0;

 L4878: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L589;
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1188;
    }
  goto ret0;

 L589: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L4880;
  goto ret0;

 L4880: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case SIGN_EXTEND:
      goto L590;
    case ZERO_EXTEND:
      goto L599;
    default:
     break;
   }
  goto ret0;

 L590: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L591;
    }
  goto ret0;

 L591: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L592;
  goto ret0;

 L592: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L593;
    }
  goto ret0;

 L593: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1592 "../.././gcc/config/mips/mips.md"
(!TARGET_64BIT && ISA_HAS_MULS))
    {
      return 49;  /* *muls_di */
    }
  goto ret0;

 L599: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L600;
    }
  goto ret0;

 L600: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L601;
  goto ret0;

 L601: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L602;
    }
  goto ret0;

 L602: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1592 "../.././gcc/config/mips/mips.md"
(!TARGET_64BIT && ISA_HAS_MULS))
    {
      return 50;  /* *mulsu_di */
    }
  goto ret0;

 L1188: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2018 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16))
    {
      return 107;  /* negdi2 */
    }
  goto ret0;

 L796: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == TImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L797;
  goto ret0;

 L797: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == TImode
      && GET_CODE (x3) == MULT)
    goto L798;
  goto ret0;

 L798: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == TImode)
    goto L4882;
  goto ret0;

 L4882: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case SIGN_EXTEND:
      goto L799;
    case ZERO_EXTEND:
      goto L823;
    default:
     break;
   }
  goto ret0;

 L799: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, DImode))
    {
      operands[1] = x5;
      goto L800;
    }
  goto ret0;

 L800: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == TImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L801;
  goto ret0;

 L801: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, DImode))
    {
      operands[2] = x5;
      goto L802;
    }
  goto ret0;

 L802: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (64)]
      && 
#line 1695 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000
   && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 59;  /* smuldi3_highpart */
    }
  goto ret0;

 L823: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, DImode))
    {
      operands[1] = x5;
      goto L824;
    }
  goto ret0;

 L824: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == TImode
      && GET_CODE (x4) == ZERO_EXTEND)
    goto L825;
  goto ret0;

 L825: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, DImode))
    {
      operands[2] = x5;
      goto L826;
    }
  goto ret0;

 L826: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (64)]
      && 
#line 1695 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000
   && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 60;  /* umuldi3_highpart */
    }
  goto ret0;

 L1178: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1179;
    }
  goto ret0;

 L1179: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1990 "../.././gcc/config/mips/mips.md"
(ISA_HAS_CLZ_CLO) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 105;  /* clzdi2 */
    }
  goto ret0;

 L1211: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1212;
    }
  goto ret0;

 L1212: ATTRIBUTE_UNUSED_LABEL
  if (
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return 112;  /* one_cmpldi2 */
    }
  goto ret0;

 L1222: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L4885;
  goto ret0;

 L4885: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == NOT)
    goto L1297;
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1223;
    }
  goto ret0;

 L1297: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1298;
    }
  goto ret0;

 L1298: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == NOT)
    goto L1299;
  goto ret0;

 L1299: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1300;
    }
  goto ret0;

 L1300: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2155 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 126;  /* *nordi3 */
    }
  goto ret0;

 L1223: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (uns_arith_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1224;
    }
 L1235: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1236;
    }
  goto ret0;

 L1224: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2069 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 114;  /* *anddi3 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L1235;

 L1236: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2080 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 116;  /* *anddi3_mips16 */
    }
  goto ret0;

 L1246: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1247;
    }
  goto ret0;

 L1247: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (uns_arith_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1248;
    }
 L1259: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1260;
    }
  goto ret0;

 L1248: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2099 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 118;  /* *iordi3 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L1259;

 L1260: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2110 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 120;  /* *iordi3_mips16 */
    }
  goto ret0;

 L1270: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1271;
    }
  goto ret0;

 L1271: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (uns_arith_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1272;
    }
  goto ret0;

 L1272: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2126 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 122;  /* *mips.md:2122 */
    }
 L1284: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2137 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 124;  /* *mips.md:2133 */
    }
  goto ret0;

 L1367: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L4886;
    case QImode:
      goto L4887;
    case HImode:
      goto L4888;
    default:
      break;
    }
  goto ret0;

 L4886: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1368;
    }
  goto ret0;

 L1368: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2321 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return 138;  /* zero_extendsidi2 */
    }
  goto ret0;

 L4887: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1378;
    }
 L4889: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1398;
    }
 L4891: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1418;
    }
  goto ret0;

 L1378: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2355 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 140;  /* *zero_extendqidi2 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L4889;

 L1398: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2365 "../.././gcc/config/mips/mips.md"
(GENERATE_MIPS16E) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 144;  /* *zero_extendqidi2_mips16e */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L4891;

 L1418: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2373 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 148;  /* *zero_extendqidi2_mips16 */
    }
  goto ret0;

 L4888: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1388;
    }
 L4890: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1408;
    }
 L4892: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1428;
    }
  goto ret0;

 L1388: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2355 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 142;  /* *zero_extendhidi2 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L4890;

 L1408: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2365 "../.././gcc/config/mips/mips.md"
(GENERATE_MIPS16E) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 146;  /* *zero_extendhidi2_mips16e */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L4892;

 L1428: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2373 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 150;  /* *zero_extendhidi2_mips16 */
    }
  goto ret0;

 L1552: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DFmode:
      goto L4893;
    case SFmode:
      goto L4894;
    default:
      break;
    }
  goto ret0;

 L4893: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L1553;
    }
  goto ret0;

 L1553: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2599 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_FLOAT64 && TARGET_DOUBLE_FLOAT))
    {
      return 172;  /* fix_truncdfdi2 */
    }
  goto ret0;

 L4894: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L1558;
    }
  goto ret0;

 L1558: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2610 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_FLOAT64 && TARGET_DOUBLE_FLOAT))
    {
      return 173;  /* fix_truncsfdi2 */
    }
  goto ret0;

 L1589: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1590;
    }
  goto ret0;

 L1590: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1591;
    }
  goto ret0;

 L1591: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (immediate_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1592;
    }
  goto ret0;

 L1592: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2886 "../.././gcc/config/mips/mips.md"
(mips_use_ins_ext_p (operands[1], operands[2], operands[3])) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 179;  /* extzvdi */
    }
  goto ret0;

 L4846: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 2:
      goto L4895;
    case 3:
      goto L4896;
    case 1:
      goto L4900;
    default:
      break;
    }
  goto ret0;

 L4895: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 18L:
      goto L1616;
    case 24L:
      goto L1722;
    case 26L:
      goto L1924;
    case 364L:
      goto L3887;
    default:
      break;
    }
  goto ret0;

 L1616: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (memory_operand (x2, BLKmode))
    {
      operands[1] = x2;
      goto L1617;
    }
  goto ret0;

 L1617: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (memory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1618;
    }
  goto ret0;

 L1618: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2944 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[1])) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 183;  /* mov_ldl */
    }
  goto ret0;

 L1722: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1723;
    }
  goto ret0;

 L1723: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (immediate_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1724;
    }
  goto ret0;

 L1724: ATTRIBUTE_UNUSED_LABEL
  if (
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == DImode))
    {
      return 201;  /* load_gotdi */
    }
  goto ret0;

 L1924: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1925;
    }
  goto ret0;

 L1925: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1926;
    }
  goto ret0;

 L1926: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3864 "../.././gcc/config/mips/mips.md"
(!ISA_HAS_MACCHI) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 240;  /* *mfhilo_di */
    }
 L1938: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3874 "../.././gcc/config/mips/mips.md"
(ISA_HAS_MACCHI) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 242;  /* *mfhilo_di_macc */
    }
  goto ret0;

 L3887: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3888;
    }
  goto ret0;

 L3888: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3889;
    }
  goto ret0;

 L3889: ATTRIBUTE_UNUSED_LABEL
  if (
#line 942 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP && !TARGET_64BIT))
    {
      return 494;  /* mips_shilo */
    }
  goto ret0;

 L4896: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 19L:
      goto L1629;
    case 23L:
      goto L2585;
    case 333L:
      goto L3574;
    case 334L:
      goto L3581;
    case 335L:
      goto L3588;
    case 336L:
      goto L3595;
    default:
      break;
    }
  goto ret0;

 L1629: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (memory_operand (x2, BLKmode))
    {
      operands[1] = x2;
      goto L1630;
    }
  goto ret0;

 L1630: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (memory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1631;
    }
  goto ret0;

 L1631: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L1632;
    }
  goto ret0;

 L1632: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2955 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[1])) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 185;  /* mov_ldr */
    }
  goto ret0;

 L2585: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2586;
    }
  goto ret0;

 L2586: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (immediate_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2587;
    }
  goto ret0;

 L2587: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 79
      && (
#line 5000 "../.././gcc/config/mips/mips.md"
(TARGET_ABICALLS) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 348;  /* load_calldi */
    }
  goto ret0;

 L3574: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3575;
    }
  goto ret0;

 L3575: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4QImode))
    {
      operands[2] = x2;
      goto L3576;
    }
  goto ret0;

 L3576: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, V4QImode))
    {
      operands[3] = x2;
      goto L3577;
    }
  goto ret0;

 L3577: ATTRIBUTE_UNUSED_LABEL
  if (
#line 479 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP && !TARGET_64BIT))
    {
      return 459;  /* mips_dpau_h_qbl */
    }
  goto ret0;

 L3581: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3582;
    }
  goto ret0;

 L3582: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4QImode))
    {
      operands[2] = x2;
      goto L3583;
    }
  goto ret0;

 L3583: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, V4QImode))
    {
      operands[3] = x2;
      goto L3584;
    }
  goto ret0;

 L3584: ATTRIBUTE_UNUSED_LABEL
  if (
#line 490 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP && !TARGET_64BIT))
    {
      return 460;  /* mips_dpau_h_qbr */
    }
  goto ret0;

 L3588: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3589;
    }
  goto ret0;

 L3589: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4QImode))
    {
      operands[2] = x2;
      goto L3590;
    }
  goto ret0;

 L3590: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, V4QImode))
    {
      operands[3] = x2;
      goto L3591;
    }
  goto ret0;

 L3591: ATTRIBUTE_UNUSED_LABEL
  if (
#line 502 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP && !TARGET_64BIT))
    {
      return 461;  /* mips_dpsu_h_qbl */
    }
  goto ret0;

 L3595: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3596;
    }
  goto ret0;

 L3596: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4QImode))
    {
      operands[2] = x2;
      goto L3597;
    }
  goto ret0;

 L3597: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, V4QImode))
    {
      operands[3] = x2;
      goto L3598;
    }
  goto ret0;

 L3598: ATTRIBUTE_UNUSED_LABEL
  if (
#line 513 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP && !TARGET_64BIT))
    {
      return 462;  /* mips_dpsu_h_qbr */
    }
  goto ret0;

 L4900: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 28)
    goto L2876;
  goto ret0;

 L2876: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && (
#line 5419 "../.././gcc/config/mips/mips.md"
(HAVE_AS_TLS && !TARGET_MIPS16) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 379;  /* tls_get_tp_di */
    }
  goto ret0;

 L1660: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L4906;
  goto ret0;

 L4906: ATTRIBUTE_UNUSED_LABEL
  if (general_symbolic_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1661;
    }
 L4907: ATTRIBUTE_UNUSED_LABEL
  if (global_got_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1682;
    }
 L4908: ATTRIBUTE_UNUSED_LABEL
  if (local_got_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1712;
    }
  goto ret0;

 L1661: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2999 "../.././gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS))
    {
      return 190;  /* *lea_high64 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L4907;

 L1682: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3073 "../.././gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 193;  /* *xgot_hidi */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L4908;

 L1712: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3120 "../.././gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 199;  /* *got_pagedi */
    }
  goto ret0;

 L1692: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1693;
    }
  goto ret0;

 L1693: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (global_got_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1694;
    }
 L1735: ATTRIBUTE_UNUSED_LABEL
  if (immediate_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1736;
    }
  goto ret0;

 L1694: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3089 "../.././gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 195;  /* *xgot_lodi */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L1735;

 L1736: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3155 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 203;  /* *lowdi */
    }
 L1748: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3164 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 205;  /* *lowdi_mips16 */
    }
  goto ret0;

 L1984: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1985;
    }
  goto ret0;

 L1985: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1986;
    }
  goto ret0;

 L1986: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4038 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 252;  /* *ashldi3 */
    }
 L2043: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4090 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16))
    {
      return 261;  /* *ashldi3_mips16 */
    }
  goto ret0;

 L1990: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1991;
    }
  goto ret0;

 L1991: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1992;
    }
  goto ret0;

 L1992: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4038 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 253;  /* *ashrdi3 */
    }
 L2049: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4110 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16))
    {
      return 262;  /* *ashrdi3_mips16 */
    }
  goto ret0;

 L1996: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1997;
    }
  goto ret0;

 L1997: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1998;
    }
  goto ret0;

 L1998: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4038 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 254;  /* *lshrdi3 */
    }
 L2055: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4129 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16))
    {
      return 263;  /* *lshrdi3_mips16 */
    }
  goto ret0;

 L2071: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2072;
    }
  goto ret0;

 L2072: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2073;
    }
  goto ret0;

 L2073: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4185 "../.././gcc/config/mips/mips.md"
(ISA_HAS_ROTR_DI) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 266;  /* rotrdi3 */
    }
  goto ret0;

 L2195: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2196;
    }
  goto ret0;

 L2196: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT)
    goto L4909;
  goto ret0;

 L4909: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x2, 0) == 0L)
    goto L4911;
  goto ret0;

 L4911: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4434 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 280;  /* *seq_di */
    }
 L4912: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4443 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 282;  /* *seq_di_mips16 */
    }
  goto ret0;

 L2215: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2216;
    }
  goto ret0;

 L2216: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && (
#line 4462 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 284;  /* *sne_di */
    }
  goto ret0;

 L2226: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2227;
    }
  goto ret0;

 L2227: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2228;
    }
 L2239: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2240;
    }
  goto ret0;

 L2228: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4478 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 286;  /* *sgt_di */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2239;

 L2240: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4487 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 288;  /* *sgt_di_mips16 */
    }
  goto ret0;

 L2249: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2250;
    }
  goto ret0;

 L2250: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && (
#line 4503 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 290;  /* *sge_di */
    }
  goto ret0;

 L2260: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2261;
    }
  goto ret0;

 L2261: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2262;
    }
  goto ret0;

 L2262: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4519 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 292;  /* *slt_di */
    }
 L2274: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4528 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 294;  /* *slt_di_mips16 */
    }
  goto ret0;

 L2284: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2285;
    }
  goto ret0;

 L2285: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (sle_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2286;
    }
  goto ret0;

 L2286: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4549 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 296;  /* *sle_di */
    }
 L2298: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4561 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 298;  /* *sle_di_mips16 */
    }
  goto ret0;

 L2308: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2309;
    }
  goto ret0;

 L2309: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2310;
    }
 L2321: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2322;
    }
  goto ret0;

 L2310: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4583 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 300;  /* *sgtu_di */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2321;

 L2322: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4592 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 302;  /* *sgtu_di_mips16 */
    }
  goto ret0;

 L2331: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2332;
    }
  goto ret0;

 L2332: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && (
#line 4608 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 304;  /* *sge_di */
    }
  goto ret0;

 L2342: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2343;
    }
  goto ret0;

 L2343: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2344;
    }
  goto ret0;

 L2344: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4624 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 306;  /* *sltu_di */
    }
 L2356: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4633 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 308;  /* *sltu_di_mips16 */
    }
  goto ret0;

 L2366: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2367;
    }
  goto ret0;

 L2367: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (sleu_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2368;
    }
  goto ret0;

 L2368: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4654 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 310;  /* *sleu_di */
    }
 L2380: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4666 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 312;  /* *sleu_di_mips16 */
    }
  goto ret0;

 L2764: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L4913;
    case DImode:
      goto L4914;
    case CCmode:
      goto L4915;
    default:
      break;
    }
  goto ret0;

 L4913: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, SImode))
    {
      operands[4] = x2;
      goto L2765;
    }
  goto ret0;

 L2765: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2766;
    }
  goto ret0;

 L2766: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2767;
  goto ret0;

 L2767: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2768;
    }
  goto ret0;

 L2768: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L2769;
    }
  goto ret0;

 L2769: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5309 "../.././gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 364;  /* *movdi_on_si */
    }
  goto ret0;

 L4914: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, DImode))
    {
      operands[4] = x2;
      goto L2783;
    }
  goto ret0;

 L2783: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2784;
    }
  goto ret0;

 L2784: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2785;
  goto ret0;

 L2785: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2786;
    }
  goto ret0;

 L2786: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L2787;
    }
  goto ret0;

 L2787: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 5309 "../.././gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 410 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 366;  /* *movdi_on_di */
    }
  goto ret0;

 L4915: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, CCmode))
    {
      operands[4] = x2;
      goto L2801;
    }
  goto ret0;

 L2801: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, CCmode))
    {
      operands[1] = x3;
      goto L2802;
    }
  goto ret0;

 L2802: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2803;
  goto ret0;

 L2803: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2804;
    }
  goto ret0;

 L2804: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L2805;
    }
  goto ret0;

 L2805: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 5309 "../.././gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 410 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 368;  /* *movdi_on_cc */
    }
  goto ret0;

 L1672: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3053 "../.././gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS && cse_not_expected)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 191;  /* *lea64 */
    }
  x1 = XEXP (x0, 1);
  goto L4821;

 L1702: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3103 "../.././gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !TARGET_XGOT) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 197;  /* *got_dispdi */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_6 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case UNORDERED:
      goto L2384;
    case UNEQ:
      goto L2390;
    case UNLT:
      goto L2396;
    case UNLE:
      goto L2402;
    case EQ:
      goto L2408;
    case LT:
      goto L2414;
    case LE:
      goto L2420;
    case GE:
      goto L2468;
    case GT:
      goto L2474;
    case UNGE:
      goto L2480;
    case UNGT:
      goto L2486;
    case UNSPEC:
      goto L4939;
    default:
     break;
   }
  goto ret0;

 L2384: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L4940;
    case DFmode:
      goto L4941;
    default:
      break;
    }
  goto ret0;

 L4940: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2385;
    }
  goto ret0;

 L2385: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2386;
    }
  goto ret0;

 L2386: ATTRIBUTE_UNUSED_LABEL
  if (
#line 423 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 313;  /* sunordered_sf */
    }
  goto ret0;

 L4941: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2427;
    }
  goto ret0;

 L2427: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2428;
    }
  goto ret0;

 L2428: ATTRIBUTE_UNUSED_LABEL
  if (
#line 424 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 320;  /* sunordered_df */
    }
  goto ret0;

 L2390: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L4942;
    case DFmode:
      goto L4943;
    default:
      break;
    }
  goto ret0;

 L4942: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2391;
    }
  goto ret0;

 L2391: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2392;
    }
  goto ret0;

 L2392: ATTRIBUTE_UNUSED_LABEL
  if (
#line 423 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 314;  /* suneq_sf */
    }
  goto ret0;

 L4943: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2433;
    }
  goto ret0;

 L2433: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2434;
    }
  goto ret0;

 L2434: ATTRIBUTE_UNUSED_LABEL
  if (
#line 424 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 321;  /* suneq_df */
    }
  goto ret0;

 L2396: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L4944;
    case DFmode:
      goto L4945;
    default:
      break;
    }
  goto ret0;

 L4944: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2397;
    }
  goto ret0;

 L2397: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2398;
    }
  goto ret0;

 L2398: ATTRIBUTE_UNUSED_LABEL
  if (
#line 423 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 315;  /* sunlt_sf */
    }
  goto ret0;

 L4945: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2439;
    }
  goto ret0;

 L2439: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2440;
    }
  goto ret0;

 L2440: ATTRIBUTE_UNUSED_LABEL
  if (
#line 424 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 322;  /* sunlt_df */
    }
  goto ret0;

 L2402: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L4946;
    case DFmode:
      goto L4947;
    default:
      break;
    }
  goto ret0;

 L4946: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2403;
    }
  goto ret0;

 L2403: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2404;
    }
  goto ret0;

 L2404: ATTRIBUTE_UNUSED_LABEL
  if (
#line 423 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 316;  /* sunle_sf */
    }
  goto ret0;

 L4947: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2445;
    }
  goto ret0;

 L2445: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2446;
    }
  goto ret0;

 L2446: ATTRIBUTE_UNUSED_LABEL
  if (
#line 424 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 323;  /* sunle_df */
    }
  goto ret0;

 L2408: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L4948;
    case DFmode:
      goto L4949;
    default:
      break;
    }
  goto ret0;

 L4948: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2409;
    }
  goto ret0;

 L2409: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2410;
    }
  goto ret0;

 L2410: ATTRIBUTE_UNUSED_LABEL
  if (
#line 423 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 317;  /* seq_sf */
    }
  goto ret0;

 L4949: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2451;
    }
  goto ret0;

 L2451: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2452;
    }
  goto ret0;

 L2452: ATTRIBUTE_UNUSED_LABEL
  if (
#line 424 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 324;  /* seq_df */
    }
  goto ret0;

 L2414: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L4950;
    case DFmode:
      goto L4951;
    default:
      break;
    }
  goto ret0;

 L4950: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2415;
    }
  goto ret0;

 L2415: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2416;
    }
  goto ret0;

 L2416: ATTRIBUTE_UNUSED_LABEL
  if (
#line 423 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 318;  /* slt_sf */
    }
  goto ret0;

 L4951: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2457;
    }
  goto ret0;

 L2457: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2458;
    }
  goto ret0;

 L2458: ATTRIBUTE_UNUSED_LABEL
  if (
#line 424 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 325;  /* slt_df */
    }
  goto ret0;

 L2420: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L4952;
    case DFmode:
      goto L4953;
    default:
      break;
    }
  goto ret0;

 L4952: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2421;
    }
  goto ret0;

 L2421: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2422;
    }
  goto ret0;

 L2422: ATTRIBUTE_UNUSED_LABEL
  if (
#line 423 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 319;  /* sle_sf */
    }
  goto ret0;

 L4953: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2463;
    }
  goto ret0;

 L2463: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2464;
    }
  goto ret0;

 L2464: ATTRIBUTE_UNUSED_LABEL
  if (
#line 424 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 326;  /* sle_df */
    }
  goto ret0;

 L2468: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L4954;
    case DFmode:
      goto L4955;
    default:
      break;
    }
  goto ret0;

 L4954: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2469;
    }
  goto ret0;

 L2469: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2470;
    }
  goto ret0;

 L2470: ATTRIBUTE_UNUSED_LABEL
  if (
#line 423 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 327;  /* sge_sf */
    }
  goto ret0;

 L4955: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2493;
    }
  goto ret0;

 L2493: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2494;
    }
  goto ret0;

 L2494: ATTRIBUTE_UNUSED_LABEL
  if (
#line 424 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 331;  /* sge_df */
    }
  goto ret0;

 L2474: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L4956;
    case DFmode:
      goto L4957;
    default:
      break;
    }
  goto ret0;

 L4956: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2475;
    }
  goto ret0;

 L2475: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2476;
    }
  goto ret0;

 L2476: ATTRIBUTE_UNUSED_LABEL
  if (
#line 423 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 328;  /* sgt_sf */
    }
  goto ret0;

 L4957: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2499;
    }
  goto ret0;

 L2499: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2500;
    }
  goto ret0;

 L2500: ATTRIBUTE_UNUSED_LABEL
  if (
#line 424 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 332;  /* sgt_df */
    }
  goto ret0;

 L2480: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L4958;
    case DFmode:
      goto L4959;
    default:
      break;
    }
  goto ret0;

 L4958: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2481;
    }
  goto ret0;

 L2481: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2482;
    }
  goto ret0;

 L2482: ATTRIBUTE_UNUSED_LABEL
  if (
#line 423 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 329;  /* sunge_sf */
    }
  goto ret0;

 L4959: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2505;
    }
  goto ret0;

 L2505: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2506;
    }
  goto ret0;

 L2506: ATTRIBUTE_UNUSED_LABEL
  if (
#line 424 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 333;  /* sunge_df */
    }
  goto ret0;

 L2486: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L4960;
    case DFmode:
      goto L4961;
    default:
      break;
    }
  goto ret0;

 L4960: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2487;
    }
  goto ret0;

 L2487: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2488;
    }
  goto ret0;

 L2488: ATTRIBUTE_UNUSED_LABEL
  if (
#line 423 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 330;  /* sungt_sf */
    }
  goto ret0;

 L4961: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2511;
    }
  goto ret0;

 L2511: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2512;
    }
  goto ret0;

 L2512: ATTRIBUTE_UNUSED_LABEL
  if (
#line 424 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 334;  /* sungt_df */
    }
  goto ret0;

 L4939: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 3
      && XINT (x1, 1) == 203)
    goto L2987;
  goto ret0;

 L2987: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L4962;
    case DFmode:
      goto L4963;
    default:
      break;
    }
  goto ret0;

 L4962: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2988;
    }
  goto ret0;

 L2988: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2989;
    }
  goto ret0;

 L2989: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L2990;
    }
  goto ret0;

 L2990: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 289 "../.././gcc/config/mips/mips-ps-3d.md"
(TARGET_MIPS3D) && 
#line 423 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 394;  /* mips_cabs_cond_s */
    }
  goto ret0;

 L4963: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2995;
    }
  goto ret0;

 L2995: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2996;
    }
  goto ret0;

 L2996: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L2997;
    }
  goto ret0;

 L2997: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 289 "../.././gcc/config/mips/mips-ps-3d.md"
(TARGET_MIPS3D) && 
#line 424 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 395;  /* mips_cabs_cond_d */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_7 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_MODE (x1))
    {
    case SImode:
      goto L5045;
    case DImode:
      goto L5046;
    default:
      break;
    }
 L2076: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case IF_THEN_ELSE:
      goto L2077;
    case LABEL_REF:
      goto L2516;
    default:
     break;
   }
  goto ret0;

 L5045: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L2526;
    }
  goto L2076;

 L2526: ATTRIBUTE_UNUSED_LABEL
  if (
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == SImode))
    {
      return 337;  /* indirect_jumpsi */
    }
  x1 = XEXP (x0, 1);
  goto L2076;

 L5046: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L2530;
    }
  goto L2076;

 L2530: ATTRIBUTE_UNUSED_LABEL
  if (
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == DImode))
    {
      return 338;  /* indirect_jumpdi */
    }
  x1 = XEXP (x0, 1);
  goto L2076;

 L2077: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case CCmode:
      goto L5047;
    case SImode:
      goto L5048;
    case DImode:
      goto L5049;
    case CCV4mode:
      goto L5052;
    case CCV2mode:
      goto L5053;
    case CCDSPmode:
      goto L5054;
    default:
      break;
    }
  goto ret0;

 L5047: ATTRIBUTE_UNUSED_LABEL
  if (comparison_operator (x2, CCmode))
    {
      operands[0] = x2;
      goto L2078;
    }
  goto ret0;

 L2078: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, CCmode))
    {
      operands[2] = x3;
      goto L2079;
    }
  goto ret0;

 L2079: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2080;
  goto ret0;

 L2080: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L2081;
    case PC:
      goto L2090;
    default:
     break;
   }
  goto ret0;

 L2081: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L2082;

 L2082: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && 
#line 4257 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 267;  /* branch_fp */
    }
  goto ret0;

 L2090: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L2091;
  goto ret0;

 L2091: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L2092;

 L2092: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4277 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 268;  /* branch_fp_inverted */
    }
  goto ret0;

 L5048: ATTRIBUTE_UNUSED_LABEL
  if (comparison_operator (x2, SImode))
    {
      operands[0] = x2;
      goto L2097;
    }
 L5050: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, SImode))
    {
      operands[0] = x2;
      goto L2135;
    }
  goto ret0;

 L2097: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2098;
    }
  goto L5050;

 L2098: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2099;
  goto L5050;

 L2099: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L2100;
    case PC:
      goto L2118;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L5050;

 L2100: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L2101;

 L2101: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && 
#line 4299 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 269;  /* *branch_zerosi */
    }
  x2 = XEXP (x1, 0);
  goto L5050;

 L2118: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L2119;
  x2 = XEXP (x1, 0);
  goto L5050;

 L2119: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L2120;

 L2120: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4319 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 271;  /* *branch_zerosi_inverted */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L5050;

 L2135: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L5055;
  goto ret0;

 L5055: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2136;
    }
 L5056: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2174;
    }
  goto ret0;

 L2136: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L2137;
    }
  x3 = XEXP (x2, 0);
  goto L5056;

 L2137: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L2138;
    case PC:
      goto L2156;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L5056;

 L2138: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L2139;

 L2139: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && 
#line 4341 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 273;  /* *branch_equalitysi */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L5056;

 L2156: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L2157;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L5056;

 L2157: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L2158;

 L2158: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4361 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 275;  /* *branch_equalitysi_inverted */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L5056;

 L2174: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2175;
  goto ret0;

 L2175: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L2176;
    }
  goto ret0;

 L2176: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L2177;
    }
  goto ret0;

 L2177: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4383 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 277;  /* *branch_equalitysi_mips16 */
    }
  goto ret0;

 L5049: ATTRIBUTE_UNUSED_LABEL
  if (comparison_operator (x2, DImode))
    {
      operands[0] = x2;
      goto L2106;
    }
 L5051: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, DImode))
    {
      operands[0] = x2;
      goto L2144;
    }
  goto ret0;

 L2106: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2107;
    }
  goto L5051;

 L2107: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2108;
  goto L5051;

 L2108: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L2109;
    case PC:
      goto L2128;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L5051;

 L2109: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L2110;

 L2110: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && (
#line 4299 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 270;  /* *branch_zerodi */
    }
  x2 = XEXP (x1, 0);
  goto L5051;

 L2128: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L2129;
  x2 = XEXP (x1, 0);
  goto L5051;

 L2129: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L2130;

 L2130: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4319 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 272;  /* *branch_zerodi_inverted */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L5051;

 L2144: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L5057;
  goto ret0;

 L5057: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2145;
    }
 L5058: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2183;
    }
  goto ret0;

 L2145: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[3] = x3;
      goto L2146;
    }
  x3 = XEXP (x2, 0);
  goto L5058;

 L2146: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L2147;
    case PC:
      goto L2166;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L5058;

 L2147: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L2148;

 L2148: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && (
#line 4341 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 274;  /* *branch_equalitydi */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L5058;

 L2166: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L2167;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L5058;

 L2167: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L2168;

 L2168: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4361 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 276;  /* *branch_equalitydi_inverted */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L5058;

 L2183: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2184;
  goto ret0;

 L2184: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L2185;
    }
  goto ret0;

 L2185: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L2186;
    }
  goto ret0;

 L2186: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4383 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 278;  /* *branch_equalitydi_mips16 */
    }
  goto ret0;

 L5052: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == NE)
    goto L3034;
  goto ret0;

 L3034: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, CCV4mode))
    {
      operands[0] = x3;
      goto L3035;
    }
  goto ret0;

 L3035: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L5059;
  goto ret0;

 L5059: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 0L:
        goto L3036;
      case -1L:
        goto L3045;
      default:
        break;
      }
  goto ret0;

 L3036: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF)
    goto L3037;
  goto ret0;

 L3037: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L3038;

 L3038: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && 
#line 396 "../.././gcc/config/mips/mips-ps-3d.md"
(TARGET_MIPS3D))
    {
      return 400;  /* bc1any4t */
    }
  goto ret0;

 L3045: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF)
    goto L3046;
  goto ret0;

 L3046: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L3047;

 L3047: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && 
#line 408 "../.././gcc/config/mips/mips-ps-3d.md"
(TARGET_MIPS3D))
    {
      return 401;  /* bc1any4f */
    }
  goto ret0;

 L5053: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == NE)
    goto L3052;
  goto ret0;

 L3052: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, CCV2mode))
    {
      operands[0] = x3;
      goto L3053;
    }
  goto ret0;

 L3053: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L5061;
  goto ret0;

 L5061: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 0L:
        goto L3054;
      case -1L:
        goto L3063;
      default:
        break;
      }
  goto ret0;

 L3054: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF)
    goto L3055;
  goto ret0;

 L3055: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L3056;

 L3056: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && 
#line 420 "../.././gcc/config/mips/mips-ps-3d.md"
(TARGET_MIPS3D))
    {
      return 402;  /* bc1any2t */
    }
  goto ret0;

 L3063: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF)
    goto L3064;
  goto ret0;

 L3064: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L3065;

 L3065: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && 
#line 432 "../.././gcc/config/mips/mips-ps-3d.md"
(TARGET_MIPS3D))
    {
      return 403;  /* bc1any2f */
    }
  goto ret0;

 L5054: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == GE)
    goto L3971;
  goto ret0;

 L3971: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == CCDSPmode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 182)
    goto L3972;
  goto ret0;

 L3972: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (immediate_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L3973;
    }
  goto ret0;

 L3973: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF)
    goto L3974;
  goto ret0;

 L3974: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L3975;

 L3975: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && 
#line 1054 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP))
    {
      return 501;  /* mips_bposge */
    }
  goto ret0;

 L2516: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  goto L2517;

 L2517: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4714 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 335;  /* jump */
    }
 L2522: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4748 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 336;  /* *mips.md:4745 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_8 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    case SFmode:
      goto L4476;
    case DFmode:
      goto L4477;
    case V2SFmode:
      goto L4478;
    case SImode:
      goto L4468;
    case DImode:
      goto L4469;
    case HImode:
      goto L4465;
    case QImode:
      goto L4466;
    case BLKmode:
      goto L4470;
    case CCmode:
      goto L4475;
    case CCV4mode:
      goto L4484;
    case CCV2mode:
      goto L4485;
    case V4QImode:
      goto L4486;
    case V2HImode:
      goto L4487;
    case CCDSPmode:
      goto L4488;
    default:
      break;
    }
 L2075: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == PC)
    goto L2525;
  if (register_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L2595;
    }
  goto ret0;

 L4476: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == MEM)
    goto L1827;
  if (register_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L15;
    }
 L4479: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L1885;
    }
  goto L2075;

 L1827: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L4490;
    case DImode:
      goto L4491;
    default:
      break;
    }
  goto L4479;

 L4490: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L1828;
  goto L4479;

 L1828: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1829;
    }
  goto L4479;

 L1829: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1830;
    }
  goto L4479;

 L1830: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L1831;
    }
  x1 = XEXP (x0, 0);
  goto L4479;

 L1831: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 3487 "../.././gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 418 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 221;  /* *swxc1_si */
    }
  x1 = XEXP (x0, 0);
  goto L4479;

 L4491: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L1849;
  goto L4479;

 L1849: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1850;
    }
  goto L4479;

 L1850: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1851;
    }
  goto L4479;

 L1851: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L1852;
    }
  x1 = XEXP (x0, 0);
  goto L4479;

 L1852: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 3487 "../.././gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 418 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 224;  /* *swxc1_di */
    }
  x1 = XEXP (x0, 0);
  goto L4479;

 L15: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SFmode)
    goto L4492;
  x1 = XEXP (x0, 0);
  goto L4479;

 L4492: ATTRIBUTE_UNUSED_LABEL
  tem = recog_1 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L4479;

 L1885: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, SFmode))
    {
      operands[1] = x1;
      goto L1886;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L1886: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3696 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT
   && (register_operand (operands[0], SFmode)
       || reg_or_0_operand (operands[1], SFmode))))
    {
      return 231;  /* *movsf_hardfloat */
    }
 L1890: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3707 "../.././gcc/config/mips/mips.md"
(TARGET_SOFT_FLOAT && !TARGET_MIPS16
   && (register_operand (operands[0], SFmode)
       || reg_or_0_operand (operands[1], SFmode))))
    {
      return 232;  /* *movsf_softfloat */
    }
 L1894: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3718 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], SFmode)
       || register_operand (operands[1], SFmode))))
    {
      return 233;  /* *movsf_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L4477: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == MEM)
    goto L1834;
  if (register_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L21;
    }
 L4480: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L1897;
    }
  goto L2075;

 L1834: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L4538;
    case DImode:
      goto L4539;
    default:
      break;
    }
  goto L4480;

 L4538: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L1835;
  goto L4480;

 L1835: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1836;
    }
  goto L4480;

 L1836: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1837;
    }
  goto L4480;

 L1837: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L1838;
    }
  x1 = XEXP (x0, 0);
  goto L4480;

 L1838: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 3487 "../.././gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 419 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 222;  /* *sdxc1_si */
    }
  x1 = XEXP (x0, 0);
  goto L4480;

 L4539: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L1856;
  goto L4480;

 L1856: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1857;
    }
  goto L4480;

 L1857: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1858;
    }
  goto L4480;

 L1858: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L1859;
    }
  x1 = XEXP (x0, 0);
  goto L4480;

 L1859: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 3487 "../.././gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 419 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 225;  /* *sdxc1_di */
    }
  x1 = XEXP (x0, 0);
  goto L4480;

 L21: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DFmode)
    goto L4540;
  x1 = XEXP (x0, 0);
  goto L4480;

 L4540: ATTRIBUTE_UNUSED_LABEL
  tem = recog_2 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L4480;

 L1897: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, DFmode))
    {
      operands[1] = x1;
      goto L1898;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L1898: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3741 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && TARGET_64BIT
   && (register_operand (operands[0], DFmode)
       || reg_or_0_operand (operands[1], DFmode))))
    {
      return 234;  /* *movdf_hardfloat_64bit */
    }
 L1902: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3752 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !TARGET_64BIT
   && (register_operand (operands[0], DFmode)
       || reg_or_0_operand (operands[1], DFmode))))
    {
      return 235;  /* *movdf_hardfloat_32bit */
    }
 L1906: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3763 "../.././gcc/config/mips/mips.md"
((TARGET_SOFT_FLOAT || TARGET_SINGLE_FLOAT) && !TARGET_MIPS16
   && (register_operand (operands[0], DFmode)
       || reg_or_0_operand (operands[1], DFmode))))
    {
      return 236;  /* *movdf_softfloat */
    }
 L1910: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3774 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode))))
    {
      return 237;  /* *movdf_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L4478: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == MEM)
    goto L1841;
  if (register_operand (x1, V2SFmode))
    {
      operands[0] = x1;
      goto L27;
    }
 L4481: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V2SFmode))
    {
      operands[0] = x1;
      goto L1913;
    }
  goto L2075;

 L1841: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L4591;
    case DImode:
      goto L4592;
    default:
      break;
    }
  goto L4481;

 L4591: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L1842;
  goto L4481;

 L1842: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1843;
    }
  goto L4481;

 L1843: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1844;
    }
  goto L4481;

 L1844: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, V2SFmode))
    {
      operands[0] = x1;
      goto L1845;
    }
  x1 = XEXP (x0, 0);
  goto L4481;

 L1845: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 3487 "../.././gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 420 "../.././gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 223;  /* *sdxc1_si */
    }
  x1 = XEXP (x0, 0);
  goto L4481;

 L4592: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L1863;
  goto L4481;

 L1863: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1864;
    }
  goto L4481;

 L1864: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1865;
    }
  goto L4481;

 L1865: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, V2SFmode))
    {
      operands[0] = x1;
      goto L1866;
    }
  x1 = XEXP (x0, 0);
  goto L4481;

 L1866: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 3487 "../.././gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 420 "../.././gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 226;  /* *sdxc1_di */
    }
  x1 = XEXP (x0, 0);
  goto L4481;

 L27: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2SFmode)
    goto L4593;
  x1 = XEXP (x0, 0);
  goto L4481;

 L4593: ATTRIBUTE_UNUSED_LABEL
  tem = recog_3 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L4481;

 L1913: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, V2SFmode))
    {
      operands[1] = x1;
      goto L1914;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L1914: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3833 "../.././gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT
   && TARGET_64BIT
   && (register_operand (operands[0], V2SFmode)
       || reg_or_0_operand (operands[1], V2SFmode))))
    {
      return 238;  /* movv2sf_hardfloat_64bit */
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L4468: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case ZERO_EXTRACT:
      goto L1595;
    case MEM:
      goto L4659;
    case REG:
      goto L4660;
    default:
     break;
   }
 L4458: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L33;
    }
 L4460: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 29)
    goto L45;
 L4462: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L57;
    }
 L4464: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L1308;
    }
 L4489: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L3962;
    }
  goto L2075;

 L1595: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1596;
    }
  goto L2075;

 L1596: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1597;
    }
  goto L2075;

 L1597: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1598;
    }
  goto L2075;

 L1598: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (reg_or_0_operand (x1, SImode))
    {
      operands[3] = x1;
      goto L1599;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L1599: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2922 "../.././gcc/config/mips/mips.md"
(mips_use_ins_ext_p (operands[0], operands[1], operands[2])))
    {
      return 180;  /* insvsi */
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L4659: ATTRIBUTE_UNUSED_LABEL
  if (stack_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L1751;
    }
  goto L4464;

 L1751: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == REG
      && XINT (x1, 0) == 31
      && 
#line 3192 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 206;  /* *movsi_ra */
    }
  x1 = XEXP (x0, 0);
  goto L4464;

 L4660: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 0) == 28)
    goto L2574;
  goto L4458;

 L2574: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == UNSPEC_VOLATILE
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 6)
    goto L2575;
  x1 = XEXP (x0, 0);
  goto L4458;

 L2575: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 4962 "../.././gcc/config/mips/mips.md"
(TARGET_ABICALLS && TARGET_OLDABI))
    {
      return 346;  /* exception_receiver */
    }
  x1 = XEXP (x0, 0);
  goto L4458;

 L33: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == PLUS)
    goto L34;
  x1 = XEXP (x0, 0);
  goto L4460;

 L34: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L35;
    }
  x1 = XEXP (x0, 0);
  goto L4460;

 L35: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L36;
    }
  x1 = XEXP (x0, 0);
  goto L4460;

 L36: ATTRIBUTE_UNUSED_LABEL
  if (
#line 665 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 6;  /* *addsi3 */
    }
  x1 = XEXP (x0, 0);
  goto L4460;

 L45: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == PLUS)
    goto L46;
  x1 = XEXP (x0, 0);
  goto L4462;

 L46: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 29)
    goto L47;
  x1 = XEXP (x0, 0);
  goto L4462;

 L47: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_arith_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L48;
    }
  x1 = XEXP (x0, 0);
  goto L4462;

 L48: ATTRIBUTE_UNUSED_LABEL
  if (
#line 680 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 8;  /* *addsi3_sp1 */
    }
  x1 = XEXP (x0, 0);
  goto L4462;

 L57: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L4661;
  x1 = XEXP (x0, 0);
  goto L4464;

 L4661: ATTRIBUTE_UNUSED_LABEL
  tem = recog_4 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L4464;

 L1308: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L4798;
 L1773: ATTRIBUTE_UNUSED_LABEL
  if (move_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L1774;
    }
  x1 = XEXP (x0, 0);
  goto L4489;

 L4798: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case TRUNCATE:
      goto L1309;
    case UNSPEC:
      goto L4800;
    default:
     break;
   }
  goto L1773;

 L1309: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1310;
    }
  goto L1773;

 L1310: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2194 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return 128;  /* truncdisi2 */
    }
  x1 = XEXP (x0, 1);
  goto L1773;

 L4800: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 2)
    goto L1953;
  goto L1773;

 L1953: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L1954;
    }
  goto L1773;

 L1954: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3922 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !TARGET_64BIT))
    {
      return 245;  /* store_df_high */
    }
  x1 = XEXP (x0, 1);
  goto L1773;

 L1774: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3318 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], SImode)
       || reg_or_0_operand (operands[1], SImode))))
    {
      return 212;  /* *movsi_internal */
    }
 L1778: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3329 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode))))
    {
      return 213;  /* *movsi_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L4489;

 L3962: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == MEM)
    goto L3963;
  x1 = XEXP (x0, 0);
  goto L2075;

 L3963: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L3964;
  x1 = XEXP (x0, 0);
  goto L2075;

 L3964: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3965;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3965: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3966;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3966: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1039 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP))
    {
      return 500;  /* mips_lwx */
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L4469: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case ZERO_EXTRACT:
      goto L1602;
    case MEM:
      goto L4801;
    case REG:
    case SUBREG:
      goto L4459;
    default:
      goto L4461;
   }
 L4459: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L39;
    }
 L4461: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 29)
    goto L51;
 L4463: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L63;
    }
 L4473: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L1757;
    }
  goto L2075;

 L1602: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L1603;
    }
  goto L2075;

 L1603: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1604;
    }
  goto L2075;

 L1604: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1605;
    }
  goto L2075;

 L1605: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (reg_or_0_operand (x1, DImode))
    {
      operands[3] = x1;
      goto L1606;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L1606: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2922 "../.././gcc/config/mips/mips.md"
(mips_use_ins_ext_p (operands[0], operands[1], operands[2])) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 181;  /* insvdi */
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L4801: ATTRIBUTE_UNUSED_LABEL
  if (stack_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L1754;
    }
  goto L4473;

 L1754: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == REG
      && XINT (x1, 0) == 31
      && (
#line 3192 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 207;  /* *movdi_ra */
    }
  x1 = XEXP (x0, 0);
  goto L4473;

 L39: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == PLUS)
    goto L40;
  x1 = XEXP (x0, 0);
  goto L4461;

 L40: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L41;
    }
  x1 = XEXP (x0, 0);
  goto L4461;

 L41: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L42;
    }
  x1 = XEXP (x0, 0);
  goto L4461;

 L42: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 665 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 7;  /* *adddi3 */
    }
  x1 = XEXP (x0, 0);
  goto L4461;

 L51: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == PLUS)
    goto L52;
  x1 = XEXP (x0, 0);
  goto L4463;

 L52: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 29)
    goto L53;
  x1 = XEXP (x0, 0);
  goto L4463;

 L53: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_arith_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L54;
    }
  x1 = XEXP (x0, 0);
  goto L4463;

 L54: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 680 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 9;  /* *adddi3_sp1 */
    }
  x1 = XEXP (x0, 0);
  goto L4463;

 L63: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode)
    goto L4802;
  x1 = XEXP (x0, 0);
  goto L4473;

 L4802: ATTRIBUTE_UNUSED_LABEL
  tem = recog_5 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L4473;

 L1757: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L1758;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L1758: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3200 "../.././gcc/config/mips/mips.md"
(!TARGET_64BIT && !TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || reg_or_0_operand (operands[1], DImode))))
    {
      return 208;  /* *movdi_32bit */
    }
 L1762: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3211 "../.././gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode))))
    {
      return 209;  /* *movdi_32bit_mips16 */
    }
 L1766: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3222 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || reg_or_0_operand (operands[1], DImode))))
    {
      return 210;  /* *movdi_64bit */
    }
 L1770: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3233 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode))))
    {
      return 211;  /* *movdi_64bit_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L4465: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L1313;
    }
 L4467: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L1360;
    }
  goto L2075;

 L1313: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode
      && GET_CODE (x1) == TRUNCATE)
    goto L1314;
  if (move_operand (x1, HImode))
    {
      operands[1] = x1;
      goto L1870;
    }
  x1 = XEXP (x0, 0);
  goto L4467;

 L1314: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1315;
    }
  x1 = XEXP (x0, 0);
  goto L4467;

 L1315: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2205 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return 129;  /* truncdihi2 */
    }
  x1 = XEXP (x0, 0);
  goto L4467;

 L1870: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3511 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], HImode)
       || reg_or_0_operand (operands[1], HImode))))
    {
      return 227;  /* *movhi_internal */
    }
 L1874: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3530 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode))))
    {
      return 228;  /* *movhi_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L4467;

 L1360: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode)
    goto L4916;
  x1 = XEXP (x0, 0);
  goto L2075;

 L4916: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case ZERO_EXTEND:
      goto L1361;
    case SIGN_EXTEND:
      goto L1507;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L2075;

 L1361: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == QImode)
    goto L4918;
  x1 = XEXP (x0, 0);
  goto L2075;

 L4918: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L1362;
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1433;
    }
 L4920: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1438;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L1362: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1363;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L1363: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2304 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16))
    {
      return 137;  /* *mips.md:2300 */
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L1433: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2394 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 151;  /* *zero_extendqihi2 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L4920;

 L1438: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2404 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 152;  /* *zero_extendqihi2_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L1507: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      return 166;  /* extendqihi2 */
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L4466: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L1318;
    }
  goto L2075;

 L1318: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode
      && GET_CODE (x1) == TRUNCATE)
    goto L1319;
  if (move_operand (x1, QImode))
    {
      operands[1] = x1;
      goto L1878;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L1319: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1320;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L1320: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2216 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return 130;  /* truncdiqi2 */
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L1878: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3618 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], QImode)
       || reg_or_0_operand (operands[1], QImode))))
    {
      return 229;  /* *movqi_internal */
    }
 L1882: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3637 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode))))
    {
      return 230;  /* *movqi_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L4470: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, BLKmode))
    {
      operands[0] = x1;
      goto L1635;
    }
  goto L2075;

 L1635: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == BLKmode)
    goto L4921;
  x1 = XEXP (x0, 0);
  goto L2075;

 L4921: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC)
    goto L4923;
  x1 = XEXP (x0, 0);
  goto L2075;

 L4923: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 2:
      goto L4925;
    case 3:
      goto L4926;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L4925: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 20)
    goto L1636;
  x1 = XEXP (x0, 0);
  goto L2075;

 L1636: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1637;
    }
 L1642: ATTRIBUTE_UNUSED_LABEL
  if (reg_or_0_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1643;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L1637: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (memory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1638;
    }
  x2 = XVECEXP (x1, 0, 0);
  goto L1642;

 L1638: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2965 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[0])))
    {
      return 186;  /* mov_swl */
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  goto L1642;

 L1643: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (memory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1644;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L1644: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2965 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[0])) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 187;  /* mov_sdl */
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L4926: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 21)
    goto L1648;
  x1 = XEXP (x0, 0);
  goto L2075;

 L1648: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1649;
    }
 L1654: ATTRIBUTE_UNUSED_LABEL
  if (reg_or_0_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1655;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L1649: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (memory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1650;
    }
  x2 = XVECEXP (x1, 0, 0);
  goto L1654;

 L1650: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (rtx_equal_p (x2, operands[0])
      && 
#line 2976 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[0])))
    {
      return 188;  /* mov_swr */
    }
  x2 = XVECEXP (x1, 0, 0);
  goto L1654;

 L1655: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (memory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1656;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L1656: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (rtx_equal_p (x2, operands[0])
      && (
#line 2976 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[0])) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 189;  /* mov_sdr */
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L4475: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, CCmode))
    {
      operands[0] = x1;
      goto L1781;
    }
 L4482: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, CCmode))
    {
      operands[0] = x1;
      goto L2383;
    }
  goto L2075;

 L1781: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, CCmode))
    {
      operands[1] = x1;
      goto L1782;
    }
  x1 = XEXP (x0, 0);
  goto L4482;

 L1782: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3421 "../.././gcc/config/mips/mips.md"
(ISA_HAS_8CC && TARGET_HARD_FLOAT))
    {
      return 214;  /* movcc */
    }
  x1 = XEXP (x0, 0);
  goto L4482;

 L2383: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCmode)
    goto L4927;
  x1 = XEXP (x0, 0);
  goto L2075;

 L4927: ATTRIBUTE_UNUSED_LABEL
  tem = recog_6 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L2075;

 L4484: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, CCV4mode))
    {
      operands[0] = x1;
      goto L3000;
    }
  goto L2075;

 L3000: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCV4mode)
    goto L4964;
  x1 = XEXP (x0, 0);
  goto L2075;

 L4964: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC)
    goto L4966;
  x1 = XEXP (x0, 0);
  goto L2075;

 L4966: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 5)
    goto L4968;
  x1 = XEXP (x0, 0);
  goto L2075;

 L4968: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 201L:
      goto L3001;
    case 203L:
      goto L3010;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3001: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L3002;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3002: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L3003;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3003: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, V2SFmode))
    {
      operands[3] = x2;
      goto L3004;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3004: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 3);
  if (register_operand (x2, V2SFmode))
    {
      operands[4] = x2;
      goto L3005;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3005: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 4);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[5] = x2;
      goto L3006;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3006: ATTRIBUTE_UNUSED_LABEL
  if (
#line 307 "../.././gcc/config/mips/mips-ps-3d.md"
(TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 396;  /* mips_c_cond_4s */
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3010: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L3011;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3011: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L3012;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3012: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, V2SFmode))
    {
      operands[3] = x2;
      goto L3013;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3013: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 3);
  if (register_operand (x2, V2SFmode))
    {
      operands[4] = x2;
      goto L3014;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3014: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 4);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[5] = x2;
      goto L3015;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3015: ATTRIBUTE_UNUSED_LABEL
  if (
#line 336 "../.././gcc/config/mips/mips-ps-3d.md"
(TARGET_MIPS3D))
    {
      return 397;  /* mips_cabs_cond_4s */
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L4485: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, CCV2mode))
    {
      operands[0] = x1;
      goto L3018;
    }
  goto L2075;

 L3018: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCV2mode)
    goto L4970;
  x1 = XEXP (x0, 0);
  goto L2075;

 L4970: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC)
    goto L4972;
  x1 = XEXP (x0, 0);
  goto L2075;

 L4972: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 3)
    goto L4974;
  x1 = XEXP (x0, 0);
  goto L2075;

 L4974: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 201L:
      goto L3019;
    case 203L:
      goto L3026;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3019: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L3020;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3020: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L3021;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3021: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L3022;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3022: ATTRIBUTE_UNUSED_LABEL
  if (
#line 368 "../.././gcc/config/mips/mips-ps-3d.md"
(TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 398;  /* mips_c_cond_ps */
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3026: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L3027;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3027: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L3028;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3028: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L3029;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3029: ATTRIBUTE_UNUSED_LABEL
  if (
#line 379 "../.././gcc/config/mips/mips-ps-3d.md"
(TARGET_MIPS3D))
    {
      return 399;  /* mips_cabs_cond_ps */
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L4486: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V4QImode))
    {
      operands[0] = x1;
      goto L3296;
    }
  goto L2075;

 L3296: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V4QImode)
    goto L4976;
  x1 = XEXP (x0, 0);
  goto L2075;

 L4976: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC)
    goto L4980;
  x1 = XEXP (x0, 0);
  goto L2075;

 L4980: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 2:
      goto L4984;
    case 1:
      goto L4986;
    case 3:
      goto L4987;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L4984: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 309L:
      goto L3297;
    case 325L:
      goto L3425;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3297: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L3298;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3298: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L3299;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3299: ATTRIBUTE_UNUSED_LABEL
  if (
#line 158 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP))
    {
      return 432;  /* mips_precrq_qb_ph */
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3425: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L3426;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3426: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3427;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3427: ATTRIBUTE_UNUSED_LABEL
  if (
#line 347 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP))
    {
      return 450;  /* mips_shrl_qb */
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L4986: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 348)
    goto L3731;
  x1 = XEXP (x0, 0);
  goto L2075;

 L3731: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (arith_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3732;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3732: ATTRIBUTE_UNUSED_LABEL
  if (
#line 689 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP))
    {
      return 474;  /* mips_repl_qb */
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L4987: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 356)
    goto L3801;
  x1 = XEXP (x0, 0);
  goto L2075;

 L3801: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L3802;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3802: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4QImode))
    {
      operands[2] = x2;
      goto L3803;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3803: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 186
      && (
#line 785 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP) && 
#line 16 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP)))
    {
      return 486;  /* mips_pick_qb */
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L4487: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V2HImode))
    {
      operands[0] = x1;
      goto L3302;
    }
  goto L2075;

 L3302: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2HImode)
    goto L4988;
  x1 = XEXP (x0, 0);
  goto L2075;

 L4988: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC)
    goto L5002;
  x1 = XEXP (x0, 0);
  goto L2075;

 L5002: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 2:
      goto L5016;
    case 1:
      goto L5017;
    case 3:
      goto L5028;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L5016: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 310L:
      goto L3303;
    case 326L:
      goto L3431;
    case 327L:
      goto L3443;
    case 357L:
      goto L3807;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3303: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3304;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3304: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3305;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3305: ATTRIBUTE_UNUSED_LABEL
  if (
#line 168 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP))
    {
      return 433;  /* mips_precrq_ph_w */
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3431: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L3432;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3432: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3433;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3433: ATTRIBUTE_UNUSED_LABEL
  if (
#line 366 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP))
    {
      return 451;  /* mips_shra_ph */
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3443: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L3444;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3444: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3445;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3445: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 384 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP) && 
#line 20 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP)))
    {
      return 453;  /* mips_shra_r_ph */
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3807: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L3808;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3808: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L3809;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3809: ATTRIBUTE_UNUSED_LABEL
  if (
#line 796 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP))
    {
      return 487;  /* mips_packrl_ph */
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L5017: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 315L:
      goto L3341;
    case 316L:
      goto L3346;
    case 317L:
      goto L3351;
    case 318L:
      goto L3356;
    case 319L:
      goto L3361;
    case 320L:
      goto L3366;
    case 321L:
      goto L3371;
    case 322L:
      goto L3376;
    case 349L:
      goto L3736;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3341: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L3342;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3342: ATTRIBUTE_UNUSED_LABEL
  if (
#line 226 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP))
    {
      return 438;  /* mips_precequ_ph_qbl */
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3346: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L3347;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3347: ATTRIBUTE_UNUSED_LABEL
  if (
#line 235 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP))
    {
      return 439;  /* mips_precequ_ph_qbr */
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3351: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L3352;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3352: ATTRIBUTE_UNUSED_LABEL
  if (
#line 244 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP))
    {
      return 440;  /* mips_precequ_ph_qbla */
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3356: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L3357;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3357: ATTRIBUTE_UNUSED_LABEL
  if (
#line 253 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP))
    {
      return 441;  /* mips_precequ_ph_qbra */
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3361: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L3362;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3362: ATTRIBUTE_UNUSED_LABEL
  if (
#line 263 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP))
    {
      return 442;  /* mips_preceu_ph_qbl */
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3366: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L3367;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3367: ATTRIBUTE_UNUSED_LABEL
  if (
#line 272 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP))
    {
      return 443;  /* mips_preceu_ph_qbr */
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3371: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L3372;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3372: ATTRIBUTE_UNUSED_LABEL
  if (
#line 281 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP))
    {
      return 444;  /* mips_preceu_ph_qbla */
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3376: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L3377;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3377: ATTRIBUTE_UNUSED_LABEL
  if (
#line 290 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP))
    {
      return 445;  /* mips_preceu_ph_qbra */
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3736: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_imm10_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3737;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3737: ATTRIBUTE_UNUSED_LABEL
  if (
#line 706 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP))
    {
      return 475;  /* mips_repl_ph */
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L5028: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 356)
    goto L3795;
  x1 = XEXP (x0, 0);
  goto L2075;

 L3795: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L3796;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3796: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L3797;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3797: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 186
      && (
#line 785 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP) && 
#line 15 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP)))
    {
      return 485;  /* mips_pick_ph */
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L4488: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 186)
    goto L3740;
  goto L2075;

 L3740: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCDSPmode)
    goto L5030;
  x1 = XEXP (x0, 0);
  goto L2075;

 L5030: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC)
    goto L5033;
  x1 = XEXP (x0, 0);
  goto L2075;

 L5033: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 3)
    goto L5036;
  x1 = XEXP (x0, 0);
  goto L2075;

 L5036: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 350L:
      goto L3741;
    case 351L:
      goto L3753;
    case 352L:
      goto L3765;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3741: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case V2HImode:
      goto L5039;
    case V4QImode:
      goto L5040;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L5039: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2HImode))
    {
      operands[0] = x2;
      goto L3742;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3742: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L3743;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3743: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 186
      && (
#line 721 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP) && 
#line 15 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP)))
    {
      return 476;  /* mips_cmp_eq_ph */
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L5040: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V4QImode))
    {
      operands[0] = x2;
      goto L3748;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3748: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L3749;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3749: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 186
      && (
#line 721 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP) && 
#line 16 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP)))
    {
      return 477;  /* mips_cmpu_eq_qb */
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3753: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case V2HImode:
      goto L5041;
    case V4QImode:
      goto L5042;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L5041: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2HImode))
    {
      operands[0] = x2;
      goto L3754;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3754: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L3755;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3755: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 186
      && (
#line 732 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP) && 
#line 15 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP)))
    {
      return 478;  /* mips_cmp_lt_ph */
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L5042: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V4QImode))
    {
      operands[0] = x2;
      goto L3760;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3760: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L3761;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3761: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 186
      && (
#line 732 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP) && 
#line 16 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP)))
    {
      return 479;  /* mips_cmpu_lt_qb */
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3765: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case V2HImode:
      goto L5043;
    case V4QImode:
      goto L5044;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L5043: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2HImode))
    {
      operands[0] = x2;
      goto L3766;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3766: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L3767;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3767: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 186
      && (
#line 743 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP) && 
#line 15 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP)))
    {
      return 480;  /* mips_cmp_le_ph */
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L5044: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V4QImode))
    {
      operands[0] = x2;
      goto L3772;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3772: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L3773;
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L3773: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 186
      && (
#line 743 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP) && 
#line 16 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP)))
    {
      return 481;  /* mips_cmpu_le_qb */
    }
  x1 = XEXP (x0, 0);
  goto L2075;

 L2525: ATTRIBUTE_UNUSED_LABEL
  return recog_7 (x0, insn, pnum_clobbers);

 L2595: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == CALL)
    goto L2596;
  goto ret0;

 L2596: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L2597;
  goto ret0;

 L2597: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (call_insn_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L2598;
    }
  goto ret0;

 L2598: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[2] = x2;
  goto L2599;

 L2599: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5054 "../.././gcc/config/mips/mips.md"
(TARGET_SIBCALLS && SIBLING_CALL_P (insn)))
    {
      return 350;  /* sibcall_value_internal */
    }
 L2654: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 354;  /* call_value_internal */
    }
 L2672: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5185 "../.././gcc/config/mips/mips.md"
(TARGET_SPLIT_CALLS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 355;  /* call_value_split */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_9 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case MULT:
      goto L163;
    case PLUS:
      goto L284;
    case MINUS:
      goto L305;
    case NEG:
      goto L438;
    case TRUNCATE:
      goto L675;
    case UNSPEC:
      goto L5074;
    default:
     break;
   }
  goto ret0;

 L163: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L164;
    }
  goto ret0;

 L164: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L165;
    }
  goto ret0;

 L165: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L166;
  goto ret0;

 L166: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L167;
    }
  goto ret0;

 L167: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L168;
  goto ret0;

 L168: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L169;
    }
  goto ret0;

 L169: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1028 "../.././gcc/config/mips/mips.md"
(GENERATE_MULT3_SI))
    {
      return 27;  /* mulsi3_mult3 */
    }
 L233: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1099 "../.././gcc/config/mips/mips.md"
(TARGET_FIX_R4000))
    {
      return 31;  /* mulsi3_r4000 */
    }
  goto ret0;

 L284: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L285;
  goto ret0;

 L285: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L286;
    }
  goto ret0;

 L286: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L287;
    }
  goto ret0;

 L287: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L288;
    }
 L352: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x3, operands[0]))
    goto L353;
  goto ret0;

 L288: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L289;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L352;

 L289: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L290;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L352;

 L290: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L291;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L352;

 L291: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L292;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L352;

 L292: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1218 "../.././gcc/config/mips/mips.md"
(ISA_HAS_MACC))
    {
      return 34;  /* *macc */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L352;

 L353: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L354;
  goto ret0;

 L354: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L355;
    }
  goto ret0;

 L355: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L356;
  goto ret0;

 L356: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L357;
  goto ret0;

 L357: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L358;
  goto ret0;

 L358: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2]))
    goto L359;
  goto ret0;

 L359: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0]))
    goto L360;
  goto ret0;

 L360: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L361;
  goto ret0;

 L361: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L362;
    }
  goto ret0;

 L362: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1289 "../.././gcc/config/mips/mips.md"
(ISA_HAS_MACC && reload_completed))
    {
      return 37;  /* *macc2 */
    }
  goto ret0;

 L305: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L306;
    }
 L382: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x3, operands[0]))
    goto L383;
  goto ret0;

 L306: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L307;
  x3 = XEXP (x2, 0);
  goto L382;

 L307: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L308;
    }
  x3 = XEXP (x2, 0);
  goto L382;

 L308: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L309;
    }
  x3 = XEXP (x2, 0);
  goto L382;

 L309: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L310;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L382;

 L310: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L311;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L382;

 L311: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L312;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L382;

 L312: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L313;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L382;

 L313: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1240 "../.././gcc/config/mips/mips.md"
(ISA_HAS_MSAC))
    {
      return 35;  /* *msac */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L382;

 L383: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L384;
  goto ret0;

 L384: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L385;
    }
  goto ret0;

 L385: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L386;
    }
  goto ret0;

 L386: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L387;
  goto ret0;

 L387: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L388;
    }
  goto ret0;

 L388: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MINUS)
    goto L389;
  goto ret0;

 L389: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L390;
  goto ret0;

 L390: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L391;
  goto ret0;

 L391: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L392;
  goto ret0;

 L392: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2]))
    goto L393;
  goto ret0;

 L393: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L394;
  goto ret0;

 L394: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L395;
    }
  goto ret0;

 L395: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1304 "../.././gcc/config/mips/mips.md"
(ISA_HAS_MSAC && reload_completed))
    {
      return 38;  /* *msac2 */
    }
  goto ret0;

 L438: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L439;
  goto ret0;

 L439: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L440;
    }
  goto ret0;

 L440: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L441;
    }
  goto ret0;

 L441: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L442;
  goto ret0;

 L442: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L443;
    }
  goto ret0;

 L443: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L444;
  goto ret0;

 L444: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L445;
    }
  goto ret0;

 L445: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1472 "../.././gcc/config/mips/mips.md"
(ISA_HAS_MULS))
    {
      return 40;  /* *muls */
    }
  goto ret0;

 L675: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == LSHIFTRT)
    goto L676;
  goto ret0;

 L676: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode)
    goto L5077;
  goto ret0;

 L5077: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case MULT:
      goto L677;
    case NEG:
      goto L729;
    default:
     break;
   }
  goto ret0;

 L677: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == DImode)
    goto L5079;
  goto ret0;

 L5079: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x5))
    {
    case SIGN_EXTEND:
      goto L678;
    case ZERO_EXTEND:
      goto L704;
    default:
     break;
   }
  goto ret0;

 L678: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L679;
    }
  goto ret0;

 L679: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == SIGN_EXTEND)
    goto L680;
  goto ret0;

 L680: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L681;
    }
  goto ret0;

 L681: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (32)])
    goto L682;
  goto ret0;

 L682: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L683;
  goto ret0;

 L683: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L684;
    }
  goto ret0;

 L684: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L685;
  goto ret0;

 L685: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L686;
    }
  goto ret0;

 L686: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1658 "../.././gcc/config/mips/mips.md"
(ISA_HAS_MULHI))
    {
      return 55;  /* smulsi3_highpart_mulhi_internal */
    }
  goto ret0;

 L704: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L705;
    }
  goto ret0;

 L705: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == ZERO_EXTEND)
    goto L706;
  goto ret0;

 L706: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L707;
    }
  goto ret0;

 L707: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (32)])
    goto L708;
  goto ret0;

 L708: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L709;
  goto ret0;

 L709: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L710;
    }
  goto ret0;

 L710: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L711;
  goto ret0;

 L711: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L712;
    }
  goto ret0;

 L712: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1658 "../.././gcc/config/mips/mips.md"
(ISA_HAS_MULHI))
    {
      return 56;  /* umulsi3_highpart_mulhi_internal */
    }
  goto ret0;

 L729: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == MULT)
    goto L730;
  goto ret0;

 L730: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (GET_MODE (x6) == DImode)
    goto L5081;
  goto ret0;

 L5081: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x6))
    {
    case SIGN_EXTEND:
      goto L731;
    case ZERO_EXTEND:
      goto L759;
    default:
     break;
   }
  goto ret0;

 L731: ATTRIBUTE_UNUSED_LABEL
  x7 = XEXP (x6, 0);
  if (register_operand (x7, SImode))
    {
      operands[1] = x7;
      goto L732;
    }
  goto ret0;

 L732: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 1);
  if (GET_MODE (x6) == DImode
      && GET_CODE (x6) == SIGN_EXTEND)
    goto L733;
  goto ret0;

 L733: ATTRIBUTE_UNUSED_LABEL
  x7 = XEXP (x6, 0);
  if (register_operand (x7, SImode))
    {
      operands[2] = x7;
      goto L734;
    }
  goto ret0;

 L734: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (32)])
    goto L735;
  goto ret0;

 L735: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L736;
  goto ret0;

 L736: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L737;
    }
  goto ret0;

 L737: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L738;
  goto ret0;

 L738: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L739;
    }
  goto ret0;

 L739: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1676 "../.././gcc/config/mips/mips.md"
(ISA_HAS_MULHI))
    {
      return 57;  /* *smulsi3_highpart_neg_mulhi_internal */
    }
  goto ret0;

 L759: ATTRIBUTE_UNUSED_LABEL
  x7 = XEXP (x6, 0);
  if (register_operand (x7, SImode))
    {
      operands[1] = x7;
      goto L760;
    }
  goto ret0;

 L760: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 1);
  if (GET_MODE (x6) == DImode
      && GET_CODE (x6) == ZERO_EXTEND)
    goto L761;
  goto ret0;

 L761: ATTRIBUTE_UNUSED_LABEL
  x7 = XEXP (x6, 0);
  if (register_operand (x7, SImode))
    {
      operands[2] = x7;
      goto L762;
    }
  goto ret0;

 L762: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (32)])
    goto L763;
  goto ret0;

 L763: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L764;
  goto ret0;

 L764: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L765;
    }
  goto ret0;

 L765: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L766;
  goto ret0;

 L766: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L767;
    }
  goto ret0;

 L767: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1676 "../.././gcc/config/mips/mips.md"
(ISA_HAS_MULHI))
    {
      return 58;  /* *umulsi3_highpart_neg_mulhi_internal */
    }
  goto ret0;

 L5074: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x2, 0))
    {
    case 2:
      goto L5083;
    case 3:
      goto L5085;
    default:
      break;
    }
  goto ret0;

 L5083: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 331L:
      goto L3525;
    case 332L:
      goto L3550;
    default:
      break;
    }
  goto ret0;

 L3525: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L3526;
    }
  goto ret0;

 L3526: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L3527;
    }
  goto ret0;

 L3527: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3528;
  goto ret0;

 L3528: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L3529;
  goto ret0;

 L3529: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 331)
    goto L3530;
  goto ret0;

 L3530: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3531;
  goto ret0;

 L3531: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L3532;
  goto ret0;

 L3532: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L3533;
  goto ret0;

 L3533: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L3534;
    }
  goto ret0;

 L3534: ATTRIBUTE_UNUSED_LABEL
  if (
#line 453 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP))
    {
      return 457;  /* mips_muleq_s_w_phl */
    }
  goto ret0;

 L3550: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L3551;
    }
  goto ret0;

 L3551: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L3552;
    }
  goto ret0;

 L3552: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3553;
  goto ret0;

 L3553: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L3554;
  goto ret0;

 L3554: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 332)
    goto L3555;
  goto ret0;

 L3555: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3556;
  goto ret0;

 L3556: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L3557;
  goto ret0;

 L3557: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L3558;
  goto ret0;

 L3558: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L3559;
    }
  goto ret0;

 L3559: ATTRIBUTE_UNUSED_LABEL
  if (
#line 467 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP))
    {
      return 458;  /* mips_muleq_s_w_phr */
    }
  goto ret0;

 L5085: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 363)
    goto L3870;
  goto ret0;

 L3870: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L3871;
    }
  goto ret0;

 L3871: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3872;
    }
  goto ret0;

 L3872: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (GET_MODE (x3) == CCDSPmode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 182)
    goto L3873;
  goto ret0;

 L3873: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3874;
  goto ret0;

 L3874: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 182)
    goto L3875;
  goto ret0;

 L3875: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 363)
    goto L3876;
  goto ret0;

 L3876: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3877;
  goto ret0;

 L3877: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L3878;
  goto ret0;

 L3878: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (GET_MODE (x3) == CCDSPmode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 182)
    goto L3879;
  goto ret0;

 L3879: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L3880;
  goto ret0;

 L3880: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 187)
    goto L3881;
  goto ret0;

 L3881: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 363)
    goto L3882;
  goto ret0;

 L3882: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3883;
  goto ret0;

 L3883: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 923 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP && !TARGET_64BIT))
    {
      return 493;  /* mips_extpdp */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_10 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  switch (XVECLEN (x2, 0))
    {
    case 2:
      goto L5137;
    case 3:
      goto L5140;
    case 1:
      goto L5141;
    default:
      break;
    }
  goto ret0;

 L5137: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 301L:
      goto L3158;
    case 303L:
      goto L3213;
    case 304L:
      goto L3246;
    case 324L:
      goto L3404;
    case 331L:
      goto L3539;
    case 332L:
      goto L3564;
    case 358L:
      goto L3814;
    case 359L:
      goto L3825;
    case 360L:
      goto L3836;
    case 361L:
      goto L3847;
    default:
      break;
    }
  goto ret0;

 L3158: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3159;
    }
  goto ret0;

 L3159: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3160;
    }
  goto ret0;

 L3160: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3161;
  goto ret0;

 L3161: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L3162;
  goto ret0;

 L3162: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 301)
    goto L3163;
  goto ret0;

 L3163: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3164;
  goto ret0;

 L3164: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 10 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP))
    {
      return 418;  /* mips_addq_s_w */
    }
  goto ret0;

 L3213: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3214;
    }
  goto ret0;

 L3214: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3215;
    }
  goto ret0;

 L3215: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3216;
  goto ret0;

 L3216: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L3217;
  goto ret0;

 L3217: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 303)
    goto L3218;
  goto ret0;

 L3218: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3219;
  goto ret0;

 L3219: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && (
#line 84 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP) && 
#line 10 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP)))
    {
      return 423;  /* mips_subq_s_w */
    }
  goto ret0;

 L3246: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3247;
    }
  goto ret0;

 L3247: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3248;
    }
  goto ret0;

 L3248: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3249;
  goto ret0;

 L3249: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 184)
    goto L3250;
  goto ret0;

 L3250: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 304)
    goto L3251;
  goto ret0;

 L3251: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3252;
  goto ret0;

 L3252: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 98 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP))
    {
      return 426;  /* mips_addsc */
    }
  goto ret0;

 L3404: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3405;
    }
  goto ret0;

 L3405: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3406;
    }
  goto ret0;

 L3406: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3407;
  goto ret0;

 L3407: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L3408;
  goto ret0;

 L3408: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 324)
    goto L3409;
  goto ret0;

 L3409: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3410;
  goto ret0;

 L3410: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && (
#line 327 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP) && 
#line 19 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP)))
    {
      return 448;  /* mips_shll_s_w */
    }
  goto ret0;

 L3539: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L3540;
    }
  goto ret0;

 L3540: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L3541;
    }
  goto ret0;

 L3541: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3542;
  goto ret0;

 L3542: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L3543;
  goto ret0;

 L3543: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 331)
    goto L3544;
  goto ret0;

 L3544: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3545;
  goto ret0;

 L3545: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 453 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 457;  /* mips_muleq_s_w_phl */
    }
  goto ret0;

 L3564: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L3565;
    }
  goto ret0;

 L3565: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L3566;
    }
  goto ret0;

 L3566: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3567;
  goto ret0;

 L3567: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L3568;
  goto ret0;

 L3568: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 332)
    goto L3569;
  goto ret0;

 L3569: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3570;
  goto ret0;

 L3570: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 467 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 458;  /* mips_muleq_s_w_phr */
    }
  goto ret0;

 L3814: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L3815;
    }
  goto ret0;

 L3815: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3816;
    }
  goto ret0;

 L3816: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3817;
  goto ret0;

 L3817: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L3818;
  goto ret0;

 L3818: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 358)
    goto L3819;
  goto ret0;

 L3819: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3820;
  goto ret0;

 L3820: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 811 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP && !TARGET_64BIT))
    {
      return 488;  /* mips_extr_w */
    }
  goto ret0;

 L3825: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L3826;
    }
  goto ret0;

 L3826: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3827;
    }
  goto ret0;

 L3827: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3828;
  goto ret0;

 L3828: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L3829;
  goto ret0;

 L3829: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 359)
    goto L3830;
  goto ret0;

 L3830: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3831;
  goto ret0;

 L3831: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 832 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP && !TARGET_64BIT))
    {
      return 489;  /* mips_extr_r_w */
    }
  goto ret0;

 L3836: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L3837;
    }
  goto ret0;

 L3837: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3838;
    }
  goto ret0;

 L3838: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3839;
  goto ret0;

 L3839: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L3840;
  goto ret0;

 L3840: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 360)
    goto L3841;
  goto ret0;

 L3841: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3842;
  goto ret0;

 L3842: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 853 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP && !TARGET_64BIT))
    {
      return 490;  /* mips_extr_rs_w */
    }
  goto ret0;

 L3847: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L3848;
    }
  goto ret0;

 L3848: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3849;
    }
  goto ret0;

 L3849: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3850;
  goto ret0;

 L3850: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L3851;
  goto ret0;

 L3851: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 361)
    goto L3852;
  goto ret0;

 L3852: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3853;
  goto ret0;

 L3853: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 875 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP && !TARGET_64BIT))
    {
      return 491;  /* mips_extr_s_h */
    }
  goto ret0;

 L5140: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 305L:
      goto L3257;
    case 362L:
      goto L3858;
    default:
      break;
    }
  goto ret0;

 L3257: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3258;
    }
  goto ret0;

 L3258: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3259;
    }
  goto ret0;

 L3259: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (GET_MODE (x3) == CCDSPmode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 184)
    goto L3260;
  goto ret0;

 L3260: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3261;
  goto ret0;

 L3261: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L3262;
  goto ret0;

 L3262: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 305)
    goto L3263;
  goto ret0;

 L3263: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3264;
  goto ret0;

 L3264: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 113 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP))
    {
      return 427;  /* mips_addwc */
    }
  goto ret0;

 L3858: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L3859;
    }
  goto ret0;

 L3859: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3860;
    }
  goto ret0;

 L3860: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (GET_MODE (x3) == CCDSPmode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 182)
    goto L3861;
  goto ret0;

 L3861: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3862;
  goto ret0;

 L3862: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 187)
    goto L3863;
  goto ret0;

 L3863: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 362)
    goto L3864;
  goto ret0;

 L3864: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3865;
  goto ret0;

 L3865: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 898 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP && !TARGET_64BIT))
    {
      return 492;  /* mips_extp */
    }
  goto ret0;

 L5141: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 308)
    goto L3280;
  goto ret0;

 L3280: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3281;
    }
  goto ret0;

 L3281: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3282;
  goto ret0;

 L3282: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L3283;
  goto ret0;

 L3283: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 308)
    goto L3284;
  goto ret0;

 L3284: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1])
      && (
#line 147 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP) && 
#line 19 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP)))
    {
      return 430;  /* mips_absq_s_w */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_11 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  if (XVECLEN (x2, 0) == 3)
    goto L5183;
  goto ret0;

 L5183: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 337L:
      goto L3603;
    case 338L:
      goto L3616;
    case 339L:
      goto L3629;
    case 340L:
      goto L3642;
    case 341L:
      goto L3655;
    case 342L:
      goto L3668;
    case 343L:
      goto L3681;
    case 344L:
      goto L3694;
    case 345L:
      goto L3707;
    case 365L:
      goto L3894;
    default:
      break;
    }
  goto ret0;

 L3603: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L3604;
    }
  goto ret0;

 L3604: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L3605;
    }
  goto ret0;

 L3605: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (register_operand (x3, V2HImode))
    {
      operands[3] = x3;
      goto L3606;
    }
  goto ret0;

 L3606: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3607;
  goto ret0;

 L3607: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L3608;
  goto ret0;

 L3608: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 337)
    goto L3609;
  goto ret0;

 L3609: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3610;
  goto ret0;

 L3610: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L3611;
  goto ret0;

 L3611: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 529 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP && !TARGET_64BIT))
    {
      return 463;  /* mips_dpaq_s_w_ph */
    }
  goto ret0;

 L3616: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L3617;
    }
  goto ret0;

 L3617: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L3618;
    }
  goto ret0;

 L3618: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (register_operand (x3, V2HImode))
    {
      operands[3] = x3;
      goto L3619;
    }
  goto ret0;

 L3619: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3620;
  goto ret0;

 L3620: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L3621;
  goto ret0;

 L3621: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 338)
    goto L3622;
  goto ret0;

 L3622: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3623;
  goto ret0;

 L3623: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L3624;
  goto ret0;

 L3624: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 545 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP && !TARGET_64BIT))
    {
      return 464;  /* mips_dpsq_s_w_ph */
    }
  goto ret0;

 L3629: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L3630;
    }
  goto ret0;

 L3630: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L3631;
    }
  goto ret0;

 L3631: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (register_operand (x3, V2HImode))
    {
      operands[3] = x3;
      goto L3632;
    }
  goto ret0;

 L3632: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3633;
  goto ret0;

 L3633: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L3634;
  goto ret0;

 L3634: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 339)
    goto L3635;
  goto ret0;

 L3635: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3636;
  goto ret0;

 L3636: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L3637;
  goto ret0;

 L3637: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 561 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP && !TARGET_64BIT))
    {
      return 465;  /* mips_mulsaq_s_w_ph */
    }
  goto ret0;

 L3642: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L3643;
    }
  goto ret0;

 L3643: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3644;
    }
  goto ret0;

 L3644: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L3645;
    }
  goto ret0;

 L3645: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3646;
  goto ret0;

 L3646: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L3647;
  goto ret0;

 L3647: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 340)
    goto L3648;
  goto ret0;

 L3648: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3649;
  goto ret0;

 L3649: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L3650;
  goto ret0;

 L3650: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 577 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP && !TARGET_64BIT))
    {
      return 466;  /* mips_dpaq_sa_l_w */
    }
  goto ret0;

 L3655: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L3656;
    }
  goto ret0;

 L3656: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3657;
    }
  goto ret0;

 L3657: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L3658;
    }
  goto ret0;

 L3658: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3659;
  goto ret0;

 L3659: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L3660;
  goto ret0;

 L3660: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 341)
    goto L3661;
  goto ret0;

 L3661: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3662;
  goto ret0;

 L3662: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L3663;
  goto ret0;

 L3663: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 593 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP && !TARGET_64BIT))
    {
      return 467;  /* mips_dpsq_sa_l_w */
    }
  goto ret0;

 L3668: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L3669;
    }
  goto ret0;

 L3669: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L3670;
    }
  goto ret0;

 L3670: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (register_operand (x3, V2HImode))
    {
      operands[3] = x3;
      goto L3671;
    }
  goto ret0;

 L3671: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3672;
  goto ret0;

 L3672: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L3673;
  goto ret0;

 L3673: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 342)
    goto L3674;
  goto ret0;

 L3674: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3675;
  goto ret0;

 L3675: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L3676;
  goto ret0;

 L3676: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 609 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP && !TARGET_64BIT))
    {
      return 468;  /* mips_maq_s_w_phl */
    }
  goto ret0;

 L3681: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L3682;
    }
  goto ret0;

 L3682: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L3683;
    }
  goto ret0;

 L3683: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (register_operand (x3, V2HImode))
    {
      operands[3] = x3;
      goto L3684;
    }
  goto ret0;

 L3684: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3685;
  goto ret0;

 L3685: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L3686;
  goto ret0;

 L3686: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 343)
    goto L3687;
  goto ret0;

 L3687: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3688;
  goto ret0;

 L3688: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L3689;
  goto ret0;

 L3689: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 624 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP && !TARGET_64BIT))
    {
      return 469;  /* mips_maq_s_w_phr */
    }
  goto ret0;

 L3694: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L3695;
    }
  goto ret0;

 L3695: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L3696;
    }
  goto ret0;

 L3696: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (register_operand (x3, V2HImode))
    {
      operands[3] = x3;
      goto L3697;
    }
  goto ret0;

 L3697: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3698;
  goto ret0;

 L3698: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L3699;
  goto ret0;

 L3699: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 344)
    goto L3700;
  goto ret0;

 L3700: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3701;
  goto ret0;

 L3701: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L3702;
  goto ret0;

 L3702: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 640 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP && !TARGET_64BIT))
    {
      return 470;  /* mips_maq_sa_w_phl */
    }
  goto ret0;

 L3707: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L3708;
    }
  goto ret0;

 L3708: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L3709;
    }
  goto ret0;

 L3709: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (register_operand (x3, V2HImode))
    {
      operands[3] = x3;
      goto L3710;
    }
  goto ret0;

 L3710: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3711;
  goto ret0;

 L3711: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L3712;
  goto ret0;

 L3712: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 345)
    goto L3713;
  goto ret0;

 L3713: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3714;
  goto ret0;

 L3714: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L3715;
  goto ret0;

 L3715: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 655 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP && !TARGET_64BIT))
    {
      return 471;  /* mips_maq_sa_w_phr */
    }
  goto ret0;

 L3894: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L3895;
    }
  goto ret0;

 L3895: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3896;
    }
  goto ret0;

 L3896: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (GET_MODE (x3) == CCDSPmode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 182)
    goto L3897;
  goto ret0;

 L3897: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3898;
  goto ret0;

 L3898: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 182)
    goto L3899;
  goto ret0;

 L3899: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 365)
    goto L3900;
  goto ret0;

 L3900: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3901;
  goto ret0;

 L3901: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L3902;
  goto ret0;

 L3902: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (GET_MODE (x3) == CCDSPmode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 182
      && 
#line 966 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP && !TARGET_64BIT))
    {
      return 495;  /* mips_mthlip */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_12 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L5096;
    case DImode:
      goto L5097;
    case V2HImode:
      goto L5098;
    case V4QImode:
      goto L5099;
    default:
      break;
    }
 L2533: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PC)
    goto L2534;
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L2603;
    }
  goto ret0;

 L5096: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L196;
    }
  goto L2533;

 L196: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L5100;
  x2 = XEXP (x1, 0);
  goto L2533;

 L5100: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case MULT:
      goto L197;
    case PLUS:
      goto L367;
    case MINUS:
      goto L400;
    case TRUNCATE:
      goto L627;
    case DIV:
      goto L1058;
    case UDIV:
      goto L1080;
    case FIX:
      goto L1522;
    case UNSPEC:
      goto L5120;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L2533;

 L197: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L198;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L198: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L199;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L199: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L200;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L200: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L201;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L201: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1088 "../.././gcc/config/mips/mips.md"
(!TARGET_FIX_R4000))
    {
      return 29;  /* mulsi3_internal */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L367: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L368;
  x2 = XEXP (x1, 0);
  goto L2533;

 L368: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L369;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L369: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L370;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L370: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0]))
    goto L371;
  x2 = XEXP (x1, 0);
  goto L2533;

 L371: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L372;
    case CLOBBER:
      goto L836;
    default:
     break;
   }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L372: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L373;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L373: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L374;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L374: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L375;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L375: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L376;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L376: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2]))
    goto L377;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L377: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0])
      && 
#line 1289 "../.././gcc/config/mips/mips.md"
(ISA_HAS_MACC && reload_completed)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 37;  /* *macc2 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L836: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L837;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L837: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1710 "../.././gcc/config/mips/mips.md"
(TARGET_MAD))
    {
      return 61;  /* madsi */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L400: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L401;
  x2 = XEXP (x1, 0);
  goto L2533;

 L401: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L402;
  x2 = XEXP (x1, 0);
  goto L2533;

 L402: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L403;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L403: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L404;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L404: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L405;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L405: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L406;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L406: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MINUS)
    goto L407;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L407: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L408;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L408: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L409;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L409: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L410;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L410: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && 
#line 1304 "../.././gcc/config/mips/mips.md"
(ISA_HAS_MSAC && reload_completed)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 38;  /* *msac2 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L627: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == LSHIFTRT)
    goto L628;
  x2 = XEXP (x1, 0);
  goto L2533;

 L628: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == MULT)
    goto L629;
  x2 = XEXP (x1, 0);
  goto L2533;

 L629: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == DImode)
    goto L5133;
  x2 = XEXP (x1, 0);
  goto L2533;

 L5133: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x5))
    {
    case SIGN_EXTEND:
      goto L630;
    case ZERO_EXTEND:
      goto L654;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L2533;

 L630: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L631;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L631: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == SIGN_EXTEND)
    goto L632;
  x2 = XEXP (x1, 0);
  goto L2533;

 L632: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L633;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L633: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (32)])
    goto L634;
  x2 = XEXP (x1, 0);
  goto L2533;

 L634: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L635;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L635: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L636;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L636: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1643 "../.././gcc/config/mips/mips.md"
(!ISA_HAS_MULHI && !TARGET_FIX_R4000))
    {
      return 53;  /* smulsi3_highpart_internal */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L654: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L655;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L655: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == ZERO_EXTEND)
    goto L656;
  x2 = XEXP (x1, 0);
  goto L2533;

 L656: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L657;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L657: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (32)])
    goto L658;
  x2 = XEXP (x1, 0);
  goto L2533;

 L658: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L659;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L659: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L660;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L660: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1643 "../.././gcc/config/mips/mips.md"
(!ISA_HAS_MULHI && !TARGET_FIX_R4000))
    {
      return 54;  /* umulsi3_highpart_internal */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L1058: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1059;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L1059: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1060;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L1060: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1061;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L1061: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1062;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L1062: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MOD)
    goto L1063;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L1063: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1064;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L1064: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 1881 "../.././gcc/config/mips/mips.md"
(!TARGET_FIX_VR4120))
    {
      return 88;  /* divmodsi4 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L1080: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1081;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L1081: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1082;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L1082: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1083;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L1083: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1084;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L1084: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UMOD)
    goto L1085;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L1085: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1086;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L1086: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    {
      return 90;  /* udivmodsi4 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L1522: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case DFmode:
      goto L5135;
    case SFmode:
      goto L5136;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L5135: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L1523;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L1523: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1524;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L1524: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L1525;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L1525: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2545 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !ISA_HAS_TRUNC_W))
    {
      return 169;  /* fix_truncdfsi2_macro */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L5136: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L1541;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L1541: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1542;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L1542: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L1543;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L1543: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2583 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && !ISA_HAS_TRUNC_W))
    {
      return 171;  /* fix_truncsfsi2_macro */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L5120: ATTRIBUTE_UNUSED_LABEL
  tem = recog_10 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x2 = XEXP (x1, 0);
  goto L2533;

 L5097: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L211;
    }
  goto L2533;

 L211: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L5150;
  x2 = XEXP (x1, 0);
  goto L2533;

 L5150: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case MULT:
      goto L212;
    case SIGN_EXTEND:
      goto L557;
    case TRUNCATE:
      goto L783;
    case DIV:
      goto L1069;
    case UDIV:
      goto L1091;
    case UNSPEC:
      goto L5166;
    case CONST:
    case LABEL_REF:
    case SYMBOL_REF:
      goto L5155;
    default:
      x2 = XEXP (x1, 0);
      goto L2533;
   }
 L5155: ATTRIBUTE_UNUSED_LABEL
  if (general_symbolic_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1666;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L212: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L5177;
  x2 = XEXP (x1, 0);
  goto L2533;

 L5177: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case SIGN_EXTEND:
      goto L474;
    case ZERO_EXTEND:
      goto L493;
    case REG:
    case SUBREG:
      goto L5176;
    default:
      x2 = XEXP (x1, 0);
      goto L2533;
   }
 L5176: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L213;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L474: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L475;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L475: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L476;
  x2 = XEXP (x1, 0);
  goto L2533;

 L476: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L477;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L477: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L478;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L478: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L479;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L479: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1517 "../.././gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_FIX_R4000))
    {
      return 43;  /* mulsidi3_32bit_r4000 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L493: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L494;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L494: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L495;
  x2 = XEXP (x1, 0);
  goto L2533;

 L495: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L496;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L496: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L497;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L497: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L498;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L498: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1517 "../.././gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_FIX_R4000))
    {
      return 44;  /* umulsidi3_32bit_r4000 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L213: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L214;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L214: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L215;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L215: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L216;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L216: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1088 "../.././gcc/config/mips/mips.md"
(!TARGET_FIX_R4000) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 30;  /* muldi3_internal */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L557: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L558;
  x2 = XEXP (x1, 0);
  goto L2533;

 L558: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L559;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L559: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L560;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L560: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L561;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L561: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L562;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L562: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ASHIFTRT)
    goto L563;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L563: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == MULT)
    goto L564;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L564: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode)
    goto L5179;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L5179: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case SIGN_EXTEND:
      goto L565;
    case ZERO_EXTEND:
      goto L581;
    default:
     break;
   }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L565: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[2]))
    goto L566;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L566: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L567;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L567: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[3]))
    goto L568;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L568: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (32)]
      && 
#line 1580 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000))
    {
      return 47;  /* *mulsidi3_64bit_parts */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L581: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[2]))
    goto L582;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L582: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == ZERO_EXTEND)
    goto L583;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L583: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[3]))
    goto L584;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L584: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (32)]
      && 
#line 1580 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000))
    {
      return 48;  /* *umulsidi3_64bit_parts */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L783: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == TImode
      && GET_CODE (x3) == LSHIFTRT)
    goto L784;
  x2 = XEXP (x1, 0);
  goto L2533;

 L784: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == TImode
      && GET_CODE (x4) == MULT)
    goto L785;
  x2 = XEXP (x1, 0);
  goto L2533;

 L785: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == TImode)
    goto L5181;
  x2 = XEXP (x1, 0);
  goto L2533;

 L5181: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x5))
    {
    case SIGN_EXTEND:
      goto L786;
    case ZERO_EXTEND:
      goto L810;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L2533;

 L786: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, DImode))
    {
      operands[1] = x6;
      goto L787;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L787: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == TImode
      && GET_CODE (x5) == SIGN_EXTEND)
    goto L788;
  x2 = XEXP (x1, 0);
  goto L2533;

 L788: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, DImode))
    {
      operands[2] = x6;
      goto L789;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L789: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (64)])
    goto L790;
  x2 = XEXP (x1, 0);
  goto L2533;

 L790: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L791;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L791: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L792;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L792: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1695 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000
   && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)))
    {
      return 59;  /* smuldi3_highpart */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L810: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, DImode))
    {
      operands[1] = x6;
      goto L811;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L811: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == TImode
      && GET_CODE (x5) == ZERO_EXTEND)
    goto L812;
  x2 = XEXP (x1, 0);
  goto L2533;

 L812: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, DImode))
    {
      operands[2] = x6;
      goto L813;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L813: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (64)])
    goto L814;
  x2 = XEXP (x1, 0);
  goto L2533;

 L814: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L815;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L815: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L816;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L816: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1695 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000
   && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)))
    {
      return 60;  /* umuldi3_highpart */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L1069: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1070;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L1070: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1071;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L1071: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1072;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L1072: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L1073;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L1073: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == MOD)
    goto L1074;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L1074: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1075;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L1075: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (
#line 1881 "../.././gcc/config/mips/mips.md"
(!TARGET_FIX_VR4120) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 89;  /* divmoddi4 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L1091: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1092;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L1092: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1093;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L1093: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1094;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L1094: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L1095;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L1095: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == UMOD)
    goto L1096;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L1096: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1097;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L1097: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return 91;  /* udivmoddi4 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L5166: ATTRIBUTE_UNUSED_LABEL
  tem = recog_11 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x2 = XEXP (x1, 0);
  goto L2533;

 L1666: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1667;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L1667: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1668;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L1668: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3053 "../.././gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS && cse_not_expected))
    {
      return 191;  /* *lea64 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L5098: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2HImode))
    {
      operands[0] = x2;
      goto L3135;
    }
  goto L2533;

 L3135: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2HImode)
    goto L5193;
  x2 = XEXP (x1, 0);
  goto L2533;

 L5193: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L3136;
    case UNSPEC:
      goto L5204;
    case MINUS:
      goto L3191;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L2533;

 L3136: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L3137;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L3137: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L3138;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L3138: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3139;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3139: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L3140;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3140: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 300)
    goto L3141;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3141: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3142;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3142: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 15 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP))
    {
      return 416;  /* addv2hi3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L5204: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x2, 0))
    {
    case 2:
      goto L5213;
    case 1:
      goto L5215;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L5213: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 301L:
      goto L3169;
    case 303L:
      goto L3224;
    case 311L:
      goto L3310;
    case 323L:
      goto L3382;
    case 324L:
      goto L3415;
    case 328L:
      goto L3464;
    case 329L:
      goto L3489;
    case 330L:
      goto L3514;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L3169: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L3170;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L3170: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L3171;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L3171: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3172;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3172: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L3173;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3173: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 301)
    goto L3174;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3174: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3175;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3175: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 11 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP))
    {
      return 419;  /* mips_addq_s_ph */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3224: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L3225;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L3225: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L3226;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L3226: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3227;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3227: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L3228;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3228: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 303)
    goto L3229;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3229: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3230;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3230: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && (
#line 84 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP) && 
#line 11 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP)))
    {
      return 424;  /* mips_subq_s_ph */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3310: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3311;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L3311: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3312;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L3312: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3313;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3313: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L3314;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3314: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 311)
    goto L3315;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3315: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3316;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3316: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 182 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP))
    {
      return 434;  /* mips_precrq_rs_ph_w */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3382: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L3383;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L3383: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3384;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L3384: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3385;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3385: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L3386;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3386: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 323)
    goto L3387;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3387: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3388;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3388: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && (
#line 305 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP) && 
#line 15 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP)))
    {
      return 446;  /* mips_shll_ph */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3415: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L3416;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L3416: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3417;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L3417: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3418;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3418: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L3419;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3419: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 324)
    goto L3420;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3420: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3421;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3421: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && (
#line 327 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP) && 
#line 20 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP)))
    {
      return 449;  /* mips_shll_s_ph */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3464: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V4QImode))
    {
      operands[1] = x3;
      goto L3465;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L3465: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L3466;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L3466: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3467;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3467: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L3468;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3468: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 328)
    goto L3469;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3469: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3470;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3470: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 409 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 454;  /* mips_muleu_s_ph_qbl */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3489: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V4QImode))
    {
      operands[1] = x3;
      goto L3490;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L3490: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L3491;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L3491: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3492;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3492: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L3493;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3493: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 329)
    goto L3494;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3494: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3495;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3495: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 423 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 455;  /* mips_muleu_s_ph_qbr */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3514: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L3515;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L3515: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L3516;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L3516: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3517;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3517: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L3518;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3518: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 330)
    goto L3519;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3519: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3520;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3520: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 438 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 456;  /* mips_mulq_rs_ph */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L5215: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 308)
    goto L3289;
  x2 = XEXP (x1, 0);
  goto L2533;

 L3289: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L3290;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L3290: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3291;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3291: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L3292;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3292: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 308)
    goto L3293;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3293: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1])
      && (
#line 147 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP) && 
#line 20 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP)))
    {
      return 431;  /* mips_absq_s_ph */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3191: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L3192;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L3192: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L3193;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L3193: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3194;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3194: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L3195;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3195: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 302)
    goto L3196;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3196: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3197;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3197: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && (
#line 71 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP) && 
#line 15 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP)))
    {
      return 421;  /* subv2hi3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L5099: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V4QImode))
    {
      operands[0] = x2;
      goto L3146;
    }
  goto L2533;

 L3146: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4QImode)
    goto L5222;
  x2 = XEXP (x1, 0);
  goto L2533;

 L5222: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L3147;
    case UNSPEC:
      goto L5228;
    case MINUS:
      goto L3202;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L2533;

 L3147: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4QImode))
    {
      operands[1] = x3;
      goto L3148;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L3148: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V4QImode))
    {
      operands[2] = x3;
      goto L3149;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L3149: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3150;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3150: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L3151;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3151: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 300)
    goto L3152;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3152: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3153;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3153: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 16 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP))
    {
      return 417;  /* addv4qi3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L5228: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 2)
    goto L5232;
  x2 = XEXP (x1, 0);
  goto L2533;

 L5232: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 301L:
      goto L3180;
    case 303L:
      goto L3235;
    case 312L:
      goto L3321;
    case 323L:
      goto L3393;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L3180: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V4QImode))
    {
      operands[1] = x3;
      goto L3181;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L3181: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V4QImode))
    {
      operands[2] = x3;
      goto L3182;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L3182: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3183;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3183: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L3184;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3184: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 301)
    goto L3185;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3185: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3186;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3186: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 12 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP))
    {
      return 420;  /* mips_addu_s_qb */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3235: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V4QImode))
    {
      operands[1] = x3;
      goto L3236;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L3236: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V4QImode))
    {
      operands[2] = x3;
      goto L3237;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L3237: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3238;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3238: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L3239;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3239: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 303)
    goto L3240;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3240: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3241;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3241: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && (
#line 84 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP) && 
#line 12 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP)))
    {
      return 425;  /* mips_subu_s_qb */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3321: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L3322;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L3322: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L3323;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L3323: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3324;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3324: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L3325;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3325: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 312)
    goto L3326;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3326: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3327;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3327: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 197 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP))
    {
      return 435;  /* mips_precrqu_s_qb_ph */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3393: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V4QImode))
    {
      operands[1] = x3;
      goto L3394;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L3394: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3395;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L3395: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3396;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3396: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L3397;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3397: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 323)
    goto L3398;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3398: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3399;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3399: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && (
#line 305 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP) && 
#line 16 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP)))
    {
      return 447;  /* mips_shll_qb */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3202: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4QImode))
    {
      operands[1] = x3;
      goto L3203;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L3203: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V4QImode))
    {
      operands[2] = x3;
      goto L3204;
    }
  x2 = XEXP (x1, 0);
  goto L2533;

 L3204: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3205;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3205: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L3206;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3206: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 302)
    goto L3207;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3207: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3208;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L3208: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && (
#line 71 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP) && 
#line 16 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP)))
    {
      return 422;  /* subv4qi3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2533;

 L2534: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L5236;
    case DImode:
      goto L5237;
    default:
      break;
    }
  goto ret0;

 L5236: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2535;
    }
  goto ret0;

 L2535: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L2536;
  goto ret0;

 L2536: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == LABEL_REF)
    goto L2537;
  goto ret0;

 L2537: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L2538;

 L2538: ATTRIBUTE_UNUSED_LABEL
  if (
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == SImode))
    {
      return 339;  /* tablejumpsi */
    }
  goto ret0;

 L5237: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L2543;
    }
  goto ret0;

 L2543: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L2544;
  goto ret0;

 L2544: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == LABEL_REF)
    goto L2545;
  goto ret0;

 L2545: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L2546;

 L2546: ATTRIBUTE_UNUSED_LABEL
  if (
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == DImode))
    {
      return 340;  /* tablejumpdi */
    }
  goto ret0;

 L2603: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L2604;
  goto ret0;

 L2604: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L2605;
  goto ret0;

 L2605: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (call_insn_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L2606;
    }
  goto ret0;

 L2606: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L2607;

 L2607: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L2608;
    case CLOBBER:
      goto L2647;
    default:
     break;
   }
  goto ret0;

 L2608: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L2609;
    }
  goto ret0;

 L2609: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L2610;
  goto ret0;

 L2610: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L2611;
  goto ret0;

 L2611: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L2612;
  goto ret0;

 L2612: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 5067 "../.././gcc/config/mips/mips.md"
(TARGET_SIBCALLS && SIBLING_CALL_P (insn)))
    {
      return 351;  /* sibcall_value_multiple_internal */
    }
 L2700: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x3, operands[2])
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 356;  /* call_value_multiple_internal */
    }
 L2730: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x3, operands[2])
      && 
#line 5221 "../.././gcc/config/mips/mips.md"
(TARGET_SPLIT_CALLS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 357;  /* call_value_multiple_split */
    }
  goto ret0;

 L2647: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31)
    {
      return 354;  /* call_value_internal */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_13 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  switch (XVECLEN (x0, 0))
    {
    case 3:
      goto L160;
    case 2:
      goto L194;
    case 4:
      goto L258;
    case 6:
      goto L3904;
    default:
      break;
    }
  goto ret0;

 L160: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L161;
    case CALL:
      goto L2627;
    default:
     break;
   }
  goto ret0;

 L161: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L5063;
    case DImode:
      goto L5064;
    case V2HImode:
      goto L5065;
    default:
      break;
    }
 L2657: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L2658;
    }
  goto ret0;

 L5063: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L162;
    }
  goto L2657;

 L162: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L5066;
  x2 = XEXP (x1, 0);
  goto L2657;

 L5066: ATTRIBUTE_UNUSED_LABEL
  tem = recog_9 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x2 = XEXP (x1, 0);
  goto L2657;

 L5064: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L179;
    }
  goto L2657;

 L179: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == MULT)
    goto L180;
  x2 = XEXP (x1, 0);
  goto L2657;

 L180: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L181;
    }
  x2 = XEXP (x1, 0);
  goto L2657;

 L181: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L182;
    }
  x2 = XEXP (x1, 0);
  goto L2657;

 L182: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L183;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2657;

 L183: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L184;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2657;

 L184: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L185;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2657;

 L185: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[4] = x2;
      goto L186;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2657;

 L186: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1052 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && GENERATE_MULT3_DI))
    {
      return 28;  /* muldi3_mult3 */
    }
 L250: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1099 "../.././gcc/config/mips/mips.md"
(TARGET_FIX_R4000) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 32;  /* muldi3_r4000 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2657;

 L5065: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2HImode))
    {
      operands[0] = x2;
      goto L3449;
    }
  goto L2657;

 L3449: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2HImode)
    goto L5086;
  x2 = XEXP (x1, 0);
  goto L2657;

 L5086: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == UNSPEC)
    goto L5089;
  x2 = XEXP (x1, 0);
  goto L2657;

 L5089: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 2)
    goto L5092;
  x2 = XEXP (x1, 0);
  goto L2657;

 L5092: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 328L:
      goto L3450;
    case 329L:
      goto L3475;
    case 330L:
      goto L3500;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L2657;

 L3450: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V4QImode))
    {
      operands[1] = x3;
      goto L3451;
    }
  x2 = XEXP (x1, 0);
  goto L2657;

 L3451: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L3452;
    }
  x2 = XEXP (x1, 0);
  goto L2657;

 L3452: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3453;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2657;

 L3453: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L3454;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2657;

 L3454: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 328)
    goto L3455;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2657;

 L3455: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3456;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2657;

 L3456: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L3457;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2657;

 L3457: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L3458;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2657;

 L3458: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L3459;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2657;

 L3459: ATTRIBUTE_UNUSED_LABEL
  if (
#line 409 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP))
    {
      return 454;  /* mips_muleu_s_ph_qbl */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2657;

 L3475: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V4QImode))
    {
      operands[1] = x3;
      goto L3476;
    }
  x2 = XEXP (x1, 0);
  goto L2657;

 L3476: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L3477;
    }
  x2 = XEXP (x1, 0);
  goto L2657;

 L3477: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3478;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2657;

 L3478: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L3479;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2657;

 L3479: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 329)
    goto L3480;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2657;

 L3480: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3481;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2657;

 L3481: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L3482;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2657;

 L3482: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L3483;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2657;

 L3483: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L3484;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2657;

 L3484: ATTRIBUTE_UNUSED_LABEL
  if (
#line 423 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP))
    {
      return 455;  /* mips_muleu_s_ph_qbr */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2657;

 L3500: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L3501;
    }
  x2 = XEXP (x1, 0);
  goto L2657;

 L3501: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L3502;
    }
  x2 = XEXP (x1, 0);
  goto L2657;

 L3502: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3503;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2657;

 L3503: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L3504;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2657;

 L3504: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 330)
    goto L3505;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2657;

 L3505: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3506;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2657;

 L3506: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L3507;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2657;

 L3507: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L3508;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2657;

 L3508: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L3509;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2657;

 L3509: ATTRIBUTE_UNUSED_LABEL
  if (
#line 438 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP))
    {
      return 456;  /* mips_mulq_rs_ph */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2657;

 L2658: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L2659;
  goto ret0;

 L2659: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L2660;
  goto ret0;

 L2660: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (call_insn_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L2661;
    }
  goto ret0;

 L2661: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L2662;

 L2662: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case CLOBBER:
      goto L2663;
    case SET:
      goto L2681;
    default:
     break;
   }
  goto ret0;

 L2663: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31)
    goto L2664;
  goto ret0;

 L2664: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L2665;
  goto ret0;

 L2665: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 28
      && 
#line 5185 "../.././gcc/config/mips/mips.md"
(TARGET_SPLIT_CALLS))
    {
      return 355;  /* call_value_split */
    }
  goto ret0;

 L2681: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L2682;
    }
  goto ret0;

 L2682: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L2683;
  goto ret0;

 L2683: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L2684;
  goto ret0;

 L2684: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L2685;
  goto ret0;

 L2685: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L2686;
  goto ret0;

 L2686: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L2687;
  goto ret0;

 L2687: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31)
    {
      return 356;  /* call_value_multiple_internal */
    }
  goto ret0;

 L2627: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L2628;
  goto ret0;

 L2628: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (call_insn_operand (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L2629;
    }
  goto ret0;

 L2629: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  goto L2630;

 L2630: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2631;
  goto ret0;

 L2631: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31)
    goto L2632;
  goto ret0;

 L2632: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L2633;
  goto ret0;

 L2633: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 28
      && 
#line 5143 "../.././gcc/config/mips/mips.md"
(TARGET_SPLIT_CALLS))
    {
      return 353;  /* call_split */
    }
  goto ret0;

 L194: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L195;
    case RETURN:
      goto L2552;
    case UNSPEC:
      goto L5095;
    case CALL:
      goto L2615;
    default:
     break;
   }
  goto ret0;

 L195: ATTRIBUTE_UNUSED_LABEL
  return recog_12 (x0, insn, pnum_clobbers);

 L2552: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L2553;
  goto ret0;

 L2553: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (pmode_register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      return 343;  /* return_internal */
    }
  goto ret0;

 L5095: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 7)
    goto L2556;
  goto ret0;

 L2556: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L5238;
    case DImode:
      goto L5239;
    default:
      break;
    }
  goto ret0;

 L5238: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2557;
    }
  goto ret0;

 L2557: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2558;
  goto ret0;

 L2558: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2559;
    }
  goto ret0;

 L2559: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4940 "../.././gcc/config/mips/mips.md"
(! TARGET_64BIT))
    {
      return 344;  /* eh_set_lr_si */
    }
  goto ret0;

 L5239: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L2566;
    }
  goto ret0;

 L2566: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2567;
  goto ret0;

 L2567: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2568;
    }
  goto ret0;

 L2568: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4946 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return 345;  /* eh_set_lr_di */
    }
  goto ret0;

 L2615: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L2616;
  goto ret0;

 L2616: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (call_insn_operand (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L2617;
    }
  goto ret0;

 L2617: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  goto L2618;

 L2618: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2619;
  goto ret0;

 L2619: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31)
    {
      return 352;  /* call_internal */
    }
  goto ret0;

 L258: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L259;
  goto ret0;

 L259: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L5240;
    case DImode:
      goto L5241;
    default:
      break;
    }
 L2703: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L2704;
    }
  goto ret0;

 L5240: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L260;
    }
  goto L2703;

 L260: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L5242;
  x2 = XEXP (x1, 0);
  goto L2703;

 L5242: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L261;
    case MINUS:
      goto L326;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L2703;

 L261: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L262;
  x2 = XEXP (x1, 0);
  goto L2703;

 L262: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L263;
    }
  x2 = XEXP (x1, 0);
  goto L2703;

 L263: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L264;
    }
  x2 = XEXP (x1, 0);
  goto L2703;

 L264: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L265;
    }
  x2 = XEXP (x1, 0);
  goto L2703;

 L265: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L266;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2703;

 L266: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L267;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2703;

 L267: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L268;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2703;

 L268: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L269;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2703;

 L269: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L270;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2703;

 L270: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[6] = x2;
      goto L271;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2703;

 L271: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1156 "../.././gcc/config/mips/mips.md"
((TARGET_MIPS3900
   || ISA_HAS_MADD_MSUB)
   && !TARGET_MIPS16))
    {
      return 33;  /* *mul_acc_si */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2703;

 L326: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L327;
    }
  x2 = XEXP (x1, 0);
  goto L2703;

 L327: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L328;
  x2 = XEXP (x1, 0);
  goto L2703;

 L328: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L329;
    }
  x2 = XEXP (x1, 0);
  goto L2703;

 L329: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L330;
    }
  x2 = XEXP (x1, 0);
  goto L2703;

 L330: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L331;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2703;

 L331: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L332;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2703;

 L332: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L333;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2703;

 L333: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L334;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2703;

 L334: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L335;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2703;

 L335: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[6] = x2;
      goto L336;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2703;

 L336: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1261 "../.././gcc/config/mips/mips.md"
(ISA_HAS_MACC && !ISA_HAS_MSAC))
    {
      return 36;  /* *msac_using_macc */
    }
 L425: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1417 "../.././gcc/config/mips/mips.md"
(ISA_HAS_MADD_MSUB))
    {
      return 39;  /* *mul_sub_si */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2703;

 L5241: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L510;
    }
  goto L2703;

 L510: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == MULT)
    goto L511;
  x2 = XEXP (x1, 0);
  goto L2703;

 L511: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L5244;
  x2 = XEXP (x1, 0);
  goto L2703;

 L5244: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case SIGN_EXTEND:
      goto L512;
    case ZERO_EXTEND:
      goto L535;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L2703;

 L512: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L513;
    }
  x2 = XEXP (x1, 0);
  goto L2703;

 L513: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L514;
  x2 = XEXP (x1, 0);
  goto L2703;

 L514: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L515;
    }
  x2 = XEXP (x1, 0);
  goto L2703;

 L515: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L516;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2703;

 L516: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L517;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2703;

 L517: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L518;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2703;

 L518: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[4] = x2;
      goto L519;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2703;

 L519: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L520;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2703;

 L520: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[5] = x2;
      goto L521;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2703;

 L521: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1530 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000))
    {
      return 45;  /* *mulsidi3_64bit */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2703;

 L535: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L536;
    }
  x2 = XEXP (x1, 0);
  goto L2703;

 L536: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L537;
  x2 = XEXP (x1, 0);
  goto L2703;

 L537: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L538;
    }
  x2 = XEXP (x1, 0);
  goto L2703;

 L538: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L539;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2703;

 L539: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L540;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2703;

 L540: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L541;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2703;

 L541: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[4] = x2;
      goto L542;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2703;

 L542: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L543;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2703;

 L543: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[5] = x2;
      goto L544;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2703;

 L544: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1530 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000))
    {
      return 46;  /* *umulsidi3_64bit */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2703;

 L2704: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L2705;
  goto ret0;

 L2705: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L2706;
  goto ret0;

 L2706: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (call_insn_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L2707;
    }
  goto ret0;

 L2707: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L2708;

 L2708: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2709;
  goto ret0;

 L2709: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L2710;
    }
  goto ret0;

 L2710: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L2711;
  goto ret0;

 L2711: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L2712;
  goto ret0;

 L2712: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L2713;
  goto ret0;

 L2713: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L2714;
  goto ret0;

 L2714: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L2715;
  goto ret0;

 L2715: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31)
    goto L2716;
  goto ret0;

 L2716: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L2717;
  goto ret0;

 L2717: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 28
      && 
#line 5221 "../.././gcc/config/mips/mips.md"
(TARGET_SPLIT_CALLS))
    {
      return 357;  /* call_value_multiple_split */
    }
  goto ret0;

 L3904: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L3905;
  goto ret0;

 L3905: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 182)
    goto L3906;
  goto ret0;

 L3906: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 366)
    goto L3907;
  goto ret0;

 L3907: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L3908;
    }
  goto ret0;

 L3908: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (const_uimm6_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3909;
    }
  goto ret0;

 L3909: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3910;
  goto ret0;

 L3910: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 183)
    goto L3911;
  goto ret0;

 L3911: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 366)
    goto L3912;
  goto ret0;

 L3912: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L3913;
  goto ret0;

 L3913: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[1]))
    goto L3914;
  goto ret0;

 L3914: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L3915;
  goto ret0;

 L3915: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 184)
    goto L3916;
  goto ret0;

 L3916: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 366)
    goto L3917;
  goto ret0;

 L3917: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L3918;
  goto ret0;

 L3918: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[1]))
    goto L3919;
  goto ret0;

 L3919: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == SET)
    goto L3920;
  goto ret0;

 L3920: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L3921;
  goto ret0;

 L3921: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 366)
    goto L3922;
  goto ret0;

 L3922: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L3923;
  goto ret0;

 L3923: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[1]))
    goto L3924;
  goto ret0;

 L3924: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == SET)
    goto L3925;
  goto ret0;

 L3925: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 186)
    goto L3926;
  goto ret0;

 L3926: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 366)
    goto L3927;
  goto ret0;

 L3927: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L3928;
  goto ret0;

 L3928: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[1]))
    goto L3929;
  goto ret0;

 L3929: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 5);
  if (GET_CODE (x1) == SET)
    goto L3930;
  goto ret0;

 L3930: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 187)
    goto L3931;
  goto ret0;

 L3931: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 366)
    goto L3932;
  goto ret0;

 L3932: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L3933;
  goto ret0;

 L3933: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[1])
      && 
#line 988 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP))
    {
      return 496;  /* mips_wrdsp */
    }
  goto ret0;
 ret0:
  return -1;
}

int
recog (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;
  recog_data.insn = NULL_RTX;

  switch (GET_CODE (x0))
    {
    case TRAP_IF:
      goto L4;
    case SET:
      goto L14;
    case PARALLEL:
      goto L4439;
    case UNSPEC_VOLATILE:
      goto L4442;
    case RETURN:
      goto L4445;
    case UNSPEC:
      goto L4446;
    case CALL:
      goto L2589;
    case PREFETCH:
      goto L2732;
    case CONST_INT:
      goto L4447;
    default:
     break;
   }
  goto ret0;

 L4: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    case SImode:
      goto L4453;
    case DImode:
      goto L4454;
    default:
      break;
    }
 L1: ATTRIBUTE_UNUSED_LABEL
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L2;
  goto ret0;

 L4453: ATTRIBUTE_UNUSED_LABEL
  if (trap_comparison_operator (x1, SImode))
    {
      operands[0] = x1;
      goto L5;
    }
  goto L1;

 L5: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L6;
    }
  goto L1;

 L6: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L7;
    }
  goto L1;

 L7: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 634 "../.././gcc/config/mips/mips.md"
(ISA_HAS_COND_TRAP))
    {
      return 1;  /* *conditional_trapsi */
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L4454: ATTRIBUTE_UNUSED_LABEL
  if (trap_comparison_operator (x1, DImode))
    {
      operands[0] = x1;
      goto L10;
    }
  goto L1;

 L10: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L11;
    }
  goto L1;

 L11: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L12;
    }
  goto L1;

 L12: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && (
#line 634 "../.././gcc/config/mips/mips.md"
(ISA_HAS_COND_TRAP) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 2;  /* *conditional_trapdi */
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L2: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 0;  /* trap */
    }
  goto ret0;

 L14: ATTRIBUTE_UNUSED_LABEL
  return recog_8 (x0, insn, pnum_clobbers);

 L4439: ATTRIBUTE_UNUSED_LABEL
  return recog_13 (x0, insn, pnum_clobbers);

 L4442: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x0, 0))
    {
    case 2:
      goto L5246;
    case 1:
      goto L5247;
    default:
      break;
    }
  goto ret0;

 L5246: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x0, 1))
    {
    case 22L:
      goto L1956;
    case 8L:
      goto L2861;
    default:
      break;
    }
  goto ret0;

 L1956: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  operands[0] = x1;
  goto L1957;

 L1957: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (register_operand (x1, VOIDmode))
    {
      operands[1] = x1;
      goto L1958;
    }
  goto ret0;

 L1958: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3936 "../.././gcc/config/mips/mips.md"
(TARGET_ABICALLS && TARGET_NEWABI))
    {
      return 246;  /* loadgp */
    }
  goto ret0;

 L2861: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (consttable_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L2862;
    }
  goto ret0;

 L2862: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[1] = x1;
      goto L2863;
    }
  goto ret0;

 L2863: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5369 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 375;  /* consttable_int */
    }
  goto ret0;

 L5247: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x0, 1))
    {
    case 4L:
      goto L1960;
    case 5L:
      goto L1962;
    case 9L:
      goto L2865;
    case 14L:
      goto L2868;
    default:
      break;
    }
  goto ret0;

 L1960: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == REG
      && XINT (x1, 0) == 28)
    {
      return 247;  /* loadgp_blockage */
    }
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 341;  /* blockage */
    }
  goto ret0;

 L1962: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      return 248;  /* cprestore */
    }
  goto ret0;

 L2865: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (consttable_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L2866;
    }
  goto ret0;

 L2866: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5380 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 376;  /* consttable_float */
    }
  goto ret0;

 L2868: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      return 377;  /* align */
    }
  goto ret0;

 L4445: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4902 "../.././gcc/config/mips/mips.md"
(mips_can_use_return_insn ()))
    {
      return 342;  /* return */
    }
  goto ret0;

 L4446: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x0, 0) == 1
      && XINT (x0, 1) == 7)
    goto L2561;
  goto ret0;

 L2561: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  switch (GET_MODE (x1))
    {
    case SImode:
      goto L5252;
    case DImode:
      goto L5253;
    default:
      break;
    }
  goto ret0;

 L5252: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L2562;
    }
  goto ret0;

 L2562: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4940 "../.././gcc/config/mips/mips.md"
(! TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 344;  /* eh_set_lr_si */
    }
  goto ret0;

 L5253: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L2571;
    }
  goto ret0;

 L2571: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4946 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 345;  /* eh_set_lr_di */
    }
  goto ret0;

 L2589: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == MEM)
    goto L2590;
  goto ret0;

 L2590: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (call_insn_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L2591;
    }
  goto ret0;

 L2591: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  operands[1] = x1;
  goto L2592;

 L2592: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5032 "../.././gcc/config/mips/mips.md"
(TARGET_SIBCALLS && SIBLING_CALL_P (insn)))
    {
      return 349;  /* sibcall_internal */
    }
 L2624: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 352;  /* call_internal */
    }
 L2638: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5143 "../.././gcc/config/mips/mips.md"
(TARGET_SPLIT_CALLS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 353;  /* call_split */
    }
  goto ret0;

 L2732: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  if (address_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L2733;
    }
 L2737: ATTRIBUTE_UNUSED_LABEL
  switch (GET_MODE (x1))
    {
    case SImode:
      goto L5254;
    case DImode:
      goto L5255;
    default:
      break;
    }
  goto ret0;

 L2733: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[1] = x1;
      goto L2734;
    }
  x1 = XEXP (x0, 0);
  goto L2737;

 L2734: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 2);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[2] = x1;
      goto L2735;
    }
  x1 = XEXP (x0, 0);
  goto L2737;

 L2735: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5261 "../.././gcc/config/mips/mips.md"
(ISA_HAS_PREFETCH && TARGET_EXPLICIT_RELOCS))
    {
      return 358;  /* prefetch */
    }
  x1 = XEXP (x0, 0);
  goto L2737;

 L5254: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == PLUS)
    goto L2738;
  goto ret0;

 L2738: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2739;
    }
  goto ret0;

 L2739: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2740;
    }
  goto ret0;

 L2740: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[2] = x1;
      goto L2741;
    }
  goto ret0;

 L2741: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 2);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[3] = x1;
      goto L2742;
    }
  goto ret0;

 L2742: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5273 "../.././gcc/config/mips/mips.md"
(ISA_HAS_PREFETCHX && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 359;  /* *prefetch_indexed_si */
    }
  goto ret0;

 L5255: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == PLUS)
    goto L2745;
  goto ret0;

 L2745: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L2746;
    }
  goto ret0;

 L2746: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2747;
    }
  goto ret0;

 L2747: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[2] = x1;
      goto L2748;
    }
  goto ret0;

 L2748: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 2);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[3] = x1;
      goto L2749;
    }
  goto ret0;

 L2749: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5273 "../.././gcc/config/mips/mips.md"
(ISA_HAS_PREFETCHX && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 360;  /* *prefetch_indexed_di */
    }
  goto ret0;

 L4447: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x0, 0) == XWINT (x0, 0))
    switch ((int) XWINT (x0, 0))
      {
      case 0L:
        goto L5256;
      case 1L:
        goto L5257;
      default:
        break;
      }
  goto ret0;

 L5256: ATTRIBUTE_UNUSED_LABEL
  return 361;  /* nop */

 L5257: ATTRIBUTE_UNUSED_LABEL
  return 362;  /* hazard_nop */
 ret0:
  return -1;
}

static rtx
split_1 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    case SImode:
      goto L5268;
    case DImode:
      goto L5263;
    case HImode:
      goto L5264;
    case QImode:
      goto L5265;
    case DFmode:
      goto L5267;
    default:
      break;
    }
 L4331: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L4332;
    }
  goto ret0;

 L5268: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 28)
    goto L4386;
 L5262: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L3978;
    }
  goto L4331;

 L4386: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == UNSPEC_VOLATILE
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 6)
    goto L4387;
  x1 = XEXP (x0, 0);
  goto L5262;

 L4387: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && (
#line 4962 "../.././gcc/config/mips/mips.md"
(TARGET_ABICALLS && TARGET_OLDABI) && 
#line 4964 "../.././gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_652 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L5262;

 L3978: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L5269;
 L4306: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L4307;
    }
  x1 = XEXP (x0, 0);
  goto L4331;

 L5269: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L3979;
    case SIGN_EXTEND:
      goto L4188;
    case HIGH:
      goto L4253;
    case LO_SUM:
      goto L4263;
    case MEM:
      goto L4300;
    case ASHIFT:
      goto L4340;
    case ASHIFTRT:
      goto L4346;
    case LSHIFTRT:
      goto L4352;
    case CONST:
    case LABEL_REF:
    case SYMBOL_REF:
      goto L5273;
    default:
      goto L4306;
   }
 L5273: ATTRIBUTE_UNUSED_LABEL
  if (global_got_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L4275;
    }
  goto L4306;

 L3979: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L3980;
 L3985: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3986;
    }
  goto L4306;

 L3980: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3981;
    }
  x2 = XEXP (x1, 0);
  goto L3985;

 L3981: ATTRIBUTE_UNUSED_LABEL
  if (
#line 731 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) > 0x7f
	&& INTVAL (operands[1]) <= 0x7f + 0x7f)
       || (INTVAL (operands[1]) < - 0x80
	   && INTVAL (operands[1]) >= - 0x80 - 0x80))))
    {
      return gen_split_505 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3985;

 L3986: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3987;
    }
  goto L4306;

 L3987: ATTRIBUTE_UNUSED_LABEL
  if (
#line 760 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && REG_P (operands[1])
   && M16_REG_P (REGNO (operands[1]))
   && REGNO (operands[0]) != REGNO (operands[1])
   && GET_CODE (operands[2]) == CONST_INT
   && ((INTVAL (operands[2]) > 0x7
	&& INTVAL (operands[2]) <= 0x7 + 0x7f)
       || (INTVAL (operands[2]) < - 0x8
	   && INTVAL (operands[2]) >= - 0x8 - 0x80))))
    {
      return gen_split_506 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L4306;

 L4188: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L5278;
    case QImode:
      goto L5279;
    default:
      break;
    }
  goto L4306;

 L5278: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L4189;
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L4221;
    }
  goto L4306;

 L4189: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L4190;
    }
  goto L4306;

 L4190: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2253 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16) && 
#line 2255 "../.././gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_539 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L4306;

 L4221: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2462 "../.././gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && 
#line 2466 "../.././gcc/config/mips/mips.md"
( reload_completed && REG_P (operands[1]))))
    {
      return gen_split_554 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L4306;

 L5279: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L4195;
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L4211;
    }
  goto L4306;

 L4195: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L4196;
    }
  goto L4306;

 L4196: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2268 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16) && 
#line 2270 "../.././gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_540 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L4306;

 L4211: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2462 "../.././gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && 
#line 2466 "../.././gcc/config/mips/mips.md"
( reload_completed && REG_P (operands[1]))))
    {
      return gen_split_552 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L4306;

 L4253: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L5282;
  goto L4306;

 L5282: ATTRIBUTE_UNUSED_LABEL
  if (global_got_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4254;
    }
 L5283: ATTRIBUTE_UNUSED_LABEL
  if (local_got_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4284;
    }
  goto L4306;

 L4254: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 3073 "../.././gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 3075 "../.././gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_569 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L5283;

 L4284: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 3120 "../.././gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 3122 "../.././gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_575 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L4306;

 L4263: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4264;
    }
  goto L4306;

 L4264: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (global_got_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L4265;
    }
  goto L4306;

 L4265: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 3089 "../.././gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 3091 "../.././gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_571 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L4306;

 L4300: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L4301;
  goto L4306;

 L4301: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L4302;
  goto L4306;

 L4302: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4303;
    }
  goto L4306;

 L4303: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3357 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x80)
       || (INTVAL (operands[1]) >= 32 * 4
	   && INTVAL (operands[1]) <= 31 * 4 + 0x7c)
       || (INTVAL (operands[1]) >= 0
	   && INTVAL (operands[1]) < 32 * 4
	   && (INTVAL (operands[1]) & 3) != 0))))
    {
      return gen_split_580 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L4306;

 L4340: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4341;
    }
  goto L4306;

 L4341: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L4342;
    }
  goto L4306;

 L4342: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4150 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && GET_CODE (operands[2]) == CONST_INT
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16))
    {
      return gen_split_604 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L4306;

 L4346: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4347;
    }
  goto L4306;

 L4347: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L4348;
    }
  goto L4306;

 L4348: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4150 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && GET_CODE (operands[2]) == CONST_INT
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16))
    {
      return gen_split_605 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L4306;

 L4352: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L5284;
  goto L4306;

 L5284: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4353;
    }
 L5285: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4377;
    }
  goto L4306;

 L4353: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L4354;
    }
  x2 = XEXP (x1, 0);
  goto L5285;

 L4354: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4150 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && GET_CODE (operands[2]) == CONST_INT
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16))
    {
      return gen_split_606 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L5285;

 L4377: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      return gen_split_610 (insn, operands);
    }
  goto L4306;

 L4275: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 3103 "../.././gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !TARGET_XGOT) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 3105 "../.././gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_573 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L4306;

 L4307: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3398 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && INTVAL (operands[1]) >= 0x100
   && INTVAL (operands[1]) <= 0xff + 0x7f))
    {
      return gen_split_581 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L4331;

 L5263: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L3990;
    }
 L5266: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L4324;
    }
  goto L4331;

 L3990: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode)
    goto L5286;
  x1 = XEXP (x0, 0);
  goto L5266;

 L5286: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L3991;
    case SIGN_EXTEND:
      goto L4003;
    case ZERO_EXTEND:
      goto L4200;
    case HIGH:
      goto L4235;
    case LO_SUM:
      goto L4269;
    case MEM:
      goto L4293;
    case ASHIFT:
      goto L4358;
    case ASHIFTRT:
      goto L4364;
    case LSHIFTRT:
      goto L4370;
    case CONST:
    case LABEL_REF:
    case SYMBOL_REF:
      goto L5291;
    default:
      x1 = XEXP (x0, 0);
      goto L5266;
   }
 L5291: ATTRIBUTE_UNUSED_LABEL
  if (global_got_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L4279;
    }
  x1 = XEXP (x0, 0);
  goto L5266;

 L3991: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L3992;
 L3997: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3998;
    }
  x1 = XEXP (x0, 0);
  goto L5266;

 L3992: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3993;
    }
  x2 = XEXP (x1, 0);
  goto L3997;

 L3993: ATTRIBUTE_UNUSED_LABEL
  if (
#line 792 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16 && TARGET_64BIT && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) > 0xf
	&& INTVAL (operands[1]) <= 0xf + 0xf)
       || (INTVAL (operands[1]) < - 0x10
	   && INTVAL (operands[1]) >= - 0x10 - 0x10))))
    {
      return gen_split_507 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3997;

 L3998: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3999;
    }
  x1 = XEXP (x0, 0);
  goto L5266;

 L3999: ATTRIBUTE_UNUSED_LABEL
  if (
#line 821 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16 && TARGET_64BIT && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && REG_P (operands[1])
   && M16_REG_P (REGNO (operands[1]))
   && REGNO (operands[0]) != REGNO (operands[1])
   && GET_CODE (operands[2]) == CONST_INT
   && ((INTVAL (operands[2]) > 0x7
	&& INTVAL (operands[2]) <= 0x7 + 0xf)
       || (INTVAL (operands[2]) < - 0x8
	   && INTVAL (operands[2]) >= - 0x8 - 0x10))))
    {
      return gen_split_508 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L5266;

 L4003: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L5296;
    case QImode:
      goto L5298;
    case HImode:
      goto L5299;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L5266;

 L5296: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L4004;
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4206;
    }
  x1 = XEXP (x0, 0);
  goto L5266;

 L4004: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4005;
    }
  x1 = XEXP (x0, 0);
  goto L5266;

 L4005: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4006;
    }
  x1 = XEXP (x0, 0);
  goto L5266;

 L4006: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 868 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16) && 
#line 870 "../.././gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_509 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L5266;

 L4206: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2430 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 2434 "../.././gcc/config/mips/mips.md"
( reload_completed && register_operand (operands[1], VOIDmode))))
    {
      return gen_split_547 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L5266;

 L5298: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L4216;
    }
  x1 = XEXP (x0, 0);
  goto L5266;

 L4216: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 2462 "../.././gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 2466 "../.././gcc/config/mips/mips.md"
( reload_completed && REG_P (operands[1]))))
    {
      return gen_split_553 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L5266;

 L5299: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L4226;
    }
  x1 = XEXP (x0, 0);
  goto L5266;

 L4226: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 2462 "../.././gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 2466 "../.././gcc/config/mips/mips.md"
( reload_completed && REG_P (operands[1]))))
    {
      return gen_split_555 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L5266;

 L4200: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4201;
    }
  x1 = XEXP (x0, 0);
  goto L5266;

 L4201: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2321 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 2325 "../.././gcc/config/mips/mips.md"
( reload_completed && REG_P (operands[1]))))
    {
      return gen_split_541 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L5266;

 L4235: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L5300;
  x1 = XEXP (x0, 0);
  goto L5266;

 L5300: ATTRIBUTE_UNUSED_LABEL
  if (general_symbolic_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L4236;
    }
 L5301: ATTRIBUTE_UNUSED_LABEL
  if (global_got_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L4259;
    }
 L5302: ATTRIBUTE_UNUSED_LABEL
  if (local_got_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L4289;
    }
  x1 = XEXP (x0, 0);
  goto L5266;

 L4236: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2999 "../.././gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS) && 
#line 3001 "../.././gcc/config/mips/mips.md"
( flow2_completed)))
    {
      return gen_split_566 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L5301;

 L4259: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 3073 "../.././gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 3075 "../.././gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_570 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L5302;

 L4289: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 3120 "../.././gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 3122 "../.././gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_576 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L5266;

 L4269: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L4270;
    }
  x1 = XEXP (x0, 0);
  goto L5266;

 L4270: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (global_got_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L4271;
    }
  x1 = XEXP (x0, 0);
  goto L5266;

 L4271: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 3089 "../.././gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 3091 "../.././gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_572 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L5266;

 L4293: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == PLUS)
    goto L4294;
  x1 = XEXP (x0, 0);
  goto L5266;

 L4294: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L4295;
  x1 = XEXP (x0, 0);
  goto L5266;

 L4295: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L4296;
    }
  x1 = XEXP (x0, 0);
  goto L5266;

 L4296: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3262 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16 && reload_completed
   && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x10)
       || (INTVAL (operands[1]) >= 32 * 8
	   && INTVAL (operands[1]) <= 31 * 8 + 0x8)
       || (INTVAL (operands[1]) >= 0
	   && INTVAL (operands[1]) < 32 * 8
	   && (INTVAL (operands[1]) & 7) != 0))))
    {
      return gen_split_578 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L5266;

 L4358: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L4359;
    }
  x1 = XEXP (x0, 0);
  goto L5266;

 L4359: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L4360;
    }
  x1 = XEXP (x0, 0);
  goto L5266;

 L4360: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4150 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && GET_CODE (operands[2]) == CONST_INT
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return gen_split_607 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L5266;

 L4364: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L4365;
    }
  x1 = XEXP (x0, 0);
  goto L5266;

 L4365: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L4366;
    }
  x1 = XEXP (x0, 0);
  goto L5266;

 L4366: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4150 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && GET_CODE (operands[2]) == CONST_INT
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return gen_split_608 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L5266;

 L4370: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L4371;
    }
  x1 = XEXP (x0, 0);
  goto L5266;

 L4371: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L4372;
    }
  x1 = XEXP (x0, 0);
  goto L5266;

 L4372: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4150 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && GET_CODE (operands[2]) == CONST_INT
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return gen_split_609 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L5266;

 L4279: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 3103 "../.././gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !TARGET_XGOT) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 3105 "../.././gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_574 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L5266;

 L4324: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L4325;
    }
  x1 = XEXP (x0, 0);
  goto L4331;

 L4325: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3785 "../.././gcc/config/mips/mips.md"
(reload_completed && !TARGET_64BIT
   && mips_split_64bit_move_p (operands[0], operands[1])))
    {
      return gen_split_590 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L4331;

 L5264: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L4229;
    }
  goto L4331;

 L4229: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode)
    goto L5303;
  x1 = XEXP (x0, 0);
  goto L4331;

 L5303: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case SIGN_EXTEND:
      goto L4230;
    case MEM:
      goto L4311;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L4331;

 L4230: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L4231;
    }
  x1 = XEXP (x0, 0);
  goto L4331;

 L4231: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2496 "../.././gcc/config/mips/mips.md"
(reload_completed))
    {
      return gen_split_556 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L4331;

 L4311: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L4312;
  x1 = XEXP (x0, 0);
  goto L4331;

 L4312: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L4313;
  x1 = XEXP (x0, 0);
  goto L4331;

 L4313: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4314;
    }
  x1 = XEXP (x0, 0);
  goto L4331;

 L4314: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3565 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x80)
       || (INTVAL (operands[1]) >= 32 * 2
	   && INTVAL (operands[1]) <= 31 * 2 + 0x7e)
       || (INTVAL (operands[1]) >= 0
	   && INTVAL (operands[1]) < 32 * 2
	   && (INTVAL (operands[1]) & 1) != 0))))
    {
      return gen_split_585 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L4331;

 L5265: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L4317;
    }
  goto L4331;

 L4317: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode
      && GET_CODE (x1) == MEM)
    goto L4318;
  x1 = XEXP (x0, 0);
  goto L4331;

 L4318: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L4319;
  x1 = XEXP (x0, 0);
  goto L4331;

 L4319: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L4320;
  x1 = XEXP (x0, 0);
  goto L4331;

 L4320: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4321;
    }
  x1 = XEXP (x0, 0);
  goto L4331;

 L4321: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3660 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x80)
       || (INTVAL (operands[1]) >= 32
	   && INTVAL (operands[1]) <= 31 + 0x7f))))
    {
      return gen_split_587 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L4331;

 L5267: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L4328;
    }
  goto L4331;

 L4328: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, DFmode))
    {
      operands[1] = x1;
      goto L4329;
    }
  x1 = XEXP (x0, 0);
  goto L4331;

 L4329: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3796 "../.././gcc/config/mips/mips.md"
(reload_completed && !TARGET_64BIT
   && mips_split_64bit_move_p (operands[0], operands[1])))
    {
      return gen_split_591 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L4331;

 L4332: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[1] = x1;
      goto L4333;
    }
  goto ret0;

 L4333: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3809 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && INTVAL (operands[1]) < 0))
    {
      return gen_split_592 (insn, operands);
    }
  goto ret0;
 ret0:
  return 0;
}

rtx
split_insns (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;
  recog_data.insn = NULL_RTX;

  switch (GET_CODE (x0))
    {
    case SET:
      goto L3977;
    case PARALLEL:
      goto L5258;
    case UNSPEC_VOLATILE:
      goto L5260;
    default:
     break;
   }
 L4419: ATTRIBUTE_UNUSED_LABEL
  if (small_data_pattern (x0, VOIDmode))
    {
      operands[0] = x0;
      goto L4420;
    }
 L4421: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x0) == SET)
    goto L4422;
  goto ret0;

 L3977: ATTRIBUTE_UNUSED_LABEL
  tem = split_1 (x0, insn);
  if (tem != 0)
    return tem;
  goto L4419;

 L5258: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x0, 0))
    {
    case 4:
      goto L4038;
    case 2:
      goto L4244;
    case 3:
      goto L4405;
    default:
      break;
    }
  goto L4419;

 L4038: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L4039;
  goto L4419;

 L4039: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L5305;
    case DImode:
      goto L5306;
    default:
      break;
    }
  goto L4419;

 L5305: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L4040;
    }
  goto L4419;

 L4040: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L5307;
  goto L4419;

 L5307: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L4041;
    case MINUS:
      goto L4071;
    default:
     break;
   }
  goto L4419;

 L4041: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L4042;
  goto L4419;

 L4042: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L4043;
    }
  goto L4419;

 L4043: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L4044;
    }
  goto L4419;

 L4044: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L4045;
    }
  goto L4419;

 L4045: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4046;
  goto L4419;

 L4046: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L4047;
    }
  goto L4419;

 L4047: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4048;
  goto L4419;

 L4048: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L4049;
    }
  goto L4419;

 L4049: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L4050;
  goto L4419;

 L4050: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[6] = x2;
      goto L4051;
    }
  goto L4419;

 L4051: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1180 "../.././gcc/config/mips/mips.md"
(reload_completed && !TARGET_DEBUG_D_MODE
   && GP_REG_P (true_regnum (operands[0]))
   && GP_REG_P (true_regnum (operands[3]))))
    {
      return gen_split_516 (insn, operands);
    }
 L4066: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1199 "../.././gcc/config/mips/mips.md"
(reload_completed && !TARGET_DEBUG_D_MODE
   && GP_REG_P (true_regnum (operands[0]))
   && true_regnum (operands[3]) == LO_REGNUM))
    {
      return gen_split_517 (insn, operands);
    }
  goto L4419;

 L4071: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4072;
    }
  goto L4419;

 L4072: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L4073;
  goto L4419;

 L4073: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L4074;
    }
  goto L4419;

 L4074: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L4075;
    }
  goto L4419;

 L4075: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4076;
  goto L4419;

 L4076: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L4077;
    }
  goto L4419;

 L4077: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4078;
  goto L4419;

 L4078: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L4079;
    }
  goto L4419;

 L4079: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L4080;
  goto L4419;

 L4080: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[6] = x2;
      goto L4081;
    }
  goto L4419;

 L4081: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1261 "../.././gcc/config/mips/mips.md"
(ISA_HAS_MACC && !ISA_HAS_MSAC) && 
#line 1263 "../.././gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_518 (insn, operands);
    }
 L4139: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1435 "../.././gcc/config/mips/mips.md"
(reload_completed && !TARGET_DEBUG_D_MODE
   && GP_REG_P (true_regnum (operands[0]))
   && GP_REG_P (true_regnum (operands[1]))))
    {
      return gen_split_522 (insn, operands);
    }
 L4154: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1454 "../.././gcc/config/mips/mips.md"
(reload_completed && !TARGET_DEBUG_D_MODE
   && GP_REG_P (true_regnum (operands[0]))
   && true_regnum (operands[1]) == LO_REGNUM))
    {
      return gen_split_523 (insn, operands);
    }
  goto L4419;

 L5306: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L4158;
    }
  goto L4419;

 L4158: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == MULT)
    goto L4159;
  goto L4419;

 L4159: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L5309;
  goto L4419;

 L5309: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case SIGN_EXTEND:
      goto L4160;
    case ZERO_EXTEND:
      goto L4175;
    default:
     break;
   }
  goto L4419;

 L4160: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L4161;
    }
  goto L4419;

 L4161: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L4162;
  goto L4419;

 L4162: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L4163;
    }
  goto L4419;

 L4163: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4164;
  goto L4419;

 L4164: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L4165;
    }
  goto L4419;

 L4165: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4166;
  goto L4419;

 L4166: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[4] = x2;
      goto L4167;
    }
  goto L4419;

 L4167: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L4168;
  goto L4419;

 L4168: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[5] = x2;
      goto L4169;
    }
  goto L4419;

 L4169: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1530 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000) && 
#line 1532 "../.././gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_526 (insn, operands);
    }
  goto L4419;

 L4175: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L4176;
    }
  goto L4419;

 L4176: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L4177;
  goto L4419;

 L4177: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L4178;
    }
  goto L4419;

 L4178: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4179;
  goto L4419;

 L4179: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L4180;
    }
  goto L4419;

 L4180: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4181;
  goto L4419;

 L4181: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[4] = x2;
      goto L4182;
    }
  goto L4419;

 L4182: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L4183;
  goto L4419;

 L4183: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[5] = x2;
      goto L4184;
    }
  goto L4419;

 L4184: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1530 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000) && 
#line 1532 "../.././gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_527 (insn, operands);
    }
  goto L4419;

 L4244: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L4245;
    case UNSPEC:
      goto L5311;
    case CALL:
      goto L4390;
    default:
     break;
   }
  goto L4419;

 L4245: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L4246;
    }
 L4397: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L4398;
    }
  goto L4419;

 L4246: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_symbolic_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L4247;
    }
  x2 = XEXP (x1, 0);
  goto L4397;

 L4247: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4248;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4397;

 L4248: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L4249;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4397;

 L4249: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3053 "../.././gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS && cse_not_expected) && 
#line 3055 "../.././gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_568 (insn, operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4397;

 L4398: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L4399;
  goto L4419;

 L4399: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L4400;
  goto L4419;

 L4400: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (call_insn_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L4401;
    }
  goto L4419;

 L4401: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L4402;

 L4402: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4403;
  goto L4419;

 L4403: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31
      && 
#line 5167 "../.././gcc/config/mips/mips.md"
(reload_completed && TARGET_SPLIT_CALLS && (operands[3] = insn)))
    {
      return gen_split_658 (insn, operands);
    }
  goto L4419;

 L5311: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 7)
    goto L4380;
  goto L4419;

 L4380: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L4381;
    }
  goto L4419;

 L4381: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4382;
  goto L4419;

 L4382: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L4383;
    }
  goto L4419;

 L4383: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4952 "../.././gcc/config/mips/mips.md"
(reload_completed && !TARGET_DEBUG_D_MODE))
    {
      return gen_split_651 (insn, operands);
    }
  goto L4419;

 L4390: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L4391;
  goto L4419;

 L4391: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (call_insn_operand (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L4392;
    }
  goto L4419;

 L4392: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  goto L4393;

 L4393: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4394;
  goto L4419;

 L4394: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31
      && 
#line 5127 "../.././gcc/config/mips/mips.md"
(reload_completed && TARGET_SPLIT_CALLS && (operands[2] = insn)))
    {
      return gen_split_656 (insn, operands);
    }
  goto L4419;

 L4405: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L4406;
  goto L4419;

 L4406: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L4407;
    }
  goto L4419;

 L4407: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L4408;
  goto L4419;

 L4408: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L4409;
  goto L4419;

 L4409: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (call_insn_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L4410;
    }
  goto L4419;

 L4410: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L4411;

 L4411: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4412;
  goto L4419;

 L4412: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L4413;
    }
  goto L4419;

 L4413: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L4414;
  goto L4419;

 L4414: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L4415;
  goto L4419;

 L4415: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L4416;
  goto L4419;

 L4416: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L4417;
  goto L4419;

 L4417: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4418;
  goto L4419;

 L4418: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31
      && 
#line 5200 "../.././gcc/config/mips/mips.md"
(reload_completed && TARGET_SPLIT_CALLS && (operands[4] = insn)))
    {
      return gen_split_659 (insn, operands);
    }
  goto L4419;

 L5260: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x0, 0) == 2
      && XINT (x0, 1) == 22)
    goto L4335;
  goto L4419;

 L4335: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  operands[0] = x1;
  goto L4336;

 L4336: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (register_operand (x1, VOIDmode))
    {
      operands[1] = x1;
      return gen_split_596 (insn, operands);
    }
  goto L4419;

 L4420: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5401 "../.././gcc/config/mips/mips.md"
(reload_completed))
    {
      return gen_split_665 (insn, operands);
    }
  goto L4421;

 L4422: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  if (register_operand (x1, CCV4mode))
    {
      operands[0] = x1;
      goto L4423;
    }
  goto ret0;

 L4423: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCV4mode)
    goto L5312;
  goto ret0;

 L5312: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC)
    goto L5314;
  goto ret0;

 L5314: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 5)
    goto L5316;
  goto ret0;

 L5316: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 201L:
      goto L4424;
    case 203L:
      goto L4433;
    default:
      break;
    }
  goto ret0;

 L4424: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L4425;
    }
  goto ret0;

 L4425: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L4426;
    }
  goto ret0;

 L4426: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, V2SFmode))
    {
      operands[3] = x2;
      goto L4427;
    }
  goto ret0;

 L4427: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 3);
  if (register_operand (x2, V2SFmode))
    {
      operands[4] = x2;
      goto L4428;
    }
  goto ret0;

 L4428: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 4);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[5] = x2;
      goto L4429;
    }
  goto ret0;

 L4429: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 307 "../.././gcc/config/mips/mips-ps-3d.md"
(TARGET_PAIRED_SINGLE_FLOAT) && 
#line 309 "../.././gcc/config/mips/mips-ps-3d.md"
( reload_completed)))
    {
      return gen_split_672 (insn, operands);
    }
  goto ret0;

 L4433: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L4434;
    }
  goto ret0;

 L4434: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L4435;
    }
  goto ret0;

 L4435: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, V2SFmode))
    {
      operands[3] = x2;
      goto L4436;
    }
  goto ret0;

 L4436: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 3);
  if (register_operand (x2, V2SFmode))
    {
      operands[4] = x2;
      goto L4437;
    }
  goto ret0;

 L4437: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 4);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[5] = x2;
      goto L4438;
    }
  goto ret0;

 L4438: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 336 "../.././gcc/config/mips/mips-ps-3d.md"
(TARGET_MIPS3D) && 
#line 338 "../.././gcc/config/mips/mips-ps-3d.md"
( reload_completed)))
    {
      return gen_split_673 (insn, operands);
    }
  goto ret0;
 ret0:
  return 0;
}

rtx
peephole2_insns (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *_pmatch_len ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;
  recog_data.insn = NULL_RTX;

  if (peep2_current_count >= 2)
    goto L4008;
 L4108: ATTRIBUTE_UNUSED_LABEL
  if (peep2_current_count >= 3)
    goto L4109;
 L4238: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x0) == SET)
    goto L4239;
  goto ret0;

 L4008: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x0))
    {
    case PARALLEL:
      goto L5318;
    case SET:
      goto L4098;
    default:
     break;
   }
  goto L4108;

 L5318: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x0, 0))
    {
    case 3:
      goto L4009;
    case 2:
      goto L4025;
    default:
      break;
    }
  goto L4108;

 L4009: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L4010;
  goto L4108;

 L4010: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L4011;
    }
  goto L4108;

 L4011: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L5320;
  goto L4108;

 L5320: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L4012;
  if (macc_msac_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4087;
    }
  goto L4108;

 L4012: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4013;
    }
  goto L4108;

 L4013: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4014;
    }
  goto L4108;

 L4014: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4015;
  goto L4108;

 L4015: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L4016;
    }
  goto L4108;

 L4016: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4017;
  goto L4108;

 L4017: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == SCRATCH)
    goto L4018;
  goto L4108;

 L4018: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L4019;
  goto L4108;

 L4019: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L4020;
    }
  goto L4108;

 L4020: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 26)
    goto L4021;
  goto L4108;

 L4021: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L4022;
  goto L4108;

 L4022: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 1075 "../.././gcc/config/mips/mips.md"
(GENERATE_MULT3_SI && peep2_reg_dead_p (2, operands[0])))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_514 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto L4108;

 L4087: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4088;
  goto L4108;

 L4088: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L4089;
    }
  goto L4108;

 L4089: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4090;
  goto L4108;

 L4090: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == SCRATCH)
    goto L4091;
  goto L4108;

 L4091: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L4092;
  goto L4108;

 L4092: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L4093;
    }
  goto L4108;

 L4093: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 26)
    goto L4094;
  goto L4108;

 L4094: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L4095;
  goto L4108;

 L4095: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_519 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto L4108;

 L4025: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L4026;
  goto L4108;

 L4026: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L4027;
    }
  goto L4108;

 L4027: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MULT)
    goto L4028;
  goto L4108;

 L4028: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4029;
    }
  goto L4108;

 L4029: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4030;
    }
  goto L4108;

 L4030: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4031;
  goto L4108;

 L4031: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L4032;
    }
  goto L4108;

 L4032: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L4033;
  goto L4108;

 L4033: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L4034;
    }
  goto L4108;

 L4034: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 26)
    goto L4035;
  goto L4108;

 L4035: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L4036;
  goto L4108;

 L4036: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 1122 "../.././gcc/config/mips/mips.md"
(ISA_HAS_MACC && !GENERATE_MULT3_SI))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_515 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto L4108;

 L4098: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  if (register_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L4099;
    }
  goto L4108;

 L4099: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, SImode))
    {
      operands[2] = x1;
      goto L4100;
    }
  goto L4108;

 L4100: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == PARALLEL
      && XVECLEN (x1, 0) == 3)
    goto L4101;
  goto L4108;

 L4101: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == SET)
    goto L4102;
  goto L4108;

 L4102: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L4103;
    }
  goto L4108;

 L4103: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (macc_msac_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L4104;
    }
  goto L4108;

 L4104: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L4105;
  goto L4108;

 L4105: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[5] = x3;
      goto L4106;
    }
  goto L4108;

 L4106: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x2) == CLOBBER)
    goto L4107;
  goto L4108;

 L4107: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1])
      && 
#line 1357 "../.././gcc/config/mips/mips.md"
(GENERATE_MULT3_SI
   && true_regnum (operands[1]) == LO_REGNUM
   && peep2_reg_dead_p (2, operands[1])
   && GP_REG_P (true_regnum (operands[3]))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_520 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto L4108;

 L4109: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x0) == SET)
    goto L4110;
  goto L4238;

 L4110: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  if (register_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L4111;
    }
  goto L4238;

 L4111: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, SImode))
    {
      operands[2] = x1;
      goto L4112;
    }
  goto L4238;

 L4112: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == PARALLEL
      && XVECLEN (x1, 0) == 3)
    goto L4113;
  goto L4238;

 L4113: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == SET)
    goto L4114;
  goto L4238;

 L4114: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4115;
  goto L4238;

 L4115: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (macc_msac_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L4116;
    }
  goto L4238;

 L4116: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L4117;
  goto L4238;

 L4117: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L4118;
    }
  goto L4238;

 L4118: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x2) == CLOBBER)
    goto L4119;
  goto L4238;

 L4119: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == SCRATCH)
    goto L4120;
  goto L4238;

 L4120: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (2);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L4121;
  goto L4238;

 L4121: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L4122;
    }
  goto L4238;

 L4122: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 26)
    goto L4123;
  goto L4238;

 L4123: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4124;
  goto L4238;

 L4124: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[4])
      && 
#line 1396 "../.././gcc/config/mips/mips.md"
(GENERATE_MULT3_SI && peep2_reg_dead_p (3, operands[1])))
    {
      *_pmatch_len = 2;
      tem = gen_peephole2_521 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto L4238;

 L4239: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  if (register_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L4240;
    }
  goto ret0;

 L4240: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == HIGH)
    goto L4241;
  goto ret0;

 L4241: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_symbolic_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L4242;
    }
  goto ret0;

 L4242: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (0);
  x1 = PATTERN (tem);
  if (
#line 3025 "../.././gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS))
    {
      *_pmatch_len = 0;
      tem = gen_peephole2_567 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto ret0;
 ret0:
  return 0;
}

