/* Generated automatically by the program `genconditions' from the target
   machine description file.  */

#include "bconfig.h"
#include "insn-constants.h"

/* Do not allow checking to confuse the issue.  */
#undef ENABLE_CHECKING
#undef ENABLE_TREE_CHECKING
#undef ENABLE_RTL_CHECKING
#undef ENABLE_RTL_FLAG_CHECKING
#undef ENABLE_GC_CHECKING
#undef ENABLE_GC_ALWAYS_COLLECT

#include "system.h"
/* If we don't have __builtin_constant_p, or it's not acceptable in array
   initializers, fall back to assuming that all conditions potentially
   vary at run time.  It works in 3.0.1 and later; 3.0 only when not
   optimizing.  */
#if GCC_VERSION < 3001
#include "dummy-conditions.c"
#else
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "tm_p.h"
#include "function.h"

/* Fake - insn-config.h doesn't exist yet.  */
#define MAX_RECOG_OPERANDS 10
#define MAX_DUP_OPERANDS 10
#define MAX_INSNS_PER_SPLIT 5

#include "regs.h"
#include "recog.h"
#include "real.h"
#include "output.h"
#include "flags.h"
#include "hard-reg-set.h"
#include "resource.h"
#include "toplev.h"
#include "reload.h"
#include "gensupport.h"

#define HAVE_eh_return 1
#include "except.h"

/* Dummy external declarations.  */
extern rtx insn;
extern rtx ins1;
extern rtx operands[];

/* This table lists each condition found in the machine description.
   Each condition is mapped to its truth value (0 or 1), or -1 if that
   cannot be calculated at compile time. */

const struct c_test insn_conditions[] = {
#line 3989 "../.././gcc/config/mips/mips.md"
  { "!TARGET_MIPS16 && !TARGET_MEMCPY",
    __builtin_constant_p 
#line 3989 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16 && !TARGET_MEMCPY)
    ? (int) 
#line 3989 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16 && !TARGET_MEMCPY)
    : -1 },
  { "((ISA_HAS_CONDMOVE) && (TARGET_HARD_FLOAT)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p ((
#line 5324 "../.././gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 410 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)) && 
#line 424 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) ((
#line 5324 "../.././gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 410 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)) && 
#line 424 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
#line 3200 "../.././gcc/config/mips/mips.md"
  { "!TARGET_64BIT && !TARGET_MIPS16\n\
   && (register_operand (operands[0], DImode)\n\
       || reg_or_0_operand (operands[1], DImode))",
    __builtin_constant_p 
#line 3200 "../.././gcc/config/mips/mips.md"
(!TARGET_64BIT && !TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || reg_or_0_operand (operands[1], DImode)))
    ? (int) 
#line 3200 "../.././gcc/config/mips/mips.md"
(!TARGET_64BIT && !TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || reg_or_0_operand (operands[1], DImode)))
    : -1 },
  { "(TARGET_FIX_R4000) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 1099 "../.././gcc/config/mips/mips.md"
(TARGET_FIX_R4000) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 1099 "../.././gcc/config/mips/mips.md"
(TARGET_FIX_R4000) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 3053 "../.././gcc/config/mips/mips.md"
  { "TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS && cse_not_expected",
    __builtin_constant_p 
#line 3053 "../.././gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS && cse_not_expected)
    ? (int) 
#line 3053 "../.././gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS && cse_not_expected)
    : -1 },
#line 821 "../.././gcc/config/mips/mips.md"
  { "TARGET_MIPS16 && TARGET_64BIT && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && REG_P (operands[0])\n\
   && M16_REG_P (REGNO (operands[0]))\n\
   && REG_P (operands[1])\n\
   && M16_REG_P (REGNO (operands[1]))\n\
   && REGNO (operands[0]) != REGNO (operands[1])\n\
   && GET_CODE (operands[2]) == CONST_INT\n\
   && ((INTVAL (operands[2]) > 0x7\n\
	&& INTVAL (operands[2]) <= 0x7 + 0xf)\n\
       || (INTVAL (operands[2]) < - 0x8\n\
	   && INTVAL (operands[2]) >= - 0x8 - 0x10))",
    __builtin_constant_p 
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
	   && INTVAL (operands[2]) >= - 0x8 - 0x10)))
    ? (int) 
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
	   && INTVAL (operands[2]) >= - 0x8 - 0x10)))
    : -1 },
#line 760 "../.././gcc/config/mips/mips.md"
  { "TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && REG_P (operands[0])\n\
   && M16_REG_P (REGNO (operands[0]))\n\
   && REG_P (operands[1])\n\
   && M16_REG_P (REGNO (operands[1]))\n\
   && REGNO (operands[0]) != REGNO (operands[1])\n\
   && GET_CODE (operands[2]) == CONST_INT\n\
   && ((INTVAL (operands[2]) > 0x7\n\
	&& INTVAL (operands[2]) <= 0x7 + 0x7f)\n\
       || (INTVAL (operands[2]) < - 0x8\n\
	   && INTVAL (operands[2]) >= - 0x8 - 0x80))",
    __builtin_constant_p 
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
	   && INTVAL (operands[2]) >= - 0x8 - 0x80)))
    ? (int) 
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
	   && INTVAL (operands[2]) >= - 0x8 - 0x80)))
    : -1 },
#line 1156 "../.././gcc/config/mips/mips.md"
  { "(TARGET_MIPS3900\n\
   || ISA_HAS_MADD_MSUB)\n\
   && !TARGET_MIPS16",
    __builtin_constant_p 
#line 1156 "../.././gcc/config/mips/mips.md"
((TARGET_MIPS3900
   || ISA_HAS_MADD_MSUB)
   && !TARGET_MIPS16)
    ? (int) 
#line 1156 "../.././gcc/config/mips/mips.md"
((TARGET_MIPS3900
   || ISA_HAS_MADD_MSUB)
   && !TARGET_MIPS16)
    : -1 },
#line 1199 "../.././gcc/config/mips/mips.md"
  { "reload_completed && !TARGET_DEBUG_D_MODE\n\
   && GP_REG_P (true_regnum (operands[0]))\n\
   && true_regnum (operands[3]) == LO_REGNUM",
    __builtin_constant_p 
#line 1199 "../.././gcc/config/mips/mips.md"
(reload_completed && !TARGET_DEBUG_D_MODE
   && GP_REG_P (true_regnum (operands[0]))
   && true_regnum (operands[3]) == LO_REGNUM)
    ? (int) 
#line 1199 "../.././gcc/config/mips/mips.md"
(reload_completed && !TARGET_DEBUG_D_MODE
   && GP_REG_P (true_regnum (operands[0]))
   && true_regnum (operands[3]) == LO_REGNUM)
    : -1 },
  { "(TARGET_EXPLICIT_RELOCS) && (Pmode == DImode)",
    __builtin_constant_p (
#line 3120 "../.././gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 3120 "../.././gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
  { "((ISA_HAS_CONDMOVE) && (TARGET_HARD_FLOAT)) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p ((
#line 5324 "../.././gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 410 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)) && 
#line 423 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) ((
#line 5324 "../.././gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 410 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)) && 
#line 423 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
  { "(!TARGET_FIX_R4000) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 1088 "../.././gcc/config/mips/mips.md"
(!TARGET_FIX_R4000) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 1088 "../.././gcc/config/mips/mips.md"
(!TARGET_FIX_R4000) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD\n\
   && !HONOR_SIGNED_ZEROS (DFmode)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 1799 "../.././gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (DFmode)) && 
#line 419 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 1799 "../.././gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (DFmode)) && 
#line 419 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
  { "(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && (Pmode == SImode)",
    __builtin_constant_p (
#line 3089 "../.././gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 3089 "../.././gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
#line 432 "../.././gcc/config/mips/mips-ps-3d.md"
  { "TARGET_MIPS3D",
    __builtin_constant_p 
#line 432 "../.././gcc/config/mips/mips-ps-3d.md"
(TARGET_MIPS3D)
    ? (int) 
#line 432 "../.././gcc/config/mips/mips-ps-3d.md"
(TARGET_MIPS3D)
    : -1 },
#line 5261 "../.././gcc/config/mips/mips.md"
  { "ISA_HAS_PREFETCH && TARGET_EXPLICIT_RELOCS",
    __builtin_constant_p 
#line 5261 "../.././gcc/config/mips/mips.md"
(ISA_HAS_PREFETCH && TARGET_EXPLICIT_RELOCS)
    ? (int) 
#line 5261 "../.././gcc/config/mips/mips.md"
(ISA_HAS_PREFETCH && TARGET_EXPLICIT_RELOCS)
    : -1 },
#line 3398 "../.././gcc/config/mips/mips.md"
  { "TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && REG_P (operands[0])\n\
   && M16_REG_P (REGNO (operands[0]))\n\
   && GET_CODE (operands[1]) == CONST_INT\n\
   && INTVAL (operands[1]) >= 0x100\n\
   && INTVAL (operands[1]) <= 0xff + 0x7f",
    __builtin_constant_p 
#line 3398 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && INTVAL (operands[1]) >= 0x100
   && INTVAL (operands[1]) <= 0xff + 0x7f)
    ? (int) 
#line 3398 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && INTVAL (operands[1]) >= 0x100
   && INTVAL (operands[1]) <= 0xff + 0x7f)
    : -1 },
#line 3318 "../.././gcc/config/mips/mips.md"
  { "!TARGET_MIPS16\n\
   && (register_operand (operands[0], SImode)\n\
       || reg_or_0_operand (operands[1], SImode))",
    __builtin_constant_p 
#line 3318 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], SImode)
       || reg_or_0_operand (operands[1], SImode)))
    ? (int) 
#line 3318 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], SImode)
       || reg_or_0_operand (operands[1], SImode)))
    : -1 },
  { "(TARGET_EXPLICIT_RELOCS) && (Pmode == SImode)",
    __builtin_constant_p (
#line 3120 "../.././gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 3120 "../.././gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
#line 1721 "../.././gcc/config/mips/mips.md"
  { "(TARGET_MAD || ISA_HAS_MACC)\n\
   && !TARGET_64BIT",
    __builtin_constant_p 
#line 1721 "../.././gcc/config/mips/mips.md"
((TARGET_MAD || ISA_HAS_MACC)
   && !TARGET_64BIT)
    ? (int) 
#line 1721 "../.././gcc/config/mips/mips.md"
((TARGET_MAD || ISA_HAS_MACC)
   && !TARGET_64BIT)
    : -1 },
  { "(TARGET_64BIT) && ( reload_completed && register_operand (operands[1], VOIDmode))",
    __builtin_constant_p (
#line 2430 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 2434 "../.././gcc/config/mips/mips.md"
( reload_completed && register_operand (operands[1], VOIDmode)))
    ? (int) (
#line 2430 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 2434 "../.././gcc/config/mips/mips.md"
( reload_completed && register_operand (operands[1], VOIDmode)))
    : -1 },
#line 5401 "../.././gcc/config/mips/mips.md"
  { "reload_completed",
    __builtin_constant_p 
#line 5401 "../.././gcc/config/mips/mips.md"
(reload_completed)
    ? (int) 
#line 5401 "../.././gcc/config/mips/mips.md"
(reload_completed)
    : -1 },
#line 1710 "../.././gcc/config/mips/mips.md"
  { "TARGET_MAD",
    __builtin_constant_p 
#line 1710 "../.././gcc/config/mips/mips.md"
(TARGET_MAD)
    ? (int) 
#line 1710 "../.././gcc/config/mips/mips.md"
(TARGET_MAD)
    : -1 },
#line 1676 "../.././gcc/config/mips/mips.md"
  { "ISA_HAS_MULHI",
    __builtin_constant_p 
#line 1676 "../.././gcc/config/mips/mips.md"
(ISA_HAS_MULHI)
    ? (int) 
#line 1676 "../.././gcc/config/mips/mips.md"
(ISA_HAS_MULHI)
    : -1 },
#line 2922 "../.././gcc/config/mips/mips.md"
  { "mips_use_ins_ext_p (operands[0], operands[1], operands[2])",
    __builtin_constant_p 
#line 2922 "../.././gcc/config/mips/mips.md"
(mips_use_ins_ext_p (operands[0], operands[1], operands[2]))
    ? (int) 
#line 2922 "../.././gcc/config/mips/mips.md"
(mips_use_ins_ext_p (operands[0], operands[1], operands[2]))
    : -1 },
#line 4129 "../.././gcc/config/mips/mips.md"
  { "TARGET_64BIT && TARGET_MIPS16",
    __builtin_constant_p 
#line 4129 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16)
    ? (int) 
#line 4129 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16)
    : -1 },
#line 3833 "../.././gcc/config/mips/mips.md"
  { "TARGET_PAIRED_SINGLE_FLOAT\n\
   && TARGET_64BIT\n\
   && (register_operand (operands[0], V2SFmode)\n\
       || reg_or_0_operand (operands[1], V2SFmode))",
    __builtin_constant_p 
#line 3833 "../.././gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT
   && TARGET_64BIT
   && (register_operand (operands[0], V2SFmode)
       || reg_or_0_operand (operands[1], V2SFmode)))
    ? (int) 
#line 3833 "../.././gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT
   && TARGET_64BIT
   && (register_operand (operands[0], V2SFmode)
       || reg_or_0_operand (operands[1], V2SFmode)))
    : -1 },
