/* Generated automatically by the program `genextract'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "toplev.h"

static rtx junk ATTRIBUTE_UNUSED;
void
insn_extract (rtx insn)
{
  rtx *ro = recog_data.operand;
  rtx **ro_loc = recog_data.operand_loc;
  rtx pat = PATTERN (insn);
  int i ATTRIBUTE_UNUSED;

  switch (INSN_CODE (insn))
    {
    case -1:
      fatal_insn_not_found (insn);

    case 501:  /* mips_bposge */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 499:  /* mips_lhx */
    case 498:  /* mips_lbux */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 496:  /* mips_wrdsp */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 5), 1), 0, 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 5), 1), 0, 0);
      recog_data.dup_num[1] = 0;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 4), 1), 0, 1);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 4), 1), 0, 0);
      recog_data.dup_num[3] = 0;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0, 1);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0, 0);
      recog_data.dup_num[5] = 0;
      recog_data.dup_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[6] = 1;
      recog_data.dup_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[7] = 0;
      recog_data.dup_loc[8] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[8] = 1;
      recog_data.dup_loc[9] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[9] = 0;
      break;

    case 493:  /* mips_extpdp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[3] = 1;
      break;

    case 481:  /* mips_cmpu_le_qb */
    case 480:  /* mips_cmp_le_ph */
    case 479:  /* mips_cmpu_lt_qb */
    case 478:  /* mips_cmp_lt_ph */
    case 477:  /* mips_cmpu_eq_qb */
    case 476:  /* mips_cmp_eq_ph */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 471:  /* mips_maq_sa_w_phr */
    case 470:  /* mips_maq_sa_w_phl */
    case 469:  /* mips_maq_s_w_phr */
    case 468:  /* mips_maq_s_w_phl */
    case 467:  /* mips_dpsq_sa_l_w */
    case 466:  /* mips_dpaq_sa_l_w */
    case 465:  /* mips_mulsaq_s_w_ph */
    case 464:  /* mips_dpsq_s_w_ph */
    case 463:  /* mips_dpaq_s_w_ph */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[2] = 1;
      break;

    case 458:  /* mips_muleq_s_w_phr */
    case 457:  /* mips_muleq_s_w_phl */
    case 456:  /* mips_mulq_rs_ph */
    case 455:  /* mips_muleu_s_ph_qbr */
    case 454:  /* mips_muleu_s_ph_qbl */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 1;
      break;

    case 431:  /* mips_absq_s_ph */
    case 430:  /* mips_absq_s_w */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 1;
      break;

    case 495:  /* mips_mthlip */
    case 492:  /* mips_extp */
    case 491:  /* mips_extr_s_h */
    case 490:  /* mips_extr_rs_w */
    case 489:  /* mips_extr_r_w */
    case 488:  /* mips_extr_w */
    case 449:  /* mips_shll_s_ph */
    case 448:  /* mips_shll_s_w */
    case 447:  /* mips_shll_qb */
    case 446:  /* mips_shll_ph */
    case 435:  /* mips_precrqu_s_qb_ph */
    case 434:  /* mips_precrq_rs_ph_w */
    case 427:  /* mips_addwc */
    case 426:  /* mips_addsc */
    case 425:  /* mips_subu_s_qb */
    case 424:  /* mips_subq_s_ph */
    case 423:  /* mips_subq_s_w */
    case 420:  /* mips_addu_s_qb */
    case 419:  /* mips_addq_s_ph */
    case 418:  /* mips_addq_s_w */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 1;
      break;

    case 422:  /* subv4qi3 */
    case 421:  /* subv2hi3 */
    case 417:  /* addv4qi3 */
    case 416:  /* addv2hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 1;
      break;

    case 403:  /* bc1any2f */
    case 402:  /* bc1any2t */
    case 401:  /* bc1any4f */
    case 400:  /* bc1any4t */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 397:  /* mips_cabs_cond_4s */
    case 396:  /* mips_c_cond_4s */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 4));
      break;

    case 388:  /* vec_extractv2sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 381:  /* *movcc_v2sf_di */
    case 380:  /* *movcc_v2sf_si */
    case 374:  /* *movdf_on_cc */
    case 373:  /* *movsf_on_cc */
    case 372:  /* *movdf_on_di */
    case 371:  /* *movsf_on_di */
    case 370:  /* *movdf_on_si */
    case 369:  /* *movsf_on_si */
    case 368:  /* *movdi_on_cc */
    case 367:  /* *movsi_on_cc */
    case 366:  /* *movdi_on_di */
    case 365:  /* *movsi_on_di */
    case 364:  /* *movdi_on_si */
    case 363:  /* *movsi_on_si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 360:  /* *prefetch_indexed_di */
    case 359:  /* *prefetch_indexed_si */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 2));
      break;

    case 358:  /* prefetch */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 2));
      break;

    case 355:  /* call_value_split */
    case 354:  /* call_value_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 353:  /* call_split */
    case 352:  /* call_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 357:  /* call_value_multiple_split */
    case 356:  /* call_value_multiple_internal */
    case 351:  /* sibcall_value_multiple_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 385:  /* mips_pll_ps */
    case 350:  /* sibcall_value_internal */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 349:  /* sibcall_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 345:  /* eh_set_lr_di */
    case 344:  /* eh_set_lr_si */
      ro[0] = *(ro_loc[0] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 343:  /* return_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 340:  /* tablejumpdi */
    case 339:  /* tablejumpsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      break;

    case 338:  /* indirect_jumpdi */
    case 337:  /* indirect_jumpsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      break;

    case 336:  /* *mips.md:4745 */
    case 335:  /* jump */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 278:  /* *branch_equalitydi_mips16 */
    case 277:  /* *branch_equalitysi_mips16 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 276:  /* *branch_equalitydi_inverted */
    case 275:  /* *branch_equalitysi_inverted */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 274:  /* *branch_equalitydi */
    case 273:  /* *branch_equalitysi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 272:  /* *branch_zerodi_inverted */
    case 271:  /* *branch_zerosi_inverted */
    case 268:  /* branch_fp_inverted */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 270:  /* *branch_zerodi */
    case 269:  /* *branch_zerosi */
    case 267:  /* branch_fp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 377:  /* align */
    case 376:  /* consttable_float */
    case 248:  /* cprestore */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      break;

    case 375:  /* consttable_int */
    case 246:  /* loadgp */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      break;

    case 497:  /* mips_rddsp */
    case 475:  /* mips_repl_ph */
    case 474:  /* mips_repl_qb */
    case 472:  /* mips_bitrev */
    case 445:  /* mips_preceu_ph_qbra */
    case 444:  /* mips_preceu_ph_qbla */
    case 443:  /* mips_preceu_ph_qbr */
    case 442:  /* mips_preceu_ph_qbl */
    case 441:  /* mips_precequ_ph_qbra */
    case 440:  /* mips_precequ_ph_qbla */
    case 439:  /* mips_precequ_ph_qbr */
    case 438:  /* mips_precequ_ph_qbl */
    case 437:  /* mips_preceq_w_phr */
    case 436:  /* mips_preceq_w_phl */
    case 429:  /* mips_raddu_w_qb */
    case 412:  /* mips_recip1_ps */
    case 411:  /* mips_recip1_d */
    case 410:  /* mips_recip1_s */
    case 406:  /* mips_rsqrt1_ps */
    case 405:  /* mips_rsqrt1_d */
    case 404:  /* mips_rsqrt1_s */
    case 392:  /* mips_cvt_ps_pw */
    case 391:  /* mips_cvt_pw_ps */
    case 245:  /* store_df_high */
    case 243:  /* load_df_low */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 226:  /* *sdxc1_di */
    case 225:  /* *sdxc1_di */
    case 224:  /* *swxc1_di */
    case 223:  /* *sdxc1_si */
    case 222:  /* *sdxc1_si */
    case 221:  /* *swxc1_si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 0), 0), 1));
      break;

    case 379:  /* tls_get_tp_di */
    case 378:  /* tls_get_tp_si */
    case 207:  /* *movdi_ra */
    case 206:  /* *movsi_ra */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      break;

    case 238:  /* movv2sf_hardfloat_64bit */
    case 237:  /* *movdf_mips16 */
    case 236:  /* *movdf_softfloat */
    case 235:  /* *movdf_hardfloat_32bit */
    case 234:  /* *movdf_hardfloat_64bit */
    case 233:  /* *movsf_mips16 */
    case 232:  /* *movsf_softfloat */
    case 231:  /* *movsf_hardfloat */
    case 230:  /* *movqi_mips16 */
    case 229:  /* *movqi_internal */
    case 228:  /* *movhi_mips16 */
    case 227:  /* *movhi_internal */
    case 214:  /* movcc */
    case 213:  /* *movsi_mips16 */
    case 212:  /* *movsi_internal */
    case 211:  /* *movdi_64bit_mips16 */
    case 210:  /* *movdi_64bit */
    case 209:  /* *movdi_32bit_mips16 */
    case 208:  /* *movdi_32bit */
    case 197:  /* *got_dispdi */
    case 196:  /* *got_dispsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 191:  /* *lea64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 189:  /* mov_sdr */
    case 188:  /* mov_swr */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 0;
      break;

    case 462:  /* mips_dpsu_h_qbr */
    case 461:  /* mips_dpsu_h_qbl */
    case 460:  /* mips_dpau_h_qbr */
    case 459:  /* mips_dpau_h_qbl */
    case 399:  /* mips_cabs_cond_ps */
    case 398:  /* mips_c_cond_ps */
    case 395:  /* mips_cabs_cond_d */
    case 394:  /* mips_cabs_cond_s */
    case 389:  /* mips_alnv_ps */
    case 382:  /* mips_cond_move_tf_ps */
    case 185:  /* mov_ldr */
    case 184:  /* mov_lwr */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 494:  /* mips_shilo */
    case 487:  /* mips_packrl_ph */
    case 486:  /* mips_pick_qb */
    case 485:  /* mips_pick_ph */
    case 484:  /* mips_cmpgu_le_qb */
    case 483:  /* mips_cmpgu_lt_qb */
    case 482:  /* mips_cmpgu_eq_qb */
    case 473:  /* mips_insv */
    case 453:  /* mips_shra_r_ph */
    case 452:  /* mips_shra_r_w */
    case 451:  /* mips_shra_ph */
    case 450:  /* mips_shrl_qb */
    case 433:  /* mips_precrq_ph_w */
    case 432:  /* mips_precrq_qb_ph */
    case 428:  /* mips_modsub */
    case 415:  /* mips_recip2_ps */
    case 414:  /* mips_recip2_d */
    case 413:  /* mips_recip2_s */
    case 409:  /* mips_rsqrt2_ps */
    case 408:  /* mips_rsqrt2_d */
    case 407:  /* mips_rsqrt2_s */
    case 393:  /* mips_mulr_ps */
    case 390:  /* mips_addr_ps */
    case 348:  /* load_calldi */
    case 347:  /* load_callsi */
    case 244:  /* load_df_high */
    case 242:  /* *mfhilo_di_macc */
    case 241:  /* *mfhilo_si_macc */
    case 240:  /* *mfhilo_di */
    case 239:  /* *mfhilo_si */
    case 201:  /* load_gotdi */
    case 200:  /* load_gotsi */
    case 187:  /* mov_sdl */
    case 186:  /* mov_swl */
    case 183:  /* mov_ldl */
    case 182:  /* mov_lwl */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 181:  /* insvdi */
    case 180:  /* insvsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 179:  /* extzvdi */
    case 178:  /* extzvsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 171:  /* fix_truncsfsi2_macro */
    case 169:  /* fix_truncdfsi2_macro */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 137:  /* *mips.md:2300 */
    case 136:  /* *mips.md:2291 */
    case 135:  /* *mips.md:2282 */
    case 134:  /* *mips.md:2264 */
    case 133:  /* *mips.md:2249 */
    case 132:  /* *mips.md:2236 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 384:  /* mips_puu_ps */
    case 97:  /* *rsqrtv2sfa */
    case 96:  /* *rsqrtdfa */
    case 95:  /* *rsqrtsfa */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 304:  /* *sge_di */
    case 303:  /* *sge_si */
    case 290:  /* *sge_di */
    case 289:  /* *sge_si */
    case 284:  /* *sne_di */
    case 283:  /* *sne_si */
    case 282:  /* *seq_di_mips16 */
    case 281:  /* *seq_si_mips16 */
    case 280:  /* *seq_di */
    case 279:  /* *seq_si */
    case 199:  /* *got_pagedi */
    case 198:  /* *got_pagesi */
    case 193:  /* *xgot_hidi */
    case 192:  /* *xgot_hisi */
    case 190:  /* *lea_high64 */
    case 177:  /* floatdisf2 */
    case 176:  /* floatsisf2 */
    case 175:  /* floatdidf2 */
    case 174:  /* floatsidf2 */
    case 173:  /* fix_truncsfdi2 */
    case 172:  /* fix_truncdfdi2 */
    case 170:  /* fix_truncsfsi2_insn */
    case 168:  /* fix_truncdfsi2_insn */
    case 167:  /* extendsfdf2 */
    case 166:  /* extendqihi2 */
    case 165:  /* *extendhidi2_seh */
    case 164:  /* *extendhisi2_seh */
    case 163:  /* *extendqidi2_seb */
    case 162:  /* *extendqisi2_seb */
    case 161:  /* *extendhidi2 */
    case 160:  /* *extendhisi2 */
    case 159:  /* *extendqidi2 */
    case 158:  /* *extendqisi2 */
    case 157:  /* *extendhidi2_mips16e */
    case 156:  /* *extendhisi2_mips16e */
    case 155:  /* *extendqidi2_mips16e */
    case 154:  /* *extendqisi2_mips16e */
    case 153:  /* extendsidi2 */
    case 152:  /* *zero_extendqihi2_mips16 */
    case 151:  /* *zero_extendqihi2 */
    case 150:  /* *zero_extendhidi2_mips16 */
    case 149:  /* *zero_extendhisi2_mips16 */
    case 148:  /* *zero_extendqidi2_mips16 */
    case 147:  /* *zero_extendqisi2_mips16 */
    case 146:  /* *zero_extendhidi2_mips16e */
    case 145:  /* *zero_extendhisi2_mips16e */
    case 144:  /* *zero_extendqidi2_mips16e */
    case 143:  /* *zero_extendqisi2_mips16e */
    case 142:  /* *zero_extendhidi2 */
    case 141:  /* *zero_extendhisi2 */
    case 140:  /* *zero_extendqidi2 */
    case 139:  /* *zero_extendqisi2 */
    case 138:  /* zero_extendsidi2 */
    case 130:  /* truncdiqi2 */
    case 129:  /* truncdihi2 */
    case 128:  /* truncdisi2 */
    case 127:  /* truncdfsf2 */
    case 112:  /* one_cmpldi2 */
    case 111:  /* one_cmplsi2 */
    case 110:  /* negv2sf2 */
    case 109:  /* negdf2 */
    case 108:  /* negsf2 */
    case 107:  /* negdi2 */
    case 106:  /* negsi2 */
    case 105:  /* clzdi2 */
    case 104:  /* clzsi2 */
    case 103:  /* absv2sf2 */
    case 102:  /* absdf2 */
    case 101:  /* abssf2 */
    case 94:  /* sqrtv2sf2 */
    case 93:  /* sqrtdf2 */
    case 92:  /* sqrtsf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 91:  /* udivmoddi4 */
    case 90:  /* udivmodsi4 */
    case 89:  /* divmoddi4 */
    case 88:  /* divmodsi4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 81:  /* *nmsubv2sf_fastmath */
    case 80:  /* *nmsubdf_fastmath */
    case 79:  /* *nmsubsf_fastmath */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      break;

    case 78:  /* *nmsubv2sf */
    case 77:  /* *nmsubdf */
    case 76:  /* *nmsubsf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 75:  /* *nmaddv2sf_fastmath */
    case 74:  /* *nmadddf_fastmath */
    case 73:  /* *nmaddsf_fastmath */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 72:  /* *nmaddv2sf */
    case 71:  /* *nmadddf */
    case 70:  /* *nmaddsf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 69:  /* *msubv2sf */
    case 68:  /* *msubdf */
    case 67:  /* *msubsf */
    case 66:  /* *maddv2sf */
    case 65:  /* *madddf */
    case 64:  /* *maddsf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 63:  /* *umul_acc_di */
    case 62:  /* *smul_acc_di */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 61:  /* madsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 58:  /* *umulsi3_highpart_neg_mulhi_internal */
    case 57:  /* *smulsi3_highpart_neg_mulhi_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 56:  /* umulsi3_highpart_mulhi_internal */
    case 55:  /* smulsi3_highpart_mulhi_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 60:  /* umuldi3_highpart */
    case 59:  /* smuldi3_highpart */
    case 54:  /* umulsi3_highpart_internal */
    case 53:  /* smulsi3_highpart_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 52:  /* *msacu_di */
    case 51:  /* *msac_di */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 50:  /* *mulsu_di */
    case 49:  /* *muls_di */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      break;

    case 48:  /* *umulsidi3_64bit_parts */
    case 47:  /* *mulsidi3_64bit_parts */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 46:  /* *umulsidi3_64bit */
    case 45:  /* *mulsidi3_64bit */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 44:  /* umulsidi3_32bit_r4000 */
    case 43:  /* mulsidi3_32bit_r4000 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 386:  /* mips_plu_ps */
    case 126:  /* *nordi3 */
    case 125:  /* *norsi3 */
    case 42:  /* umulsidi3_32bit_internal */
    case 41:  /* mulsidi3_32bit_internal */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 40:  /* *muls */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 38:  /* *msac2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 1);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[3] = 0;
      break;

    case 37:  /* *macc2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 0;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[3] = 0;
      break;

    case 39:  /* *mul_sub_si */
    case 36:  /* *msac_using_macc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 35:  /* *msac */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 34:  /* *macc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 33:  /* *mul_acc_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 30:  /* muldi3_internal */
    case 29:  /* mulsi3_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 32:  /* muldi3_r4000 */
    case 31:  /* mulsi3_r4000 */
    case 28:  /* muldi3_mult3 */
    case 27:  /* mulsi3_mult3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 500:  /* mips_lwx */
    case 257:  /* *lshrsi3_extend */
    case 256:  /* *ashrsi3_extend */
    case 255:  /* *ashlsi3_extend */
    case 220:  /* *ldxc1_di */
    case 219:  /* *ldxc1_di */
    case 218:  /* *lwxc1_di */
    case 217:  /* *ldxc1_si */
    case 216:  /* *ldxc1_si */
    case 215:  /* *lwxc1_si */
    case 131:  /* *mips.md:2226 */
    case 100:  /* *rsqrtv2sfb */
    case 99:  /* *rsqrtdfb */
    case 98:  /* *rsqrtsfb */
    case 21:  /* *subsi3_extended */
    case 15:  /* *addsi3_extended_mips16 */
    case 14:  /* *addsi3_extended */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 11:  /* *adddi3_sp2 */
    case 10:  /* *addsi3_sp2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 9:  /* *adddi3_sp1 */
    case 8:  /* *addsi3_sp1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 387:  /* vec_initv2sf_internal */
    case 383:  /* mips_pul_ps */
    case 334:  /* sungt_df */
    case 333:  /* sunge_df */
    case 332:  /* sgt_df */
    case 331:  /* sge_df */
    case 330:  /* sungt_sf */
    case 329:  /* sunge_sf */
    case 328:  /* sgt_sf */
    case 327:  /* sge_sf */
    case 326:  /* sle_df */
    case 325:  /* slt_df */
    case 324:  /* seq_df */
    case 323:  /* sunle_df */
    case 322:  /* sunlt_df */
    case 321:  /* suneq_df */
    case 320:  /* sunordered_df */
    case 319:  /* sle_sf */
    case 318:  /* slt_sf */
    case 317:  /* seq_sf */
    case 316:  /* sunle_sf */
    case 315:  /* sunlt_sf */
    case 314:  /* suneq_sf */
    case 313:  /* sunordered_sf */
    case 312:  /* *sleu_di_mips16 */
    case 311:  /* *sleu_si_mips16 */
    case 310:  /* *sleu_di */
    case 309:  /* *sleu_si */
    case 308:  /* *sltu_di_mips16 */
    case 307:  /* *sltu_si_mips16 */
    case 306:  /* *sltu_di */
    case 305:  /* *sltu_si */
    case 302:  /* *sgtu_di_mips16 */
    case 301:  /* *sgtu_si_mips16 */
    case 300:  /* *sgtu_di */
    case 299:  /* *sgtu_si */
    case 298:  /* *sle_di_mips16 */
    case 297:  /* *sle_si_mips16 */
    case 296:  /* *sle_di */
    case 295:  /* *sle_si */
    case 294:  /* *slt_di_mips16 */
    case 293:  /* *slt_si_mips16 */
    case 292:  /* *slt_di */
    case 291:  /* *slt_si */
    case 288:  /* *sgt_di_mips16 */
    case 287:  /* *sgt_si_mips16 */
    case 286:  /* *sgt_di */
    case 285:  /* *sgt_si */
    case 266:  /* rotrdi3 */
    case 265:  /* rotrsi3 */
    case 264:  /* *mips.md:4167 */
    case 263:  /* *lshrdi3_mips16 */
    case 262:  /* *ashrdi3_mips16 */
    case 261:  /* *ashldi3_mips16 */
    case 260:  /* *lshrsi3_mips16 */
    case 259:  /* *ashrsi3_mips16 */
    case 258:  /* *ashlsi3_mips16 */
    case 254:  /* *lshrdi3 */
    case 253:  /* *ashrdi3 */
    case 252:  /* *ashldi3 */
    case 251:  /* *lshrsi3 */
    case 250:  /* *ashrsi3 */
    case 249:  /* *ashlsi3 */
    case 205:  /* *lowdi_mips16 */
    case 204:  /* *lowsi_mips16 */
    case 203:  /* *lowdi */
    case 202:  /* *lowsi */
    case 195:  /* *xgot_lodi */
    case 194:  /* *xgot_losi */
    case 124:  /* *mips.md:2133 */
    case 123:  /* *mips.md:2133 */
    case 122:  /* *mips.md:2122 */
    case 121:  /* *mips.md:2122 */
    case 120:  /* *iordi3_mips16 */
    case 119:  /* *iorsi3_mips16 */
    case 118:  /* *iordi3 */
    case 117:  /* *iorsi3 */
    case 116:  /* *anddi3_mips16 */
    case 115:  /* *andsi3_mips16 */
    case 114:  /* *anddi3 */
    case 113:  /* *andsi3 */
    case 87:  /* *recipv2sf3 */
    case 86:  /* *recipdf3 */
    case 85:  /* *recipsf3 */
    case 84:  /* *divv2sf3 */
    case 83:  /* *divdf3 */
    case 82:  /* *divsf3 */
    case 26:  /* mulv2sf3 */
    case 25:  /* *muldf3_r4300 */
    case 24:  /* *mulsf3_r4300 */
    case 23:  /* *muldf3 */
    case 22:  /* *mulsf3 */
    case 20:  /* subdi3 */
    case 19:  /* subsi3 */
    case 18:  /* subv2sf3 */
    case 17:  /* subdf3 */
    case 16:  /* subsf3 */
    case 13:  /* *adddi3_mips16 */
    case 12:  /* *addsi3_mips16 */
    case 7:  /* *adddi3 */
    case 6:  /* *addsi3 */
    case 5:  /* addv2sf3 */
    case 4:  /* adddf3 */
    case 3:  /* addsf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 2:  /* *conditional_trapdi */
    case 1:  /* *conditional_trapsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 1));
      break;

    case 362:  /* hazard_nop */
    case 361:  /* nop */
    case 346:  /* exception_receiver */
    case 342:  /* return */
    case 341:  /* blockage */
    case 247:  /* loadgp_blockage */
    case 0:  /* trap */
      break;

    default:
      gcc_unreachable ();
    }
}
