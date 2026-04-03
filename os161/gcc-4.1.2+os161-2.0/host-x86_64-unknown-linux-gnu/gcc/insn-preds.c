/* Generated automatically by the program 'build/genpreds'
   from the machine description file '../.././gcc/config/mips/mips.md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "tree.h"
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
#include "regs.h"

int
const_uns_arith_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 23 "../.././gcc/config/mips/predicates.md"
(SMALL_OPERAND_UNSIGNED (INTVAL (op))));
}

int
uns_arith_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (const_uns_arith_operand (op, mode)) || (register_operand (op, mode));
}

int
const_arith_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 31 "../.././gcc/config/mips/predicates.md"
(SMALL_OPERAND (INTVAL (op))));
}

int
arith_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (const_arith_operand (op, mode)) || (register_operand (op, mode));
}

int
const_uimm6_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 39 "../.././gcc/config/mips/predicates.md"
(UIMM6_OPERAND (INTVAL (op))));
}

int
const_imm10_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 43 "../.././gcc/config/mips/predicates.md"
(IMM10_OPERAND (INTVAL (op))));
}

int
reg_imm10_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (const_imm10_operand (op, mode)) || (register_operand (op, mode));
}

int
sle_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 51 "../.././gcc/config/mips/predicates.md"
(SMALL_OPERAND (INTVAL (op) + 1)));
}

int
sleu_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (sle_operand (op, mode)) && (
#line 55 "../.././gcc/config/mips/predicates.md"
(INTVAL (op) + 1 != 0));
}

int
const_0_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT || GET_CODE (op) == CONST_DOUBLE || GET_CODE (op) == CONST_VECTOR) && (
#line 59 "../.././gcc/config/mips/predicates.md"
(op == CONST0_RTX (GET_MODE (op))));
}

int
reg_or_0_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((const_0_operand (op, mode)) && (
#line 63 "../.././gcc/config/mips/predicates.md"
(!TARGET_MIPS16))) || (register_operand (op, mode));
}

int
const_1_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT || GET_CODE (op) == CONST_DOUBLE || GET_CODE (op) == CONST_VECTOR) && (
#line 68 "../.././gcc/config/mips/predicates.md"
(op == CONST1_RTX (GET_MODE (op))));
}

int
reg_or_1_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (const_1_operand (op, mode)) || (register_operand (op, mode));
}

int
const_0_or_1_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && ((
#line 77 "../.././gcc/config/mips/predicates.md"
(op == CONST0_RTX (GET_MODE (op)))) || (
#line 78 "../.././gcc/config/mips/predicates.md"
(op == CONST1_RTX (GET_MODE (op)))));
}

int
fpr_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (
#line 82 "../.././gcc/config/mips/predicates.md"
(FP_REG_P (REGNO (op))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
lo_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (
#line 86 "../.././gcc/config/mips/predicates.md"
(REGNO (op) == LO_REGNUM))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
fcc_reload_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG || GET_CODE (op) == SUBREG) && (
#line 90 "../.././gcc/config/mips/predicates.md"
(ST_REG_P (true_regnum (op))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
pc_or_label_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return GET_CODE (op) == PC || GET_CODE (op) == LABEL_REF;
}

static inline int
const_call_insn_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 97 "../.././gcc/config/mips/predicates.md"
{
  enum mips_symbol_type symbol_type;

  if (!mips_symbolic_constant_p (op, &symbol_type))
    return false;

  switch (symbol_type)
    {
    case SYMBOL_GENERAL:
      /* If -mlong-calls, force all calls to use register addressing.  Also,
	 if this function has the long_call attribute, we must use register
	 addressing.  */
      return !TARGET_LONG_CALLS && !SYMBOL_REF_LONG_CALL_P (op);

    case SYMBOL_GOT_GLOBAL:
      /* Without explicit relocs, there is no special syntax for
	 loading the address of a call destination into a register.
	 Using "la $25,foo; jal $25" would prevent the lazy binding
	 of "foo", so keep the address of global symbols with the
	 jal macro.  */
      return !TARGET_EXPLICIT_RELOCS;

    default:
      return false;
    }
}