#line 5067 "../.././gcc/config/mips/mips.md"
  { "TARGET_SIBCALLS && SIBLING_CALL_P (insn)",
    __builtin_constant_p 
#line 5067 "../.././gcc/config/mips/mips.md"
(TARGET_SIBCALLS && SIBLING_CALL_P (insn))
    ? (int) 
#line 5067 "../.././gcc/config/mips/mips.md"
(TARGET_SIBCALLS && SIBLING_CALL_P (insn))
    : -1 },
#line 406 "../.././gcc/config/mips/mips.md"
  { "Pmode == DImode",
    __builtin_constant_p 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == DImode)
    ? (int) 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == DImode)
    : -1 },
  { "(TARGET_SB1 && flag_unsafe_math_optimizations) && (TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p (
#line 1947 "../.././gcc/config/mips/mips.md"
(TARGET_SB1 && flag_unsafe_math_optimizations) && 
#line 420 "../.././gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) (
#line 1947 "../.././gcc/config/mips/mips.md"
(TARGET_SB1 && flag_unsafe_math_optimizations) && 
#line 420 "../.././gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
  { "(TARGET_4300_MUL_FIX) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 945 "../.././gcc/config/mips/mips.md"
(TARGET_4300_MUL_FIX) && 
#line 424 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 945 "../.././gcc/config/mips/mips.md"
(TARGET_4300_MUL_FIX) && 
#line 424 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
#line 1054 "../.././gcc/config/mips/mips-dsp.md"
  { "TARGET_DSP",
    __builtin_constant_p 
#line 1054 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP)
    ? (int) 
#line 1054 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP)
    : -1 },
#line 1580 "../.././gcc/config/mips/mips.md"
  { "TARGET_64BIT && !TARGET_FIX_R4000",
    __builtin_constant_p 
#line 1580 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000)
    ? (int) 
#line 1580 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000)
    : -1 },
#line 4902 "../.././gcc/config/mips/mips.md"
  { "mips_can_use_return_insn ()",
    __builtin_constant_p 
#line 4902 "../.././gcc/config/mips/mips.md"
(mips_can_use_return_insn ())
    ? (int) 
#line 4902 "../.././gcc/config/mips/mips.md"
(mips_can_use_return_insn ())
    : -1 },
#line 222 "../.././gcc/config/mips/mips-ps-3d.md"
  { "TARGET_PAIRED_SINGLE_FLOAT",
    __builtin_constant_p 
#line 222 "../.././gcc/config/mips/mips-ps-3d.md"
(TARGET_PAIRED_SINGLE_FLOAT)
    ? (int) 
#line 222 "../.././gcc/config/mips/mips-ps-3d.md"
(TARGET_PAIRED_SINGLE_FLOAT)
    : -1 },
#line 3329 "../.././gcc/config/mips/mips.md"
  { "TARGET_MIPS16\n\
   && (register_operand (operands[0], SImode)\n\
       || register_operand (operands[1], SImode))",
    __builtin_constant_p 
#line 3329 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode)))
    ? (int) 
#line 3329 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode)))
    : -1 },
  { "(ISA_HAS_CLZ_CLO) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 1990 "../.././gcc/config/mips/mips.md"
(ISA_HAS_CLZ_CLO) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 1990 "../.././gcc/config/mips/mips.md"
(ISA_HAS_CLZ_CLO) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(!TARGET_FIX_VR4120) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 1881 "../.././gcc/config/mips/mips.md"
(!TARGET_FIX_VR4120) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 1881 "../.././gcc/config/mips/mips.md"
(!TARGET_FIX_VR4120) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 1695 "../.././gcc/config/mips/mips.md"
  { "TARGET_64BIT && !TARGET_FIX_R4000\n\
   && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)",
    __builtin_constant_p 
#line 1695 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000
   && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120))
    ? (int) 
#line 1695 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000
   && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120))
    : -1 },