int
const_call_insn_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST || GET_CODE (op) == SYMBOL_REF || GET_CODE (op) == LABEL_REF) && (
(const_call_insn_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
call_insn_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (const_call_insn_operand (op, mode)) || (register_operand (op, mode));
}

static inline int
move_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 130 "../.././gcc/config/mips/predicates.md"
{
  switch (GET_CODE (op))
    {
    case CONST_INT:
      /* When generating mips16 code, LEGITIMATE_CONSTANT_P rejects
	 CONST_INTs that can't be loaded using simple insns.  */
      if (TARGET_MIPS16)
	return true;

      /* When generating 32-bit code, allow DImode move_operands to
	 match arbitrary constants.  We split them after reload.  */
      if (!TARGET_64BIT && mode == DImode)
	return true;

      /* Otherwise check whether the constant can be loaded in a single
	 instruction.  */
      return LUI_INT (op) || SMALL_INT (op) || SMALL_INT_UNSIGNED (op);

    case CONST:
    case SYMBOL_REF:
    case LABEL_REF:
      return CONST_GP_P (op) || mips_atomic_symbolic_constant_p (op);

    default:
      return true;
    }
}

int
move_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (general_operand (op, mode)) && (
(move_operand_1 (op, mode)));
}

int
consttable_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 159 "../.././gcc/config/mips/predicates.md"
(CONSTANT_P (op))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
symbolic_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 163 "../.././gcc/config/mips/predicates.md"
{
  enum mips_symbol_type type;
  return mips_symbolic_constant_p (op, &type);
}

int
symbolic_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST || GET_CODE (op) == SYMBOL_REF || GET_CODE (op) == LABEL_REF) && (
(symbolic_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
general_symbolic_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 170 "../.././gcc/config/mips/predicates.md"
{
  enum mips_symbol_type type;
  return mips_symbolic_constant_p (op, &type) && type == SYMBOL_GENERAL;
}

int
general_symbolic_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST || GET_CODE (op) == SYMBOL_REF || GET_CODE (op) == LABEL_REF) && (
(general_symbolic_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
global_got_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 177 "../.././gcc/config/mips/predicates.md"
{
  enum mips_symbol_type type;
  return mips_symbolic_constant_p (op, &type) && type == SYMBOL_GOT_GLOBAL;
}

int
global_got_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST || GET_CODE (op) == SYMBOL_REF || GET_CODE (op) == LABEL_REF) && (
(global_got_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
local_got_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 184 "../.././gcc/config/mips/predicates.md"
{
  enum mips_symbol_type type;
  return mips_symbolic_constant_p (op, &type) && type == SYMBOL_GOT_LOCAL;
}

int
local_got_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST || GET_CODE (op) == SYMBOL_REF || GET_CODE (op) == LABEL_REF) && (
(local_got_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
stack_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
#line 191 "../.././gcc/config/mips/predicates.md"
(mips_stack_address_p (XEXP (op, 0), GET_MODE (op))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
macc_msac_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 196 "../.././gcc/config/mips/predicates.md"
{
  rtx mult = XEXP (op, GET_CODE (op) == PLUS ? 0 : 1);
  rtx accum = XEXP (op, GET_CODE (op) == PLUS ? 1 : 0);
  return (GET_CODE (mult) == MULT
	  && REG_P (XEXP (mult, 0))
	  && REG_P (XEXP (mult, 1))
	  && REG_P (accum));
}

int
macc_msac_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((((GET_CODE (op) == PLUS) && (
#line 194 "../.././gcc/config/mips/predicates.md"
(ISA_HAS_MACC))) || ((GET_CODE (op) == MINUS) && (
#line 195 "../.././gcc/config/mips/predicates.md"
(ISA_HAS_MSAC)))) && (
(macc_msac_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
equality_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == EQ || GET_CODE (op) == NE) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
extend_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == ZERO_EXTEND || GET_CODE (op) == SIGN_EXTEND) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
trap_comparison_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == EQ || GET_CODE (op) == NE || GET_CODE (op) == LT || GET_CODE (op) == LTU || GET_CODE (op) == GE || GET_CODE (op) == GEU) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
small_data_pattern (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == SET || GET_CODE (op) == PARALLEL || GET_CODE (op) == UNSPEC || GET_CODE (op) == UNSPEC_VOLATILE || GET_CODE (op) == PREFETCH) && (
#line 218 "../.././gcc/config/mips/predicates.md"
(mips_small_data_pattern_p (op)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