#line 4952 "../.././gcc/config/mips/mips.md"
  { "reload_completed && !TARGET_DEBUG_D_MODE",
    __builtin_constant_p 
#line 4952 "../.././gcc/config/mips/mips.md"
(reload_completed && !TARGET_DEBUG_D_MODE)
    ? (int) 
#line 4952 "../.././gcc/config/mips/mips.md"
(reload_completed && !TARGET_DEBUG_D_MODE)
    : -1 },
  { "(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && GET_CODE (operands[2]) == CONST_INT\n\
   && INTVAL (operands[2]) > 8\n\
   && INTVAL (operands[2]) <= 16) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 4150 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && GET_CODE (operands[2]) == CONST_INT
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 4150 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && GET_CODE (operands[2]) == CONST_INT
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 2545 "../.././gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !ISA_HAS_TRUNC_W",
    __builtin_constant_p 
#line 2545 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !ISA_HAS_TRUNC_W)
    ? (int) 
#line 2545 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !ISA_HAS_TRUNC_W)
    : -1 },
  { "(TARGET_64BIT && !TARGET_MIPS16) && ( reload_completed)",
    __builtin_constant_p (
#line 2268 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16) && 
#line 2270 "../.././gcc/config/mips/mips.md"
( reload_completed))
    ? (int) (
#line 2268 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16) && 
#line 2270 "../.././gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
#line 2583 "../.././gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT && !ISA_HAS_TRUNC_W",
    __builtin_constant_p 
#line 2583 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && !ISA_HAS_TRUNC_W)
    ? (int) 
#line 2583 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && !ISA_HAS_TRUNC_W)
    : -1 },
#line 5043 "../.././gcc/config/mips/mips.md"
  { "TARGET_SIBCALLS",
    __builtin_constant_p 
#line 5043 "../.././gcc/config/mips/mips.md"
(TARGET_SIBCALLS)
    ? (int) 
#line 5043 "../.././gcc/config/mips/mips.md"
(TARGET_SIBCALLS)
    : -1 },
  { "(ISA_HAS_MACCHI) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 3874 "../.././gcc/config/mips/mips.md"
(ISA_HAS_MACCHI) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 3874 "../.././gcc/config/mips/mips.md"
(ISA_HAS_MACCHI) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD\n\
   && HONOR_SIGNED_ZEROS (V2SFmode)) && (TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p (
#line 1787 "../.././gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (V2SFmode)) && 
#line 420 "../.././gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) (
#line 1787 "../.././gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (V2SFmode)) && 
#line 420 "../.././gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
#line 5339 "../.././gcc/config/mips/mips.md"
  { "ISA_HAS_CONDMOVE",
    __builtin_constant_p 
#line 5339 "../.././gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE)
    ? (int) 
#line 5339 "../.././gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE)
    : -1 },
  { "((TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && (Pmode == DImode)) && ( reload_completed)",
    __builtin_constant_p ((
#line 3089 "../.././gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 3091 "../.././gcc/config/mips/mips.md"
( reload_completed))
    ? (int) ((
#line 3089 "../.././gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 3091 "../.././gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
#line 1075 "../.././gcc/config/mips/mips.md"
  { "GENERATE_MULT3_SI && peep2_reg_dead_p (2, operands[0])",
    __builtin_constant_p 
#line 1075 "../.././gcc/config/mips/mips.md"
(GENERATE_MULT3_SI && peep2_reg_dead_p (2, operands[0]))
    ? (int) 
#line 1075 "../.././gcc/config/mips/mips.md"
(GENERATE_MULT3_SI && peep2_reg_dead_p (2, operands[0]))
    : -1 },
#line 4054 "../.././gcc/config/mips/mips.md"
  { "TARGET_64BIT && !TARGET_MIPS16",
    __builtin_constant_p 
#line 4054 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16)
    ? (int) 
#line 4054 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16)
    : -1 },
#line 3809 "../.././gcc/config/mips/mips.md"
  { "TARGET_MIPS16 && reload_completed && INTVAL (operands[1]) < 0",
    __builtin_constant_p 
#line 3809 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && INTVAL (operands[1]) < 0)
    ? (int) 
#line 3809 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && INTVAL (operands[1]) < 0)
    : -1 },
#line 5380 "../.././gcc/config/mips/mips.md"
  { "TARGET_MIPS16",
    __builtin_constant_p 
#line 5380 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16)
    ? (int) 
#line 5380 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16)
    : -1 },
#line 1517 "../.././gcc/config/mips/mips.md"
  { "!TARGET_64BIT && TARGET_FIX_R4000",
    __builtin_constant_p 
#line 1517 "../.././gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_FIX_R4000)
    ? (int) 
#line 1517 "../.././gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_FIX_R4000)
    : -1 },
#line 1990 "../.././gcc/config/mips/mips.md"
  { "ISA_HAS_CLZ_CLO",
    __builtin_constant_p 
#line 1990 "../.././gcc/config/mips/mips.md"
(ISA_HAS_CLZ_CLO)
    ? (int) 
#line 1990 "../.././gcc/config/mips/mips.md"
(ISA_HAS_CLZ_CLO)
    : -1 },
#line 3696 "../.././gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT\n\
   && (register_operand (operands[0], SFmode)\n\
       || reg_or_0_operand (operands[1], SFmode))",
    __builtin_constant_p 
#line 3696 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT
   && (register_operand (operands[0], SFmode)
       || reg_or_0_operand (operands[1], SFmode)))
    ? (int) 
#line 3696 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT
   && (register_operand (operands[0], SFmode)
       || reg_or_0_operand (operands[1], SFmode)))
    : -1 },
#line 1289 "../.././gcc/config/mips/mips.md"
  { "ISA_HAS_MACC && reload_completed",
    __builtin_constant_p 
#line 1289 "../.././gcc/config/mips/mips.md"
(ISA_HAS_MACC && reload_completed)
    ? (int) 
#line 1289 "../.././gcc/config/mips/mips.md"
(ISA_HAS_MACC && reload_completed)
    : -1 },
  { "(TARGET_MIPS16) && (Pmode == SImode)",
    __builtin_constant_p (
#line 3164 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 3164 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
  { "(TARGET_MIPS16) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 4666 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 4666 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && ( reload_completed && REG_P (operands[1]))",
    __builtin_constant_p (
#line 2462 "../.././gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && 
#line 2466 "../.././gcc/config/mips/mips.md"
( reload_completed && REG_P (operands[1])))
    ? (int) (
#line 2462 "../.././gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && 
#line 2466 "../.././gcc/config/mips/mips.md"
( reload_completed && REG_P (operands[1])))
    : -1 },
  { "(TARGET_64BIT && TARGET_MIPS16) && ( reload_completed)",
    __builtin_constant_p (
#line 868 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16) && 
#line 870 "../.././gcc/config/mips/mips.md"
( reload_completed))
    ? (int) (
#line 868 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16) && 
#line 870 "../.././gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
#line 1695 "../.././gcc/config/mips/mips.md"
  { "TARGET_64BIT && !TARGET_FIX_R4000\n\
   && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)",
    __builtin_constant_p 
#line 1695 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000
   && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120))
    ? (int) 
#line 1695 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000
   && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120))
    : -1 },
#line 3796 "../.././gcc/config/mips/mips.md"
  { "reload_completed && !TARGET_64BIT\n\
   && mips_split_64bit_move_p (operands[0], operands[1])",
    __builtin_constant_p 
#line 3796 "../.././gcc/config/mips/mips.md"
(reload_completed && !TARGET_64BIT
   && mips_split_64bit_move_p (operands[0], operands[1]))
    ? (int) 
#line 3796 "../.././gcc/config/mips/mips.md"
(reload_completed && !TARGET_64BIT
   && mips_split_64bit_move_p (operands[0], operands[1]))
    : -1 },
  { "(TARGET_64BIT && !TARGET_FIX_R4000) && ( reload_completed)",
    __builtin_constant_p (
#line 1530 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000) && 
#line 1532 "../.././gcc/config/mips/mips.md"
( reload_completed))
    ? (int) (
#line 1530 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000) && 
#line 1532 "../.././gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
#line 3763 "../.././gcc/config/mips/mips.md"
  { "(TARGET_SOFT_FLOAT || TARGET_SINGLE_FLOAT) && !TARGET_MIPS16\n\
   && (register_operand (operands[0], DFmode)\n\
       || reg_or_0_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 3763 "../.././gcc/config/mips/mips.md"
((TARGET_SOFT_FLOAT || TARGET_SINGLE_FLOAT) && !TARGET_MIPS16
   && (register_operand (operands[0], DFmode)
       || reg_or_0_operand (operands[1], DFmode)))
    ? (int) 
#line 3763 "../.././gcc/config/mips/mips.md"
((TARGET_SOFT_FLOAT || TARGET_SINGLE_FLOAT) && !TARGET_MIPS16
   && (register_operand (operands[0], DFmode)
       || reg_or_0_operand (operands[1], DFmode)))
    : -1 },
  { "(ISA_HAS_MACC && !ISA_HAS_MSAC) && ( reload_completed)",
    __builtin_constant_p (
#line 1261 "../.././gcc/config/mips/mips.md"
(ISA_HAS_MACC && !ISA_HAS_MSAC) && 
#line 1263 "../.././gcc/config/mips/mips.md"
( reload_completed))
    ? (int) (
#line 1261 "../.././gcc/config/mips/mips.md"
(ISA_HAS_MACC && !ISA_HAS_MSAC) && 
#line 1263 "../.././gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
  { "(!TARGET_MIPS16) && (Pmode == SImode)",
    __builtin_constant_p (
#line 3155 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 3155 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
  { "(TARGET_ABICALLS) && (Pmode == SImode)",
    __builtin_constant_p (
#line 5000 "../.././gcc/config/mips/mips.md"
(TARGET_ABICALLS) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 5000 "../.././gcc/config/mips/mips.md"
(TARGET_ABICALLS) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
#line 4150 "../.././gcc/config/mips/mips.md"
  { "TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && GET_CODE (operands[2]) == CONST_INT\n\
   && INTVAL (operands[2]) > 8\n\
   && INTVAL (operands[2]) <= 16",
    __builtin_constant_p 
#line 4150 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && GET_CODE (operands[2]) == CONST_INT
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16)
    ? (int) 
#line 4150 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && GET_CODE (operands[2]) == CONST_INT
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16)
    : -1 },
  { "(ISA_HAS_FP4 && flag_unsafe_math_optimizations) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 1947 "../.././gcc/config/mips/mips.md"
(ISA_HAS_FP4 && flag_unsafe_math_optimizations) && 
#line 418 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 1947 "../.././gcc/config/mips/mips.md"
(ISA_HAS_FP4 && flag_unsafe_math_optimizations) && 
#line 418 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
  { "(!TARGET_MIPS16) && (Pmode == DImode)",
    __builtin_constant_p (
#line 3155 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 3155 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
  { "((ISA_HAS_CONDMOVE) && (TARGET_64BIT)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p ((
#line 5324 "../.././gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 410 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 424 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) ((
#line 5324 "../.././gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 410 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 424 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
#line 423 "../.././gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT",
    __builtin_constant_p 
#line 423 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)
    ? (int) 
#line 423 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)
    : -1 },
  { "(ISA_HAS_SEB_SEH) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 2482 "../.././gcc/config/mips/mips.md"
(ISA_HAS_SEB_SEH) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 2482 "../.././gcc/config/mips/mips.md"
(ISA_HAS_SEB_SEH) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 966 "../.././gcc/config/mips/mips-dsp.md"
  { "TARGET_DSP && !TARGET_64BIT",
    __builtin_constant_p 
#line 966 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP && !TARGET_64BIT)
    ? (int) 
#line 966 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP && !TARGET_64BIT)
    : -1 },
#line 3262 "../.././gcc/config/mips/mips.md"
  { "TARGET_64BIT && TARGET_MIPS16 && reload_completed\n\
   && !TARGET_DEBUG_D_MODE\n\
   && REG_P (operands[0])\n\
   && M16_REG_P (REGNO (operands[0]))\n\
   && GET_CODE (operands[1]) == CONST_INT\n\
   && ((INTVAL (operands[1]) < 0\n\
	&& INTVAL (operands[1]) >= -0x10)\n\
       || (INTVAL (operands[1]) >= 32 * 8\n\
	   && INTVAL (operands[1]) <= 31 * 8 + 0x8)\n\
       || (INTVAL (operands[1]) >= 0\n\
	   && INTVAL (operands[1]) < 32 * 8\n\
	   && (INTVAL (operands[1]) & 7) != 0))",
    __builtin_constant_p 
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
	   && (INTVAL (operands[1]) & 7) != 0)))
    ? (int) 
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
	   && (INTVAL (operands[1]) & 7) != 0)))
    : -1 },
  { "((ISA_HAS_FP4) && (Pmode == DImode)) && (TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p ((
#line 3487 "../.././gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 420 "../.././gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) ((
#line 3487 "../.././gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 420 "../.././gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
#line 3774 "../.././gcc/config/mips/mips.md"
  { "TARGET_MIPS16\n\
   && (register_operand (operands[0], DFmode)\n\
       || register_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 3774 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)))
    ? (int) 
#line 3774 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)))
    : -1 },
#line 3233 "../.././gcc/config/mips/mips.md"
  { "TARGET_64BIT && TARGET_MIPS16\n\
   && (register_operand (operands[0], DImode)\n\
       || register_operand (operands[1], DImode))",
    __builtin_constant_p 
#line 3233 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    ? (int) 
#line 3233 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    : -1 },
#line 2794 "../.././gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT && TARGET_64BIT && TARGET_DOUBLE_FLOAT",
    __builtin_constant_p 
#line 2794 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_64BIT && TARGET_DOUBLE_FLOAT)
    ? (int) 
#line 2794 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_64BIT && TARGET_DOUBLE_FLOAT)
    : -1 },
  { "(TARGET_PAIRED_SINGLE_FLOAT) && ( reload_completed)",
    __builtin_constant_p (
#line 307 "../.././gcc/config/mips/mips-ps-3d.md"
(TARGET_PAIRED_SINGLE_FLOAT) && 
#line 309 "../.././gcc/config/mips/mips-ps-3d.md"
( reload_completed))
    ? (int) (
#line 307 "../.././gcc/config/mips/mips-ps-3d.md"
(TARGET_PAIRED_SINGLE_FLOAT) && 
#line 309 "../.././gcc/config/mips/mips-ps-3d.md"
( reload_completed))
    : -1 },
#line 3455 "../.././gcc/config/mips/mips.md"
  { "ISA_HAS_8CC && TARGET_HARD_FLOAT",
    __builtin_constant_p 
#line 3455 "../.././gcc/config/mips/mips.md"
(ISA_HAS_8CC && TARGET_HARD_FLOAT)
    ? (int) 
#line 3455 "../.././gcc/config/mips/mips.md"
(ISA_HAS_8CC && TARGET_HARD_FLOAT)
    : -1 },
  { "(TARGET_PAIRED_SINGLE_FLOAT) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 29 "../.././gcc/config/mips/mips-ps-3d.md"
(TARGET_PAIRED_SINGLE_FLOAT) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 29 "../.././gcc/config/mips/mips-ps-3d.md"
(TARGET_PAIRED_SINGLE_FLOAT) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 3741 "../.././gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && TARGET_64BIT\n\
   && (register_operand (operands[0], DFmode)\n\
       || reg_or_0_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 3741 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && TARGET_64BIT
   && (register_operand (operands[0], DFmode)
       || reg_or_0_operand (operands[1], DFmode)))
    ? (int) 
#line 3741 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && TARGET_64BIT
   && (register_operand (operands[0], DFmode)
       || reg_or_0_operand (operands[1], DFmode)))
    : -1 },
  { "(ISA_HAS_FP4 && TARGET_FUSED_MADD) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 1752 "../.././gcc/config/mips/mips.md"
(ISA_HAS_FP4 && TARGET_FUSED_MADD) && 
#line 419 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 1752 "../.././gcc/config/mips/mips.md"
(ISA_HAS_FP4 && TARGET_FUSED_MADD) && 
#line 419 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
#line 402 "../.././gcc/config/mips/mips.md"
  { "TARGET_64BIT",
    __builtin_constant_p 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)
    ? (int) 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)
    : -1 },
  { "(TARGET_EXPLICIT_RELOCS && !TARGET_XGOT) && (Pmode == SImode)",
    __builtin_constant_p (
#line 3103 "../.././gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !TARGET_XGOT) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 3103 "../.././gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !TARGET_XGOT) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
#line 2955 "../.././gcc/config/mips/mips.md"
  { "!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[1])",
    __builtin_constant_p 
#line 2955 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[1]))
    ? (int) 
#line 2955 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[1]))
    : -1 },
  { "(GENERATE_MIPS16E) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 2451 "../.././gcc/config/mips/mips.md"
(GENERATE_MIPS16E) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 2451 "../.././gcc/config/mips/mips.md"
(GENERATE_MIPS16E) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "((ISA_HAS_FP4) && (Pmode == DImode)) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p ((
#line 3487 "../.././gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 418 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) ((
#line 3487 "../.././gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 418 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
#line 2482 "../.././gcc/config/mips/mips.md"
  { "ISA_HAS_SEB_SEH",
    __builtin_constant_p 
#line 2482 "../.././gcc/config/mips/mips.md"
(ISA_HAS_SEB_SEH)
    ? (int) 
#line 2482 "../.././gcc/config/mips/mips.md"
(ISA_HAS_SEB_SEH)
    : -1 },
  { "(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && (Pmode == DImode)",
    __builtin_constant_p (
#line 3089 "../.././gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 3089 "../.././gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
  { "(ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD\n\
   && !HONOR_SIGNED_ZEROS (SFmode)) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 1799 "../.././gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (SFmode)) && 
#line 418 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 1799 "../.././gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (SFmode)) && 
#line 418 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
#line 1454 "../.././gcc/config/mips/mips.md"
  { "reload_completed && !TARGET_DEBUG_D_MODE\n\
   && GP_REG_P (true_regnum (operands[0]))\n\
   && true_regnum (operands[1]) == LO_REGNUM",
    __builtin_constant_p 
#line 1454 "../.././gcc/config/mips/mips.md"
(reload_completed && !TARGET_DEBUG_D_MODE
   && GP_REG_P (true_regnum (operands[0]))
   && true_regnum (operands[1]) == LO_REGNUM)
    ? (int) 
#line 1454 "../.././gcc/config/mips/mips.md"
(reload_completed && !TARGET_DEBUG_D_MODE
   && GP_REG_P (true_regnum (operands[0]))
   && true_regnum (operands[1]) == LO_REGNUM)
    : -1 },
  { "(!TARGET_4300_MUL_FIX) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 932 "../.././gcc/config/mips/mips.md"
(!TARGET_4300_MUL_FIX) && 
#line 424 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 932 "../.././gcc/config/mips/mips.md"
(!TARGET_4300_MUL_FIX) && 
#line 424 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
  { "(ISA_HAS_FP4 && TARGET_FUSED_MADD) && (TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p (
#line 1752 "../.././gcc/config/mips/mips.md"
(ISA_HAS_FP4 && TARGET_FUSED_MADD) && 
#line 420 "../.././gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) (
#line 1752 "../.././gcc/config/mips/mips.md"
(ISA_HAS_FP4 && TARGET_FUSED_MADD) && 
#line 420 "../.././gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
#line 3637 "../.././gcc/config/mips/mips.md"
  { "TARGET_MIPS16\n\
   && (register_operand (operands[0], QImode)\n\
       || register_operand (operands[1], QImode))",
    __builtin_constant_p 
#line 3637 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode)))
    ? (int) 
#line 3637 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode)))
    : -1 },
  { "(!ISA_HAS_MACCHI) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 3864 "../.././gcc/config/mips/mips.md"
(!ISA_HAS_MACCHI) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 3864 "../.././gcc/config/mips/mips.md"
(!ISA_HAS_MACCHI) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(TARGET_MIPS3D) && ( reload_completed)",
    __builtin_constant_p (
#line 336 "../.././gcc/config/mips/mips-ps-3d.md"
(TARGET_MIPS3D) && 
#line 338 "../.././gcc/config/mips/mips-ps-3d.md"
( reload_completed))
    ? (int) (
#line 336 "../.././gcc/config/mips/mips-ps-3d.md"
(TARGET_MIPS3D) && 
#line 338 "../.././gcc/config/mips/mips-ps-3d.md"
( reload_completed))
    : -1 },
  { "(ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD\n\
   && HONOR_SIGNED_ZEROS (DFmode)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 1787 "../.././gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (DFmode)) && 
#line 419 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 1787 "../.././gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (DFmode)) && 
#line 419 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
  { "(!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[0])) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 2976 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[0])) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 2976 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[0])) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 2976 "../.././gcc/config/mips/mips.md"
  { "!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[0])",
    __builtin_constant_p 
#line 2976 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[0]))
    ? (int) 
#line 2976 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[0]))
    : -1 },
  { "(ISA_HAS_PREFETCHX && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && (Pmode == DImode)",
    __builtin_constant_p (
#line 5273 "../.././gcc/config/mips/mips.md"
(ISA_HAS_PREFETCHX && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 5273 "../.././gcc/config/mips/mips.md"
(ISA_HAS_PREFETCHX && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
#line 1592 "../.././gcc/config/mips/mips.md"
  { "!TARGET_64BIT && ISA_HAS_MULS",
    __builtin_constant_p 
#line 1592 "../.././gcc/config/mips/mips.md"
(!TARGET_64BIT && ISA_HAS_MULS)
    ? (int) 
#line 1592 "../.././gcc/config/mips/mips.md"
(!TARGET_64BIT && ISA_HAS_MULS)
    : -1 },
#line 4940 "../.././gcc/config/mips/mips.md"
  { "! TARGET_64BIT",
    __builtin_constant_p 
#line 4940 "../.././gcc/config/mips/mips.md"
(! TARGET_64BIT)
    ? (int) 
#line 4940 "../.././gcc/config/mips/mips.md"
(! TARGET_64BIT)
    : -1 },
#line 3222 "../.././gcc/config/mips/mips.md"
  { "TARGET_64BIT && !TARGET_MIPS16\n\
   && (register_operand (operands[0], DImode)\n\
       || reg_or_0_operand (operands[1], DImode))",
    __builtin_constant_p 
#line 3222 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || reg_or_0_operand (operands[1], DImode)))
    ? (int) 
#line 3222 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || reg_or_0_operand (operands[1], DImode)))
    : -1 },
  { "((TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && (Pmode == SImode)) && ( reload_completed)",
    __builtin_constant_p ((
#line 3089 "../.././gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 3091 "../.././gcc/config/mips/mips.md"
( reload_completed))
    ? (int) ((
#line 3089 "../.././gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 3091 "../.././gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
#line 4185 "../.././gcc/config/mips/mips.md"
  { "ISA_HAS_ROTR_SI",
    __builtin_constant_p 
#line 4185 "../.././gcc/config/mips/mips.md"
(ISA_HAS_ROTR_SI)
    ? (int) 
#line 4185 "../.././gcc/config/mips/mips.md"
(ISA_HAS_ROTR_SI)
    : -1 },
#line 3718 "../.././gcc/config/mips/mips.md"
  { "TARGET_MIPS16\n\
   && (register_operand (operands[0], SFmode)\n\
       || register_operand (operands[1], SFmode))",
    __builtin_constant_p 
#line 3718 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], SFmode)
       || register_operand (operands[1], SFmode)))
    ? (int) 
#line 3718 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], SFmode)
       || register_operand (operands[1], SFmode)))
    : -1 },
  { "((TARGET_EXPLICIT_RELOCS) && (Pmode == DImode)) && ( reload_completed)",
    __builtin_constant_p ((
#line 3120 "../.././gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 3122 "../.././gcc/config/mips/mips.md"
( reload_completed))
    ? (int) ((
#line 3120 "../.././gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 3122 "../.././gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
  { "((TARGET_EXPLICIT_RELOCS && !TARGET_XGOT) && (Pmode == SImode)) && ( reload_completed)",
    __builtin_constant_p ((
#line 3103 "../.././gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !TARGET_XGOT) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 3105 "../.././gcc/config/mips/mips.md"
( reload_completed))
    ? (int) ((
#line 3103 "../.././gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !TARGET_XGOT) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 3105 "../.././gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
#line 1028 "../.././gcc/config/mips/mips.md"
  { "GENERATE_MULT3_SI",
    __builtin_constant_p 
#line 1028 "../.././gcc/config/mips/mips.md"
(GENERATE_MULT3_SI)
    ? (int) 
#line 1028 "../.././gcc/config/mips/mips.md"
(GENERATE_MULT3_SI)
    : -1 },
#line 3025 "../.././gcc/config/mips/mips.md"
  { "TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS",
    __builtin_constant_p 
#line 3025 "../.././gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS)
    ? (int) 
#line 3025 "../.././gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS)
    : -1 },
  { "(!TARGET_MIPS16) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 4654 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 4654 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 2654 "../.././gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT && TARGET_FLOAT64 && TARGET_DOUBLE_FLOAT",
    __builtin_constant_p 
#line 2654 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_FLOAT64 && TARGET_DOUBLE_FLOAT)
    ? (int) 
#line 2654 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_FLOAT64 && TARGET_DOUBLE_FLOAT)
    : -1 },
#line 1881 "../.././gcc/config/mips/mips.md"
  { "!TARGET_FIX_VR4120",
    __builtin_constant_p 
#line 1881 "../.././gcc/config/mips/mips.md"
(!TARGET_FIX_VR4120)
    ? (int) 
#line 1881 "../.././gcc/config/mips/mips.md"
(!TARGET_FIX_VR4120)
    : -1 },
#line 2451 "../.././gcc/config/mips/mips.md"
  { "GENERATE_MIPS16E",
    __builtin_constant_p 
#line 2451 "../.././gcc/config/mips/mips.md"
(GENERATE_MIPS16E)
    ? (int) 
#line 2451 "../.././gcc/config/mips/mips.md"
(GENERATE_MIPS16E)
    : -1 },
  { "(mips_use_ins_ext_p (operands[1], operands[2], operands[3])) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 2886 "../.././gcc/config/mips/mips.md"
(mips_use_ins_ext_p (operands[1], operands[2], operands[3])) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 2886 "../.././gcc/config/mips/mips.md"
(mips_use_ins_ext_p (operands[1], operands[2], operands[3])) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 1396 "../.././gcc/config/mips/mips.md"
  { "GENERATE_MULT3_SI && peep2_reg_dead_p (3, operands[1])",
    __builtin_constant_p 
#line 1396 "../.././gcc/config/mips/mips.md"
(GENERATE_MULT3_SI && peep2_reg_dead_p (3, operands[1]))
    ? (int) 
#line 1396 "../.././gcc/config/mips/mips.md"
(GENERATE_MULT3_SI && peep2_reg_dead_p (3, operands[1]))
    : -1 },
#line 1507 "../.././gcc/config/mips/mips.md"
  { "!TARGET_64BIT && !TARGET_FIX_R4000",
    __builtin_constant_p 
#line 1507 "../.././gcc/config/mips/mips.md"
(!TARGET_64BIT && !TARGET_FIX_R4000)
    ? (int) 
#line 1507 "../.././gcc/config/mips/mips.md"
(!TARGET_64BIT && !TARGET_FIX_R4000)
    : -1 },
  { "(TARGET_MIPS3D) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 474 "../.././gcc/config/mips/mips-ps-3d.md"
(TARGET_MIPS3D) && 
#line 419 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 474 "../.././gcc/config/mips/mips-ps-3d.md"
(TARGET_MIPS3D) && 
#line 419 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
#line 3874 "../.././gcc/config/mips/mips.md"
  { "ISA_HAS_MACCHI",
    __builtin_constant_p 
#line 3874 "../.././gcc/config/mips/mips.md"
(ISA_HAS_MACCHI)
    ? (int) 
#line 3874 "../.././gcc/config/mips/mips.md"
(ISA_HAS_MACCHI)
    : -1 },
#line 1218 "../.././gcc/config/mips/mips.md"
  { "ISA_HAS_MACC",
    __builtin_constant_p 
#line 1218 "../.././gcc/config/mips/mips.md"
(ISA_HAS_MACC)
    ? (int) 
#line 1218 "../.././gcc/config/mips/mips.md"
(ISA_HAS_MACC)
    : -1 },
  { "(TARGET_MIPS16) && (Pmode == DImode)",
    __builtin_constant_p (
#line 3164 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 3164 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
  { "((ISA_HAS_FP4) && (Pmode == SImode)) && (TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p ((
#line 3487 "../.././gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 420 "../.././gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) ((
#line 3487 "../.././gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 420 "../.././gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
  { "((!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && (TARGET_64BIT)) && ( reload_completed && REG_P (operands[1]))",
    __builtin_constant_p ((
#line 2462 "../.././gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 2466 "../.././gcc/config/mips/mips.md"
( reload_completed && REG_P (operands[1])))
    ? (int) ((
#line 2462 "../.././gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 2466 "../.././gcc/config/mips/mips.md"
( reload_completed && REG_P (operands[1])))
    : -1 },
#line 1052 "../.././gcc/config/mips/mips.md"
  { "TARGET_64BIT && GENERATE_MULT3_DI",
    __builtin_constant_p 
#line 1052 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && GENERATE_MULT3_DI)
    ? (int) 
#line 1052 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && GENERATE_MULT3_DI)
    : -1 },
  { "(TARGET_4300_MUL_FIX) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 945 "../.././gcc/config/mips/mips.md"
(TARGET_4300_MUL_FIX) && 
#line 423 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 945 "../.././gcc/config/mips/mips.md"
(TARGET_4300_MUL_FIX) && 
#line 423 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
#line 4455 "../.././gcc/config/mips/mips.md"
  { "!TARGET_MIPS16",
    __builtin_constant_p 
#line 4455 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16)
    ? (int) 
#line 4455 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16)
    : -1 },
#line 1489 "../.././gcc/config/mips/mips.md"
  { "!TARGET_64BIT || !TARGET_FIX_R4000",
    __builtin_constant_p 
#line 1489 "../.././gcc/config/mips/mips.md"
(!TARGET_64BIT || !TARGET_FIX_R4000)
    ? (int) 
#line 1489 "../.././gcc/config/mips/mips.md"
(!TARGET_64BIT || !TARGET_FIX_R4000)
    : -1 },
#line 1122 "../.././gcc/config/mips/mips.md"
  { "ISA_HAS_MACC && !GENERATE_MULT3_SI",
    __builtin_constant_p 
#line 1122 "../.././gcc/config/mips/mips.md"
(ISA_HAS_MACC && !GENERATE_MULT3_SI)
    ? (int) 
#line 1122 "../.././gcc/config/mips/mips.md"
(ISA_HAS_MACC && !GENERATE_MULT3_SI)
    : -1 },
#line 406 "../.././gcc/config/mips/mips.md"
  { "Pmode == SImode",
    __builtin_constant_p 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == SImode)
    ? (int) 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == SImode)
    : -1 },
#line 1623 "../.././gcc/config/mips/mips.md"
  { "ISA_HAS_MULHI || !TARGET_FIX_R4000",
    __builtin_constant_p 
#line 1623 "../.././gcc/config/mips/mips.md"
(ISA_HAS_MULHI || !TARGET_FIX_R4000)
    ? (int) 
#line 1623 "../.././gcc/config/mips/mips.md"
(ISA_HAS_MULHI || !TARGET_FIX_R4000)
    : -1 },
  { "(HAVE_AS_TLS && !TARGET_MIPS16) && (Pmode == DImode)",
    __builtin_constant_p (
#line 5419 "../.././gcc/config/mips/mips.md"
(HAVE_AS_TLS && !TARGET_MIPS16) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 5419 "../.././gcc/config/mips/mips.md"
(HAVE_AS_TLS && !TARGET_MIPS16) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
  { "(ISA_HAS_CONDMOVE) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 5351 "../.././gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 423 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 5351 "../.././gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 423 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
#line 731 "../.././gcc/config/mips/mips.md"
  { "TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && REG_P (operands[0])\n\
   && M16_REG_P (REGNO (operands[0]))\n\
   && GET_CODE (operands[1]) == CONST_INT\n\
   && ((INTVAL (operands[1]) > 0x7f\n\
	&& INTVAL (operands[1]) <= 0x7f + 0x7f)\n\
       || (INTVAL (operands[1]) < - 0x80\n\
	   && INTVAL (operands[1]) >= - 0x80 - 0x80))",
    __builtin_constant_p 
#line 731 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) > 0x7f
	&& INTVAL (operands[1]) <= 0x7f + 0x7f)
       || (INTVAL (operands[1]) < - 0x80
	   && INTVAL (operands[1]) >= - 0x80 - 0x80)))
    ? (int) 
#line 731 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) > 0x7f
	&& INTVAL (operands[1]) <= 0x7f + 0x7f)
       || (INTVAL (operands[1]) < - 0x80
	   && INTVAL (operands[1]) >= - 0x80 - 0x80)))
    : -1 },
#line 1180 "../.././gcc/config/mips/mips.md"
  { "reload_completed && !TARGET_DEBUG_D_MODE\n\
   && GP_REG_P (true_regnum (operands[0]))\n\
   && GP_REG_P (true_regnum (operands[3]))",
    __builtin_constant_p 
#line 1180 "../.././gcc/config/mips/mips.md"
(reload_completed && !TARGET_DEBUG_D_MODE
   && GP_REG_P (true_regnum (operands[0]))
   && GP_REG_P (true_regnum (operands[3])))
    ? (int) 
#line 1180 "../.././gcc/config/mips/mips.md"
(reload_completed && !TARGET_DEBUG_D_MODE
   && GP_REG_P (true_regnum (operands[0]))
   && GP_REG_P (true_regnum (operands[3])))
    : -1 },
#line 3618 "../.././gcc/config/mips/mips.md"
  { "!TARGET_MIPS16\n\
   && (register_operand (operands[0], QImode)\n\
       || reg_or_0_operand (operands[1], QImode))",
    __builtin_constant_p 
#line 3618 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], QImode)
       || reg_or_0_operand (operands[1], QImode)))
    ? (int) 
#line 3618 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], QImode)
       || reg_or_0_operand (operands[1], QImode)))
    : -1 },
#line 1417 "../.././gcc/config/mips/mips.md"
  { "ISA_HAS_MADD_MSUB",
    __builtin_constant_p 
#line 1417 "../.././gcc/config/mips/mips.md"
(ISA_HAS_MADD_MSUB)
    ? (int) 
#line 1417 "../.././gcc/config/mips/mips.md"
(ISA_HAS_MADD_MSUB)
    : -1 },
#line 1604 "../.././gcc/config/mips/mips.md"
  { "!TARGET_64BIT && ISA_HAS_MSAC",
    __builtin_constant_p 
#line 1604 "../.././gcc/config/mips/mips.md"
(!TARGET_64BIT && ISA_HAS_MSAC)
    ? (int) 
#line 1604 "../.././gcc/config/mips/mips.md"
(!TARGET_64BIT && ISA_HAS_MSAC)
    : -1 },
  { "((TARGET_EXPLICIT_RELOCS && !TARGET_XGOT) && (Pmode == DImode)) && ( reload_completed)",
    __builtin_constant_p ((
#line 3103 "../.././gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !TARGET_XGOT) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 3105 "../.././gcc/config/mips/mips.md"
( reload_completed))
    ? (int) ((
#line 3103 "../.././gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !TARGET_XGOT) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 3105 "../.././gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
  { "((ISA_HAS_FP4) && (Pmode == SImode)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p ((
#line 3487 "../.././gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 419 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) ((
#line 3487 "../.././gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 419 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
  { "(TARGET_ABICALLS && TARGET_OLDABI) && ( reload_completed)",
    __builtin_constant_p (
#line 4962 "../.././gcc/config/mips/mips.md"
(TARGET_ABICALLS && TARGET_OLDABI) && 
#line 4964 "../.././gcc/config/mips/mips.md"
( reload_completed))
    ? (int) (
#line 4962 "../.././gcc/config/mips/mips.md"
(TARGET_ABICALLS && TARGET_OLDABI) && 
#line 4964 "../.././gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
#line 2886 "../.././gcc/config/mips/mips.md"
  { "mips_use_ins_ext_p (operands[1], operands[2], operands[3])",
    __builtin_constant_p 
#line 2886 "../.././gcc/config/mips/mips.md"
(mips_use_ins_ext_p (operands[1], operands[2], operands[3]))
    ? (int) 
#line 2886 "../.././gcc/config/mips/mips.md"
(mips_use_ins_ext_p (operands[1], operands[2], operands[3]))
    : -1 },
  { "((ISA_HAS_CONDMOVE) && (TARGET_HARD_FLOAT)) && (TARGET_64BIT)",
    __builtin_constant_p ((
#line 5309 "../.././gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 410 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) ((
#line 5309 "../.././gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 410 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 3922 "../.././gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !TARGET_64BIT",
    __builtin_constant_p 
#line 3922 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !TARGET_64BIT)
    ? (int) 
#line 3922 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !TARGET_64BIT)
    : -1 },
  { "(TARGET_64BIT) && ( reload_completed && REG_P (operands[1]))",
    __builtin_constant_p (
#line 2321 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 2325 "../.././gcc/config/mips/mips.md"
( reload_completed && REG_P (operands[1])))
    ? (int) (
#line 2321 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 2325 "../.././gcc/config/mips/mips.md"
( reload_completed && REG_P (operands[1])))
    : -1 },
#line 617 "../.././gcc/config/mips/mips.md"
  { "ISA_HAS_COND_TRAP",
    __builtin_constant_p 
#line 617 "../.././gcc/config/mips/mips.md"
(ISA_HAS_COND_TRAP)
    ? (int) 
#line 617 "../.././gcc/config/mips/mips.md"
(ISA_HAS_COND_TRAP)
    : -1 },
  { "(TARGET_MIPS3D) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 474 "../.././gcc/config/mips/mips-ps-3d.md"
(TARGET_MIPS3D) && 
#line 418 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 474 "../.././gcc/config/mips/mips-ps-3d.md"
(TARGET_MIPS3D) && 
#line 418 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
#line 792 "../.././gcc/config/mips/mips.md"
  { "TARGET_MIPS16 && TARGET_64BIT && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && REG_P (operands[0])\n\
   && M16_REG_P (REGNO (operands[0]))\n\
   && GET_CODE (operands[1]) == CONST_INT\n\
   && ((INTVAL (operands[1]) > 0xf\n\
	&& INTVAL (operands[1]) <= 0xf + 0xf)\n\
       || (INTVAL (operands[1]) < - 0x10\n\
	   && INTVAL (operands[1]) >= - 0x10 - 0x10))",
    __builtin_constant_p 
#line 792 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16 && TARGET_64BIT && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) > 0xf
	&& INTVAL (operands[1]) <= 0xf + 0xf)
       || (INTVAL (operands[1]) < - 0x10
	   && INTVAL (operands[1]) >= - 0x10 - 0x10)))
    ? (int) 
#line 792 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16 && TARGET_64BIT && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) > 0xf
	&& INTVAL (operands[1]) <= 0xf + 0xf)
       || (INTVAL (operands[1]) < - 0x10
	   && INTVAL (operands[1]) >= - 0x10 - 0x10)))
    : -1 },
#line 1472 "../.././gcc/config/mips/mips.md"
  { "ISA_HAS_MULS",
    __builtin_constant_p 
#line 1472 "../.././gcc/config/mips/mips.md"
(ISA_HAS_MULS)
    ? (int) 
#line 1472 "../.././gcc/config/mips/mips.md"
(ISA_HAS_MULS)
    : -1 },
  { "(TARGET_ABICALLS) && (Pmode == DImode)",
    __builtin_constant_p (
#line 5000 "../.././gcc/config/mips/mips.md"
(TARGET_ABICALLS) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 5000 "../.././gcc/config/mips/mips.md"
(TARGET_ABICALLS) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
#line 2572 "../.././gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT && ISA_HAS_TRUNC_W",
    __builtin_constant_p 
#line 2572 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_TRUNC_W)
    ? (int) 
#line 2572 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_TRUNC_W)
    : -1 },
#line 3211 "../.././gcc/config/mips/mips.md"
  { "!TARGET_64BIT && TARGET_MIPS16\n\
   && (register_operand (operands[0], DImode)\n\
       || register_operand (operands[1], DImode))",
    __builtin_constant_p 
#line 3211 "../.././gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    ? (int) 
#line 3211 "../.././gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    : -1 },
  { "(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS && cse_not_expected) && ( reload_completed)",
    __builtin_constant_p (
#line 3053 "../.././gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS && cse_not_expected) && 
#line 3055 "../.././gcc/config/mips/mips.md"
( reload_completed))
    ? (int) (
#line 3053 "../.././gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS && cse_not_expected) && 
#line 3055 "../.././gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
#line 2231 "../.././gcc/config/mips/mips.md"
  { "TARGET_64BIT && !TARGET_MIPS16 && INTVAL (operands[2]) >= 32",
    __builtin_constant_p 
#line 2231 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16 && INTVAL (operands[2]) >= 32)
    ? (int) 
#line 2231 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16 && INTVAL (operands[2]) >= 32)
    : -1 },
#line 1099 "../.././gcc/config/mips/mips.md"
  { "TARGET_FIX_R4000",
    __builtin_constant_p 
#line 1099 "../.././gcc/config/mips/mips.md"
(TARGET_FIX_R4000)
    ? (int) 
#line 1099 "../.././gcc/config/mips/mips.md"
(TARGET_FIX_R4000)
    : -1 },
  { "(!TARGET_FIX_SB1 || flag_unsafe_math_optimizations) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 1817 "../.././gcc/config/mips/mips.md"
(!TARGET_FIX_SB1 || flag_unsafe_math_optimizations) && 
#line 418 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 1817 "../.././gcc/config/mips/mips.md"
(!TARGET_FIX_SB1 || flag_unsafe_math_optimizations) && 
#line 418 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
#line 4962 "../.././gcc/config/mips/mips.md"
  { "TARGET_ABICALLS && TARGET_OLDABI",
    __builtin_constant_p 
#line 4962 "../.././gcc/config/mips/mips.md"
(TARGET_ABICALLS && TARGET_OLDABI)
    ? (int) 
#line 4962 "../.././gcc/config/mips/mips.md"
(TARGET_ABICALLS && TARGET_OLDABI)
    : -1 },
#line 5221 "../.././gcc/config/mips/mips.md"
  { "TARGET_SPLIT_CALLS",
    __builtin_constant_p 
#line 5221 "../.././gcc/config/mips/mips.md"
(TARGET_SPLIT_CALLS)
    ? (int) 
#line 5221 "../.././gcc/config/mips/mips.md"
(TARGET_SPLIT_CALLS)
    : -1 },
#line 3864 "../.././gcc/config/mips/mips.md"
  { "!ISA_HAS_MACCHI",
    __builtin_constant_p 
#line 3864 "../.././gcc/config/mips/mips.md"
(!ISA_HAS_MACCHI)
    ? (int) 
#line 3864 "../.././gcc/config/mips/mips.md"
(!ISA_HAS_MACCHI)
    : -1 },
  { "((TARGET_EXPLICIT_RELOCS) && (Pmode == SImode)) && ( reload_completed)",
    __builtin_constant_p ((
#line 3120 "../.././gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 3122 "../.././gcc/config/mips/mips.md"
( reload_completed))
    ? (int) ((
#line 3120 "../.././gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 3122 "../.././gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
  { "(!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[1])) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 2955 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[1])) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 2955 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[1])) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(ISA_HAS_ROTR_DI) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 4185 "../.././gcc/config/mips/mips.md"
(ISA_HAS_ROTR_DI) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 4185 "../.././gcc/config/mips/mips.md"
(ISA_HAS_ROTR_DI) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD\n\
   && !HONOR_SIGNED_ZEROS (V2SFmode)) && (TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p (
#line 1799 "../.././gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (V2SFmode)) && 
#line 420 "../.././gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) (
#line 1799 "../.././gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (V2SFmode)) && 
#line 420 "../.././gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
  { "(!TARGET_4300_MUL_FIX) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 932 "../.././gcc/config/mips/mips.md"
(!TARGET_4300_MUL_FIX) && 
#line 423 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 932 "../.././gcc/config/mips/mips.md"
(!TARGET_4300_MUL_FIX) && 
#line 423 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
#line 2462 "../.././gcc/config/mips/mips.md"
  { "!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E",
    __builtin_constant_p 
#line 2462 "../.././gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E)
    ? (int) 
#line 2462 "../.././gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E)
    : -1 },
#line 3660 "../.././gcc/config/mips/mips.md"
  { "TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && REG_P (operands[0])\n\
   && M16_REG_P (REGNO (operands[0]))\n\
   && GET_CODE (operands[1]) == CONST_INT\n\
   && ((INTVAL (operands[1]) < 0\n\
	&& INTVAL (operands[1]) >= -0x80)\n\
       || (INTVAL (operands[1]) >= 32\n\
	   && INTVAL (operands[1]) <= 31 + 0x7f))",
    __builtin_constant_p 
#line 3660 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x80)
       || (INTVAL (operands[1]) >= 32
	   && INTVAL (operands[1]) <= 31 + 0x7f)))
    ? (int) 
#line 3660 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x80)
       || (INTVAL (operands[1]) >= 32
	   && INTVAL (operands[1]) <= 31 + 0x7f)))
    : -1 },
  { "((ISA_HAS_CONDMOVE) && (TARGET_64BIT)) && (TARGET_64BIT)",
    __builtin_constant_p ((
#line 5309 "../.././gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 410 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) ((
#line 5309 "../.././gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 410 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 1435 "../.././gcc/config/mips/mips.md"
  { "reload_completed && !TARGET_DEBUG_D_MODE\n\
   && GP_REG_P (true_regnum (operands[0]))\n\
   && GP_REG_P (true_regnum (operands[1]))",
    __builtin_constant_p 
#line 1435 "../.././gcc/config/mips/mips.md"
(reload_completed && !TARGET_DEBUG_D_MODE
   && GP_REG_P (true_regnum (operands[0]))
   && GP_REG_P (true_regnum (operands[1])))
    ? (int) 
#line 1435 "../.././gcc/config/mips/mips.md"
(reload_completed && !TARGET_DEBUG_D_MODE
   && GP_REG_P (true_regnum (operands[0]))
   && GP_REG_P (true_regnum (operands[1])))
    : -1 },
#line 1357 "../.././gcc/config/mips/mips.md"
  { "GENERATE_MULT3_SI\n\
   && true_regnum (operands[1]) == LO_REGNUM\n\
   && peep2_reg_dead_p (2, operands[1])\n\
   && GP_REG_P (true_regnum (operands[3]))",
    __builtin_constant_p 
#line 1357 "../.././gcc/config/mips/mips.md"
(GENERATE_MULT3_SI
   && true_regnum (operands[1]) == LO_REGNUM
   && peep2_reg_dead_p (2, operands[1])
   && GP_REG_P (true_regnum (operands[3])))
    ? (int) 
#line 1357 "../.././gcc/config/mips/mips.md"
(GENERATE_MULT3_SI
   && true_regnum (operands[1]) == LO_REGNUM
   && peep2_reg_dead_p (2, operands[1])
   && GP_REG_P (true_regnum (operands[3])))
    : -1 },
  { "(TARGET_DSP) && (TARGET_DSP)",
    __builtin_constant_p (
#line 785 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP) && 
#line 16 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP))
    ? (int) (
#line 785 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP) && 
#line 16 "../.././gcc/config/mips/mips-dsp.md"
(TARGET_DSP))
    : -1 },
  { "(ISA_HAS_COND_TRAP) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 634 "../.././gcc/config/mips/mips.md"
(ISA_HAS_COND_TRAP) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 634 "../.././gcc/config/mips/mips.md"
(ISA_HAS_COND_TRAP) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(TARGET_EXPLICIT_RELOCS && !TARGET_XGOT) && (Pmode == DImode)",
    __builtin_constant_p (
#line 3103 "../.././gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !TARGET_XGOT) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 3103 "../.././gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !TARGET_XGOT) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
  { "((ISA_HAS_FP4) && (Pmode == SImode)) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p ((
#line 3487 "../.././gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 418 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) ((
#line 3487 "../.././gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 418 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
#line 424 "../.././gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT",
    __builtin_constant_p 
#line 424 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
    ? (int) 
#line 424 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
    : -1 },
  { "(ISA_HAS_FP4 && flag_unsafe_math_optimizations) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 1947 "../.././gcc/config/mips/mips.md"
(ISA_HAS_FP4 && flag_unsafe_math_optimizations) && 
#line 419 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 1947 "../.././gcc/config/mips/mips.md"
(ISA_HAS_FP4 && flag_unsafe_math_optimizations) && 
#line 419 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
#line 3357 "../.././gcc/config/mips/mips.md"
  { "TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && REG_P (operands[0])\n\
   && M16_REG_P (REGNO (operands[0]))\n\
   && GET_CODE (operands[1]) == CONST_INT\n\
   && ((INTVAL (operands[1]) < 0\n\
	&& INTVAL (operands[1]) >= -0x80)\n\
       || (INTVAL (operands[1]) >= 32 * 4\n\
	   && INTVAL (operands[1]) <= 31 * 4 + 0x7c)\n\
       || (INTVAL (operands[1]) >= 0\n\
	   && INTVAL (operands[1]) < 32 * 4\n\
	   && (INTVAL (operands[1]) & 3) != 0))",
    __builtin_constant_p 
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
	   && (INTVAL (operands[1]) & 3) != 0)))
    ? (int) 
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
	   && (INTVAL (operands[1]) & 3) != 0)))
    : -1 },
  { "(ISA_HAS_CONDMOVE) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 5339 "../.././gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 5339 "../.././gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(ISA_HAS_CONDMOVE) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 5351 "../.././gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 424 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 5351 "../.././gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 424 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
#line 2534 "../.././gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && ISA_HAS_TRUNC_W",
    __builtin_constant_p 
#line 2534 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && ISA_HAS_TRUNC_W)
    ? (int) 
#line 2534 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && ISA_HAS_TRUNC_W)
    : -1 },
#line 1088 "../.././gcc/config/mips/mips.md"
  { "!TARGET_FIX_R4000",
    __builtin_constant_p 
#line 1088 "../.././gcc/config/mips/mips.md"
(!TARGET_FIX_R4000)
    ? (int) 
#line 1088 "../.././gcc/config/mips/mips.md"
(!TARGET_FIX_R4000)
    : -1 },
  { "(mips_use_ins_ext_p (operands[0], operands[1], operands[2])) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 2922 "../.././gcc/config/mips/mips.md"
(mips_use_ins_ext_p (operands[0], operands[1], operands[2])) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 2922 "../.././gcc/config/mips/mips.md"
(mips_use_ins_ext_p (operands[0], operands[1], operands[2])) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 5127 "../.././gcc/config/mips/mips.md"
  { "reload_completed && TARGET_SPLIT_CALLS && (operands[2] = insn)",
    __builtin_constant_p 
#line 5127 "../.././gcc/config/mips/mips.md"
(reload_completed && TARGET_SPLIT_CALLS && (operands[2] = insn))
    ? (int) 
#line 5127 "../.././gcc/config/mips/mips.md"
(reload_completed && TARGET_SPLIT_CALLS && (operands[2] = insn))
    : -1 },
#line 3936 "../.././gcc/config/mips/mips.md"
  { "TARGET_ABICALLS && TARGET_NEWABI",
    __builtin_constant_p 
#line 3936 "../.././gcc/config/mips/mips.md"
(TARGET_ABICALLS && TARGET_NEWABI)
    ? (int) 
#line 3936 "../.././gcc/config/mips/mips.md"
(TARGET_ABICALLS && TARGET_NEWABI)
    : -1 },
  { "(TARGET_SB1) && (TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p (
#line 1911 "../.././gcc/config/mips/mips.md"
(TARGET_SB1) && 
#line 420 "../.././gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) (
#line 1911 "../.././gcc/config/mips/mips.md"
(TARGET_SB1) && 
#line 420 "../.././gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
#line 3530 "../.././gcc/config/mips/mips.md"
  { "TARGET_MIPS16\n\
   && (register_operand (operands[0], HImode)\n\
       || register_operand (operands[1], HImode))",
    __builtin_constant_p 
#line 3530 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode)))
    ? (int) 
#line 3530 "../.././gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode)))
    : -1 },
#line 5200 "../.././gcc/config/mips/mips.md"
  { "reload_completed && TARGET_SPLIT_CALLS && (operands[4] = insn)",
    __builtin_constant_p 
#line 5200 "../.././gcc/config/mips/mips.md"
(reload_completed && TARGET_SPLIT_CALLS && (operands[4] = insn))
    ? (int) 
#line 5200 "../.././gcc/config/mips/mips.md"
(reload_completed && TARGET_SPLIT_CALLS && (operands[4] = insn))
    : -1 },
#line 3511 "../.././gcc/config/mips/mips.md"
  { "!TARGET_MIPS16\n\
   && (register_operand (operands[0], HImode)\n\
       || reg_or_0_operand (operands[1], HImode))",
    __builtin_constant_p 
#line 3511 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], HImode)
       || reg_or_0_operand (operands[1], HImode)))
    ? (int) 
#line 3511 "../.././gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], HImode)
       || reg_or_0_operand (operands[1], HImode)))
    : -1 },
#line 4826 "../.././gcc/config/mips/mips.md"
  { "TARGET_ABICALLS",
    __builtin_constant_p 
#line 4826 "../.././gcc/config/mips/mips.md"
(TARGET_ABICALLS)
    ? (int) 
#line 4826 "../.././gcc/config/mips/mips.md"
(TARGET_ABICALLS)
    : -1 },
  { "((ISA_HAS_FP4) && (Pmode == DImode)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p ((
#line 3487 "../.././gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 419 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) ((
#line 3487 "../.././gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 419 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
  { "(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 2462 "../.././gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 2462 "../.././gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && 
#line 402 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(TARGET_MIPS3D) && (TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p (
#line 474 "../.././gcc/config/mips/mips-ps-3d.md"
(TARGET_MIPS3D) && 
#line 420 "../.././gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) (
#line 474 "../.././gcc/config/mips/mips-ps-3d.md"
(TARGET_MIPS3D) && 
#line 420 "../.././gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
#line 1240 "../.././gcc/config/mips/mips.md"
  { "ISA_HAS_MSAC",
    __builtin_constant_p 
#line 1240 "../.././gcc/config/mips/mips.md"
(ISA_HAS_MSAC)
    ? (int) 
#line 1240 "../.././gcc/config/mips/mips.md"
(ISA_HAS_MSAC)
    : -1 },
#line 3707 "../.././gcc/config/mips/mips.md"
  { "TARGET_SOFT_FLOAT && !TARGET_MIPS16\n\
   && (register_operand (operands[0], SFmode)\n\
       || reg_or_0_operand (operands[1], SFmode))",
    __builtin_constant_p 
#line 3707 "../.././gcc/config/mips/mips.md"
(TARGET_SOFT_FLOAT && !TARGET_MIPS16
   && (register_operand (operands[0], SFmode)
       || reg_or_0_operand (operands[1], SFmode)))
    ? (int) 
#line 3707 "../.././gcc/config/mips/mips.md"
(TARGET_SOFT_FLOAT && !TARGET_MIPS16
   && (register_operand (operands[0], SFmode)
       || reg_or_0_operand (operands[1], SFmode)))
    : -1 },
  { "(!ISA_MIPS1) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 1911 "../.././gcc/config/mips/mips.md"
(!ISA_MIPS1) && 
#line 418 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 1911 "../.././gcc/config/mips/mips.md"
(!ISA_MIPS1) && 
#line 418 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
#line 1304 "../.././gcc/config/mips/mips.md"
  { "ISA_HAS_MSAC && reload_completed",
    __builtin_constant_p 
#line 1304 "../.././gcc/config/mips/mips.md"
(ISA_HAS_MSAC && reload_completed)
    ? (int) 
#line 1304 "../.././gcc/config/mips/mips.md"
(ISA_HAS_MSAC && reload_completed)
    : -1 },
  { "(ISA_HAS_PREFETCHX && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && (Pmode == SImode)",
    __builtin_constant_p (
#line 5273 "../.././gcc/config/mips/mips.md"
(ISA_HAS_PREFETCHX && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 5273 "../.././gcc/config/mips/mips.md"
(ISA_HAS_PREFETCHX && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
#line 5167 "../.././gcc/config/mips/mips.md"
  { "reload_completed && TARGET_SPLIT_CALLS && (operands[3] = insn)",
    __builtin_constant_p 
#line 5167 "../.././gcc/config/mips/mips.md"
(reload_completed && TARGET_SPLIT_CALLS && (operands[3] = insn))
    ? (int) 
#line 5167 "../.././gcc/config/mips/mips.md"
(reload_completed && TARGET_SPLIT_CALLS && (operands[3] = insn))
    : -1 },
  { "(ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD\n\
   && HONOR_SIGNED_ZEROS (SFmode)) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 1787 "../.././gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (SFmode)) && 
#line 418 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 1787 "../.././gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (SFmode)) && 
#line 418 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
#line 1261 "../.././gcc/config/mips/mips.md"
  { "ISA_HAS_MACC && !ISA_HAS_MSAC",
    __builtin_constant_p 
#line 1261 "../.././gcc/config/mips/mips.md"
(ISA_HAS_MACC && !ISA_HAS_MSAC)
    ? (int) 
#line 1261 "../.././gcc/config/mips/mips.md"
(ISA_HAS_MACC && !ISA_HAS_MSAC)
    : -1 },
  { "(TARGET_SB1 && (!TARGET_FIX_SB1 || flag_unsafe_math_optimizations)) && (TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p (
#line 1817 "../.././gcc/config/mips/mips.md"
(TARGET_SB1 && (!TARGET_FIX_SB1 || flag_unsafe_math_optimizations)) && 
#line 420 "../.././gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) (
#line 1817 "../.././gcc/config/mips/mips.md"
(TARGET_SB1 && (!TARGET_FIX_SB1 || flag_unsafe_math_optimizations)) && 
#line 420 "../.././gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
  { "((ISA_HAS_CONDMOVE) && (TARGET_64BIT)) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p ((
#line 5324 "../.././gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 410 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 423 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) ((
#line 5324 "../.././gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 410 "../.././gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 423 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
#line 3565 "../.././gcc/config/mips/mips.md"
  { "TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && REG_P (operands[0])\n\
   && M16_REG_P (REGNO (operands[0]))\n\
   && GET_CODE (operands[1]) == CONST_INT\n\
   && ((INTVAL (operands[1]) < 0\n\
	&& INTVAL (operands[1]) >= -0x80)\n\
       || (INTVAL (operands[1]) >= 32 * 2\n\
	   && INTVAL (operands[1]) <= 31 * 2 + 0x7e)\n\
       || (INTVAL (operands[1]) >= 0\n\
	   && INTVAL (operands[1]) < 32 * 2\n\
	   && (INTVAL (operands[1]) & 1) != 0))",
    __builtin_constant_p 
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
	   && (INTVAL (operands[1]) & 1) != 0)))
    ? (int) 
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
	   && (INTVAL (operands[1]) & 1) != 0)))
    : -1 },
#line 1643 "../.././gcc/config/mips/mips.md"
  { "!ISA_HAS_MULHI && !TARGET_FIX_R4000",
    __builtin_constant_p 
#line 1643 "../.././gcc/config/mips/mips.md"
(!ISA_HAS_MULHI && !TARGET_FIX_R4000)
    ? (int) 
#line 1643 "../.././gcc/config/mips/mips.md"
(!ISA_HAS_MULHI && !TARGET_FIX_R4000)
    : -1 },
  { "(!ISA_MIPS1) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 1911 "../.././gcc/config/mips/mips.md"
(!ISA_MIPS1) && 
#line 419 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 1911 "../.././gcc/config/mips/mips.md"
(!ISA_MIPS1) && 
#line 419 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
  { "(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS) && ( flow2_completed)",
    __builtin_constant_p (
#line 2999 "../.././gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS) && 
#line 3001 "../.././gcc/config/mips/mips.md"
( flow2_completed))
    ? (int) (
#line 2999 "../.././gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS) && 
#line 3001 "../.././gcc/config/mips/mips.md"
( flow2_completed))
    : -1 },
  { "(ISA_HAS_FP4 && TARGET_FUSED_MADD) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 1752 "../.././gcc/config/mips/mips.md"
(ISA_HAS_FP4 && TARGET_FUSED_MADD) && 
#line 418 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 1752 "../.././gcc/config/mips/mips.md"
(ISA_HAS_FP4 && TARGET_FUSED_MADD) && 
#line 418 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
#line 3752 "../.././gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !TARGET_64BIT\n\
   && (register_operand (operands[0], DFmode)\n\
       || reg_or_0_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 3752 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !TARGET_64BIT
   && (register_operand (operands[0], DFmode)
       || reg_or_0_operand (operands[1], DFmode)))
    ? (int) 
#line 3752 "../.././gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !TARGET_64BIT
   && (register_operand (operands[0], DFmode)
       || reg_or_0_operand (operands[1], DFmode)))
    : -1 },
  { "(HAVE_AS_TLS && !TARGET_MIPS16) && (Pmode == SImode)",
    __builtin_constant_p (
#line 5419 "../.././gcc/config/mips/mips.md"
(HAVE_AS_TLS && !TARGET_MIPS16) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 5419 "../.././gcc/config/mips/mips.md"
(HAVE_AS_TLS && !TARGET_MIPS16) && 
#line 406 "../.././gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
};

const size_t n_insn_conditions = 210;
const int insn_elision_unavailable = 0;
#endif
