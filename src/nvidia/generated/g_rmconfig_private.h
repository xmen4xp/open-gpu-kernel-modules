// This file is automatically generated by rmconfig - DO NOT EDIT!
//
// private rmconfig generated #defines such as IsG84(),
// RMCFG_FEATURE_ENABLED_STATUS(), etc.
//
// Only for use within resman.
//
// Profile:  shipping-gpus-openrm
// Template: templates/gt_rmconfig_private.h
//
// Chips:    TU10X, GA100, GA102, GA103, GA104, GA106, GA107, AD102, AD103, AD104, AD106, AD107, GH10X
//

#ifndef _G_RMCFG_PRIVATE_H_
#define _G_RMCFG_PRIVATE_H_

//
// CHIP identity macros such as IsGK104()
//

// GF10X
#define IsGF100(pGpu)                  ((0) && (pGpu))
#define IsGF100orBetter(pGpu)          ((1) && (pGpu))

#define IsGF100B(pGpu)                 ((0) && (pGpu))
#define IsGF100BorBetter(pGpu)         ((1) && (pGpu))

#define IsGF104(pGpu)                  ((0) && (pGpu))
#define IsGF104orBetter(pGpu)          ((1) && (pGpu))

#define IsGF104B(pGpu)                 ((0) && (pGpu))
#define IsGF104BorBetter(pGpu)         ((1) && (pGpu))

#define IsGF106(pGpu)                  ((0) && (pGpu))
#define IsGF106orBetter(pGpu)          ((1) && (pGpu))

#define IsGF106B(pGpu)                 ((0) && (pGpu))
#define IsGF106BorBetter(pGpu)         ((1) && (pGpu))

#define IsGF108(pGpu)                  ((0) && (pGpu))
#define IsGF108orBetter(pGpu)          ((1) && (pGpu))

// Any GF10X chip?
#define IsGF10X(pGpu)                  (0 && (pGpu))
#define IsGF10XorBetter(pGpu)          (1 || (pGpu))


// GF11X
#define IsGF110D(pGpu)                 ((0) && (pGpu))
#define IsGF110DorBetter(pGpu)         ((1) && (pGpu))

#define IsGF110(pGpu)                  ((0) && (pGpu))
#define IsGF110orBetter(pGpu)          ((1) && (pGpu))

#define IsGF117(pGpu)                  ((0) && (pGpu))
#define IsGF117orBetter(pGpu)          ((1) && (pGpu))
#define IsGF117MaskRevA01(pGpu)        ((0) && (pGpu))

#define IsGF118(pGpu)                  ((0) && (pGpu))
#define IsGF118orBetter(pGpu)          ((1) && (pGpu))

#define IsGF119(pGpu)                  ((0) && (pGpu))
#define IsGF119orBetter(pGpu)          ((1) && (pGpu))
#define IsGF119MaskRevA01(pGpu)        ((0) && (pGpu))

// Any GF11X chip?
#define IsGF11X(pGpu)                  (0 && (pGpu))
#define IsGF11XorBetter(pGpu)          (1 || (pGpu))


// GF10XF
#define IsGF110F(pGpu)                 ((0) && (pGpu))
#define IsGF110ForBetter(pGpu)         ((1) && (pGpu))

#define IsGF110F2(pGpu)                ((0) && (pGpu))
#define IsGF110F2orBetter(pGpu)        ((1) && (pGpu))

#define IsGF110F3(pGpu)                ((0) && (pGpu))
#define IsGF110F3orBetter(pGpu)        ((1) && (pGpu))

// Any GF10XF chip?
#define IsGF10XF(pGpu)                 (0 && (pGpu))
#define IsGF10XForBetter(pGpu)         (1 || (pGpu))


// GK10X
#define IsGK104(pGpu)                  ((0) && (pGpu))
#define IsGK104orBetter(pGpu)          ((1) && (pGpu))
#define IsGK104MaskRevA01(pGpu)        ((0) && (pGpu))

#define IsGK106(pGpu)                  ((0) && (pGpu))
#define IsGK106orBetter(pGpu)          ((1) && (pGpu))

#define IsGK107(pGpu)                  ((0) && (pGpu))
#define IsGK107orBetter(pGpu)          ((1) && (pGpu))
#define IsGK107MaskRevA01(pGpu)        ((0) && (pGpu))

#define IsGK20A(pGpu)                  ((0) && (pGpu))
#define IsGK20AorBetter(pGpu)          ((1) && (pGpu))

// Any GK10X chip?
#define IsGK10X(pGpu)                  (0 && (pGpu))
#define IsGK10XorBetter(pGpu)          (1 || (pGpu))


// GK11X
#define IsGK110(pGpu)                  ((0) && (pGpu))
#define IsGK110orBetter(pGpu)          ((1) && (pGpu))

#define IsGK110B(pGpu)                 ((0) && (pGpu))
#define IsGK110BorBetter(pGpu)         ((1) && (pGpu))

#define IsGK110C(pGpu)                 ((0) && (pGpu))
#define IsGK110CorBetter(pGpu)         ((1) && (pGpu))

// Any GK11X chip?
#define IsGK11X(pGpu)                  (0 && (pGpu))
#define IsGK11XorBetter(pGpu)          (1 || (pGpu))


// GK20X
#define IsGK208(pGpu)                  ((0) && (pGpu))
#define IsGK208orBetter(pGpu)          ((1) && (pGpu))

#define IsGK208S(pGpu)                 ((0) && (pGpu))
#define IsGK208SorBetter(pGpu)         ((1) && (pGpu))

// Any GK20X chip?
#define IsGK20X(pGpu)                  (0 && (pGpu))
#define IsGK20XorBetter(pGpu)          (1 || (pGpu))


// GM10X
#define IsGM107(pGpu)                  ((0) && (pGpu))
#define IsGM107orBetter(pGpu)          ((1) && (pGpu))
#define IsGM107MaskRevA01(pGpu)        ((0) && (pGpu))

#define IsGM108(pGpu)                  ((0) && (pGpu))
#define IsGM108orBetter(pGpu)          ((1) && (pGpu))
#define IsGM108MaskRevA01(pGpu)        ((0) && (pGpu))

// Any GM10X chip?
#define IsGM10X(pGpu)                  (0 && (pGpu))
#define IsGM10XorBetter(pGpu)          (1 || (pGpu))


// GM20X
#define IsGM200(pGpu)                  ((0) && (pGpu))
#define IsGM200orBetter(pGpu)          ((1) && (pGpu))

#define IsGM204(pGpu)                  ((0) && (pGpu))
#define IsGM204orBetter(pGpu)          ((1) && (pGpu))

#define IsGM206(pGpu)                  ((0) && (pGpu))
#define IsGM206orBetter(pGpu)          ((1) && (pGpu))

// Any GM20X chip?
#define IsGM20X(pGpu)                  (0 && (pGpu))
#define IsGM20XorBetter(pGpu)          (1 || (pGpu))


// GP10X
#define IsGP100(pGpu)                  ((0) && (pGpu))
#define IsGP100orBetter(pGpu)          ((1) && (pGpu))

#define IsGP102(pGpu)                  ((0) && (pGpu))
#define IsGP102orBetter(pGpu)          ((1) && (pGpu))

#define IsGP104(pGpu)                  ((0) && (pGpu))
#define IsGP104orBetter(pGpu)          ((1) && (pGpu))

#define IsGP106(pGpu)                  ((0) && (pGpu))
#define IsGP106orBetter(pGpu)          ((1) && (pGpu))

#define IsGP107(pGpu)                  ((0) && (pGpu))
#define IsGP107orBetter(pGpu)          ((1) && (pGpu))

#define IsGP108(pGpu)                  ((0) && (pGpu))
#define IsGP108orBetter(pGpu)          ((1) && (pGpu))

// Any GP10X chip?
#define IsGP10X(pGpu)                  (0 && (pGpu))
#define IsGP10XorBetter(pGpu)          (1 || (pGpu))


// GV10X
#define IsGV100(pGpu)                  ((0) && (pGpu))
#define IsGV100orBetter(pGpu)          ((1) && (pGpu))

// Any GV10X chip?
#define IsGV10X(pGpu)                  (0 && (pGpu))
#define IsGV10XorBetter(pGpu)          (1 || (pGpu))


// GV11X
#define IsGV11B(pGpu)                  ((0) && (pGpu))
#define IsGV11BorBetter(pGpu)          ((1) && (pGpu))

// Any GV11X chip?
#define IsGV11X(pGpu)                  (0 && (pGpu))
#define IsGV11XorBetter(pGpu)          (1 || (pGpu))


// TU10X
#define IsTU102(pGpu)                  rmcfg_IsTU102(pGpu)
#define IsTU102orBetter(pGpu)          ((1) && (pGpu))

#define IsTU104(pGpu)                  rmcfg_IsTU104(pGpu)
#define IsTU104orBetter(pGpu)          rmcfg_IsTU104orBetter(pGpu)

#define IsTU106(pGpu)                  rmcfg_IsTU106(pGpu)
#define IsTU106orBetter(pGpu)          rmcfg_IsTU106orBetter(pGpu)

#define IsTU116(pGpu)                  rmcfg_IsTU116(pGpu)
#define IsTU116orBetter(pGpu)          rmcfg_IsTU116orBetter(pGpu)

#define IsTU117(pGpu)                  rmcfg_IsTU117(pGpu)
#define IsTU117orBetter(pGpu)          rmcfg_IsTU117orBetter(pGpu)

// Any TU10X chip?
#define IsTU10X(pGpu)                  rmcfg_IsTU10X(pGpu)
#define IsTU10XorBetter(pGpu)          (1 || (pGpu))


// GA10X
#define IsGA100(pGpu)                  rmcfg_IsGA100(pGpu)
#define IsGA100orBetter(pGpu)          rmcfg_IsGA100orBetter(pGpu)

#define IsGA102(pGpu)                  rmcfg_IsGA102(pGpu)
#define IsGA102orBetter(pGpu)          rmcfg_IsGA102orBetter(pGpu)

#define IsGA103(pGpu)                  rmcfg_IsGA103(pGpu)
#define IsGA103orBetter(pGpu)          rmcfg_IsGA103orBetter(pGpu)

#define IsGA104(pGpu)                  rmcfg_IsGA104(pGpu)
#define IsGA104orBetter(pGpu)          rmcfg_IsGA104orBetter(pGpu)

#define IsGA106(pGpu)                  rmcfg_IsGA106(pGpu)
#define IsGA106orBetter(pGpu)          rmcfg_IsGA106orBetter(pGpu)

#define IsGA107(pGpu)                  rmcfg_IsGA107(pGpu)
#define IsGA107orBetter(pGpu)          rmcfg_IsGA107orBetter(pGpu)

#define IsGA10B(pGpu)                  ((0) && (pGpu))
#define IsGA10BorBetter(pGpu)          rmcfg_IsGA10BorBetter(pGpu)

// Any GA10X chip?
#define IsGA10X(pGpu)                  rmcfg_IsGA10X(pGpu)
#define IsGA10XorBetter(pGpu)          rmcfg_IsGA10XorBetter(pGpu)


// GA10XF
#define IsGA102F(pGpu)                 ((0) && (pGpu))
#define IsGA102ForBetter(pGpu)         rmcfg_IsGA102ForBetter(pGpu)

// Any GA10XF chip?
#define IsGA10XF(pGpu)                 (0 && (pGpu))
#define IsGA10XForBetter(pGpu)         rmcfg_IsGA10XForBetter(pGpu)


// AD10X
#define IsAD102(pGpu)                  rmcfg_IsAD102(pGpu)
#define IsAD102orBetter(pGpu)          rmcfg_IsAD102orBetter(pGpu)

#define IsAD103(pGpu)                  rmcfg_IsAD103(pGpu)
#define IsAD103orBetter(pGpu)          rmcfg_IsAD103orBetter(pGpu)

#define IsAD104(pGpu)                  rmcfg_IsAD104(pGpu)
#define IsAD104orBetter(pGpu)          rmcfg_IsAD104orBetter(pGpu)

#define IsAD106(pGpu)                  rmcfg_IsAD106(pGpu)
#define IsAD106orBetter(pGpu)          rmcfg_IsAD106orBetter(pGpu)

#define IsAD107(pGpu)                  rmcfg_IsAD107(pGpu)
#define IsAD107orBetter(pGpu)          rmcfg_IsAD107orBetter(pGpu)

// Any AD10X chip?
#define IsAD10X(pGpu)                  rmcfg_IsAD10X(pGpu)
#define IsAD10XorBetter(pGpu)          rmcfg_IsAD10XorBetter(pGpu)


// GH10X
#define IsGH100(pGpu)                  rmcfg_IsGH100(pGpu)
#define IsGH100orBetter(pGpu)          rmcfg_IsGH100orBetter(pGpu)

// Any GH10X chip?
#define IsGH10X(pGpu)                  rmcfg_IsGH10X(pGpu)
#define IsGH10XorBetter(pGpu)          rmcfg_IsGH10XorBetter(pGpu)


// GH20X
#define IsGH202(pGpu)                  ((0) && (pGpu))
#define IsGH202orBetter(pGpu)          ((0) && (pGpu))

// Any GH20X chip?
#define IsGH20X(pGpu)                  (0 && (pGpu))
#define IsGH20XorBetter(pGpu)          (0 && (pGpu))


// T12X
#define IsT001_FERMI_NOT_EXIST(pGpu)   ((0) && (pGpu))
#define IsT001_FERMI_NOT_EXISTorBetter(pGpu) ((0) && (pGpu))

#define IsT124(pGpu)                   ((0) && (pGpu))
#define IsT124orBetter(pGpu)           ((0) && (pGpu))

// Any T12X chip?
#define IsT12X(pGpu)                   (0 && (pGpu))
#define IsT12XorBetter(pGpu)           (0 && (pGpu))


// T13X
#define IsT132(pGpu)                   ((0) && (pGpu))
#define IsT132orBetter(pGpu)           ((0) && (pGpu))

// Any T13X chip?
#define IsT13X(pGpu)                   (0 && (pGpu))
#define IsT13XorBetter(pGpu)           (0 && (pGpu))


// T21X
#define IsT210(pGpu)                   ((0) && (pGpu))
#define IsT210orBetter(pGpu)           ((0) && (pGpu))

// Any T21X chip?
#define IsT21X(pGpu)                   (0 && (pGpu))
#define IsT21XorBetter(pGpu)           (0 && (pGpu))


// T18X
#define IsT186(pGpu)                   ((0) && (pGpu))
#define IsT186orBetter(pGpu)           ((0) && (pGpu))

// Any T18X chip?
#define IsT18X(pGpu)                   (0 && (pGpu))
#define IsT18XorBetter(pGpu)           (0 && (pGpu))


// T19X
#define IsT194(pGpu)                   ((0) && (pGpu))
#define IsT194orBetter(pGpu)           ((0) && (pGpu))

#define IsT002_TURING_NOT_EXIST(pGpu)  ((0) && (pGpu))
#define IsT002_TURING_NOT_EXISTorBetter(pGpu) ((0) && (pGpu))

// Any T19X chip?
#define IsT19X(pGpu)                   (0 && (pGpu))
#define IsT19XorBetter(pGpu)           (0 && (pGpu))


// T23XG
#define IsT234(pGpu)                   ((0) && (pGpu))
#define IsT234orBetter(pGpu)           ((0) && (pGpu))

#define IsT003_ADA_NOT_EXIST(pGpu)     ((0) && (pGpu))
#define IsT003_ADA_NOT_EXISTorBetter(pGpu) ((0) && (pGpu))

#define IsT004_HOPPER_NOT_EXIST(pGpu)  ((0) && (pGpu))
#define IsT004_HOPPER_NOT_EXISTorBetter(pGpu) ((0) && (pGpu))

// Any T23XG chip?
#define IsT23XG(pGpu)                  (0 && (pGpu))
#define IsT23XGorBetter(pGpu)          (0 && (pGpu))


// T23XD
#define IsT234D(pGpu)                  ((0) && (pGpu))
#define IsT234DorBetter(pGpu)          ((0) && (pGpu))

// Any T23XD chip?
#define IsT23XD(pGpu)                  (0 && (pGpu))
#define IsT23XDorBetter(pGpu)          (0 && (pGpu))


// SIMS
#define IsAMODEL(pGpu)                 ((0) && (pGpu))
#define IsAMODELorBetter(pGpu)         ((0) && (pGpu))

// Any SIMS chip?
#define IsSIMS(pGpu)                   (0 && (pGpu))
#define IsSIMSorBetter(pGpu)           (0 && (pGpu))


// Any CLASSIC_GPUS chip?
#define IsCLASSIC_GPUS(pGpu)           (1 || (pGpu))
#define IsCLASSIC_GPUSorBetter(pGpu)   (1 || (pGpu))


// Any dFERMI chip?
#define IsdFERMI(pGpu)                 (0 && (pGpu))
#define IsdFERMIorBetter(pGpu)         (1 || (pGpu))


// Any FERMI chip?
#define IsFERMI(pGpu)                  (IsFERMI_CLASSIC_GPUS(pGpu) || IsFERMI_TEGRA_BIG_GPUS(pGpu))
#define IsFERMIorBetter(pGpu)          (IsFERMI_CLASSIC_GPUSorBetter(pGpu) || IsFERMI_TEGRA_BIG_GPUSorBetter(pGpu))


// Any FERMI_CLASSIC_GPUS chip?
#define IsFERMI_CLASSIC_GPUS(pGpu)     (0 && (pGpu))
#define IsFERMI_CLASSIC_GPUSorBetter(pGpu) (1 || (pGpu))


// Any DISPLAYLESS chip?
#define IsDISPLAYLESS(pGpu)            (IsDISPLAYLESS_CLASSIC_GPUS(pGpu) || IsDISPLAYLESS_TEGRA_BIG_GPUS(pGpu))


// Any DISPLAYLESS_CLASSIC_GPUS chip?
#define IsDISPLAYLESS_CLASSIC_GPUS(pGpu) rmcfg_IsDISPLAYLESS_CLASSIC_GPUS(pGpu)
#define IsDISPLAYLESS_CLASSIC_GPUSorBetter(pGpu) rmcfg_IsDISPLAYLESS_CLASSIC_GPUSorBetter(pGpu)


// Any dKEPLER chip?
#define IsdKEPLER(pGpu)                (0 && (pGpu))
#define IsdKEPLERorBetter(pGpu)        (1 || (pGpu))


// Any KEPLER chip?
#define IsKEPLER(pGpu)                 (IsKEPLER_CLASSIC_GPUS(pGpu) || IsKEPLER_TEGRA_BIG_GPUS(pGpu))
#define IsKEPLERorBetter(pGpu)         (IsKEPLER_CLASSIC_GPUSorBetter(pGpu) || IsKEPLER_TEGRA_BIG_GPUSorBetter(pGpu))


// Any KEPLER_CLASSIC_GPUS chip?
#define IsKEPLER_CLASSIC_GPUS(pGpu)    (0 && (pGpu))
#define IsKEPLER_CLASSIC_GPUSorBetter(pGpu) (1 || (pGpu))


// Any dMAXWELL chip?
#define IsdMAXWELL(pGpu)               (0 && (pGpu))
#define IsdMAXWELLorBetter(pGpu)       (1 || (pGpu))


// Any MAXWELL chip?
#define IsMAXWELL(pGpu)                (IsMAXWELL_CLASSIC_GPUS(pGpu) || IsMAXWELL_TEGRA_BIG_GPUS(pGpu))
#define IsMAXWELLorBetter(pGpu)        (IsMAXWELL_CLASSIC_GPUSorBetter(pGpu) || IsMAXWELL_TEGRA_BIG_GPUSorBetter(pGpu))


// Any MAXWELL_CLASSIC_GPUS chip?
#define IsMAXWELL_CLASSIC_GPUS(pGpu)   (0 && (pGpu))
#define IsMAXWELL_CLASSIC_GPUSorBetter(pGpu) (1 || (pGpu))


// Any dPASCAL chip?
#define IsdPASCAL(pGpu)                (0 && (pGpu))
#define IsdPASCALorBetter(pGpu)        (1 || (pGpu))


// Any PASCAL chip?
#define IsPASCAL(pGpu)                 (IsPASCAL_CLASSIC_GPUS(pGpu) || IsPASCAL_TEGRA_BIG_GPUS(pGpu))
#define IsPASCALorBetter(pGpu)         (IsPASCAL_CLASSIC_GPUSorBetter(pGpu) || IsPASCAL_TEGRA_BIG_GPUSorBetter(pGpu))


// Any PASCAL_CLASSIC_GPUS chip?
#define IsPASCAL_CLASSIC_GPUS(pGpu)    (0 && (pGpu))
#define IsPASCAL_CLASSIC_GPUSorBetter(pGpu) (1 || (pGpu))


// Any dVOLTA chip?
#define IsdVOLTA(pGpu)                 (0 && (pGpu))
#define IsdVOLTAorBetter(pGpu)         (1 || (pGpu))


// Any VOLTA chip?
#define IsVOLTA(pGpu)                  (IsVOLTA_CLASSIC_GPUS(pGpu) || IsVOLTA_TEGRA_BIG_GPUS(pGpu))
#define IsVOLTAorBetter(pGpu)          (IsVOLTA_CLASSIC_GPUSorBetter(pGpu) || IsVOLTA_TEGRA_BIG_GPUSorBetter(pGpu))


// Any VOLTA_CLASSIC_GPUS chip?
#define IsVOLTA_CLASSIC_GPUS(pGpu)     (0 && (pGpu))
#define IsVOLTA_CLASSIC_GPUSorBetter(pGpu) (1 || (pGpu))


// Any dTURING chip?
#define IsdTURING(pGpu)                rmcfg_IsdTURING(pGpu)
#define IsdTURINGorBetter(pGpu)        (1 || (pGpu))


// Any TURING chip?
#define IsTURING(pGpu)                 (IsTURING_CLASSIC_GPUS(pGpu) || IsTURING_TEGRA_BIG_GPUS(pGpu))
#define IsTURINGorBetter(pGpu)         (IsTURING_CLASSIC_GPUSorBetter(pGpu) || IsTURING_TEGRA_BIG_GPUSorBetter(pGpu))


// Any TURING_CLASSIC_GPUS chip?
#define IsTURING_CLASSIC_GPUS(pGpu)    rmcfg_IsTURING_CLASSIC_GPUS(pGpu)
#define IsTURING_CLASSIC_GPUSorBetter(pGpu) (1 || (pGpu))


// Any dAMPERE chip?
#define IsdAMPERE(pGpu)                rmcfg_IsdAMPERE(pGpu)
#define IsdAMPEREorBetter(pGpu)        rmcfg_IsdAMPEREorBetter(pGpu)


// Any AMPERE chip?
#define IsAMPERE(pGpu)                 (IsAMPERE_CLASSIC_GPUS(pGpu) || IsAMPERE_TEGRA_BIG_GPUS(pGpu))
#define IsAMPEREorBetter(pGpu)         (IsAMPERE_CLASSIC_GPUSorBetter(pGpu) || IsAMPERE_TEGRA_BIG_GPUSorBetter(pGpu))


// Any AMPERE_CLASSIC_GPUS chip?
#define IsAMPERE_CLASSIC_GPUS(pGpu)    rmcfg_IsAMPERE_CLASSIC_GPUS(pGpu)
#define IsAMPERE_CLASSIC_GPUSorBetter(pGpu) rmcfg_IsAMPERE_CLASSIC_GPUSorBetter(pGpu)


// Any TEGRA_DGPU_AMPERE chip?
#define IsTEGRA_DGPU_AMPERE(pGpu)      (0 && (pGpu))


// Any TEGRA_DGPU chip?
#define IsTEGRA_DGPU(pGpu)             (0 && (pGpu))


// Any DFPGA chip?
#define IsDFPGA(pGpu)                  (0 && (pGpu))


// Any dADA chip?
#define IsdADA(pGpu)                   rmcfg_IsdADA(pGpu)
#define IsdADAorBetter(pGpu)           rmcfg_IsdADAorBetter(pGpu)


// Any ADA chip?
#define IsADA(pGpu)                    (IsADA_CLASSIC_GPUS(pGpu) || IsADA_TEGRA_BIG_GPUS(pGpu))
#define IsADAorBetter(pGpu)            (IsADA_CLASSIC_GPUSorBetter(pGpu) || IsADA_TEGRA_BIG_GPUSorBetter(pGpu))


// Any ADA_CLASSIC_GPUS chip?
#define IsADA_CLASSIC_GPUS(pGpu)       rmcfg_IsADA_CLASSIC_GPUS(pGpu)
#define IsADA_CLASSIC_GPUSorBetter(pGpu) rmcfg_IsADA_CLASSIC_GPUSorBetter(pGpu)


// Any dHOPPER chip?
#define IsdHOPPER(pGpu)                rmcfg_IsdHOPPER(pGpu)
#define IsdHOPPERorBetter(pGpu)        rmcfg_IsdHOPPERorBetter(pGpu)


// Any HOPPER chip?
#define IsHOPPER(pGpu)                 (IsHOPPER_CLASSIC_GPUS(pGpu) || IsHOPPER_TEGRA_BIG_GPUS(pGpu))
#define IsHOPPERorBetter(pGpu)         (IsHOPPER_CLASSIC_GPUSorBetter(pGpu) || IsHOPPER_TEGRA_BIG_GPUSorBetter(pGpu))


// Any HOPPER_CLASSIC_GPUS chip?
#define IsHOPPER_CLASSIC_GPUS(pGpu)    rmcfg_IsHOPPER_CLASSIC_GPUS(pGpu)
#define IsHOPPER_CLASSIC_GPUSorBetter(pGpu) rmcfg_IsHOPPER_CLASSIC_GPUSorBetter(pGpu)


// Any TEGRA_DISP chip?
#define IsTEGRA_DISP(pGpu)             (IsTEGRA_DISP_CLASSIC_GPUS(pGpu) || IsTEGRA_DISP_TEGRA_NVDISP_GPUS(pGpu))
#define IsTEGRA_DISPorBetter(pGpu)     (IsTEGRA_DISP_CLASSIC_GPUSorBetter(pGpu) || IsTEGRA_DISP_TEGRA_NVDISP_GPUSorBetter(pGpu))


// Any TEGRA_BIG_GPUS chip?
#define IsTEGRA_BIG_GPUS(pGpu)         (0 && (pGpu))
#define IsTEGRA_BIG_GPUSorBetter(pGpu) (0 && (pGpu))


// Any FERMI_TEGRA_BIG_GPUS chip?
#define IsFERMI_TEGRA_BIG_GPUS(pGpu)   (0 && (pGpu))
#define IsFERMI_TEGRA_BIG_GPUSorBetter(pGpu) (0 && (pGpu))


// Any TEGRA chip?
#define IsTEGRA(pGpu)                  (IsTEGRA_TEGRA_BIG_GPUS(pGpu) || IsTEGRA_TEGRA_NVDISP_GPUS(pGpu))
#define IsTEGRAorBetter(pGpu)          (IsTEGRA_TEGRA_BIG_GPUSorBetter(pGpu) || IsTEGRA_TEGRA_NVDISP_GPUSorBetter(pGpu))


// Any TEGRA_TEGRA_BIG_GPUS chip?
#define IsTEGRA_TEGRA_BIG_GPUS(pGpu)   (0 && (pGpu))
#define IsTEGRA_TEGRA_BIG_GPUSorBetter(pGpu) (0 && (pGpu))


// Any tKEPLER chip?
#define IstKEPLER(pGpu)                (0 && (pGpu))
#define IstKEPLERorBetter(pGpu)        (0 && (pGpu))


// Any KEPLER_TEGRA_BIG_GPUS chip?
#define IsKEPLER_TEGRA_BIG_GPUS(pGpu)  (0 && (pGpu))
#define IsKEPLER_TEGRA_BIG_GPUSorBetter(pGpu) (0 && (pGpu))


// Any tMAXWELL chip?
#define IstMAXWELL(pGpu)               (0 && (pGpu))
#define IstMAXWELLorBetter(pGpu)       (0 && (pGpu))


// Any MAXWELL_TEGRA_BIG_GPUS chip?
#define IsMAXWELL_TEGRA_BIG_GPUS(pGpu) (0 && (pGpu))
#define IsMAXWELL_TEGRA_BIG_GPUSorBetter(pGpu) (0 && (pGpu))


// Any tPASCAL chip?
#define IstPASCAL(pGpu)                (0 && (pGpu))
#define IstPASCALorBetter(pGpu)        (0 && (pGpu))


// Any PASCAL_TEGRA_BIG_GPUS chip?
#define IsPASCAL_TEGRA_BIG_GPUS(pGpu)  (0 && (pGpu))
#define IsPASCAL_TEGRA_BIG_GPUSorBetter(pGpu) (0 && (pGpu))


// Any DISPLAYLESS_TEGRA_BIG_GPUS chip?
#define IsDISPLAYLESS_TEGRA_BIG_GPUS(pGpu) (0 && (pGpu))
#define IsDISPLAYLESS_TEGRA_BIG_GPUSorBetter(pGpu) (0 && (pGpu))


// Any tVOLTA chip?
#define IstVOLTA(pGpu)                 (0 && (pGpu))
#define IstVOLTAorBetter(pGpu)         (0 && (pGpu))


// Any VOLTA_TEGRA_BIG_GPUS chip?
#define IsVOLTA_TEGRA_BIG_GPUS(pGpu)   (0 && (pGpu))
#define IsVOLTA_TEGRA_BIG_GPUSorBetter(pGpu) (0 && (pGpu))


// Any TURING_TEGRA_BIG_GPUS chip?
#define IsTURING_TEGRA_BIG_GPUS(pGpu)  (0 && (pGpu))
#define IsTURING_TEGRA_BIG_GPUSorBetter(pGpu) (0 && (pGpu))


// Any T23X chip?
#define IsT23X(pGpu)                   (IsT23X_TEGRA_BIG_GPUS(pGpu) || IsT23X_TEGRA_NVDISP_GPUS(pGpu))
#define IsT23XorBetter(pGpu)           (IsT23X_TEGRA_BIG_GPUSorBetter(pGpu) || IsT23X_TEGRA_NVDISP_GPUSorBetter(pGpu))


// Any T23X_TEGRA_BIG_GPUS chip?
#define IsT23X_TEGRA_BIG_GPUS(pGpu)    (0 && (pGpu))
#define IsT23X_TEGRA_BIG_GPUSorBetter(pGpu) (0 && (pGpu))


// Any tAMPERE chip?
#define IstAMPERE(pGpu)                (0 && (pGpu))
#define IstAMPEREorBetter(pGpu)        (0 && (pGpu))


// Any AMPERE_TEGRA_BIG_GPUS chip?
#define IsAMPERE_TEGRA_BIG_GPUS(pGpu)  (0 && (pGpu))
#define IsAMPERE_TEGRA_BIG_GPUSorBetter(pGpu) (0 && (pGpu))


// Any ADA_TEGRA_BIG_GPUS chip?
#define IsADA_TEGRA_BIG_GPUS(pGpu)     (0 && (pGpu))
#define IsADA_TEGRA_BIG_GPUSorBetter(pGpu) (0 && (pGpu))


// Any HOPPER_TEGRA_BIG_GPUS chip?
#define IsHOPPER_TEGRA_BIG_GPUS(pGpu)  (0 && (pGpu))
#define IsHOPPER_TEGRA_BIG_GPUSorBetter(pGpu) (0 && (pGpu))


// Any TEGRA_NVDISP_GPUS chip?
#define IsTEGRA_NVDISP_GPUS(pGpu)      (0 && (pGpu))
#define IsTEGRA_NVDISP_GPUSorBetter(pGpu) (0 && (pGpu))


// Any T23X_TEGRA_NVDISP_GPUS chip?
#define IsT23X_TEGRA_NVDISP_GPUS(pGpu) (0 && (pGpu))
#define IsT23X_TEGRA_NVDISP_GPUSorBetter(pGpu) (0 && (pGpu))


// Any TEGRA_TEGRA_NVDISP_GPUS chip?
#define IsTEGRA_TEGRA_NVDISP_GPUS(pGpu) (0 && (pGpu))
#define IsTEGRA_TEGRA_NVDISP_GPUSorBetter(pGpu) (0 && (pGpu))


// Any TEGRA_DISP_TEGRA_NVDISP_GPUS chip?
#define IsTEGRA_DISP_TEGRA_NVDISP_GPUS(pGpu) (0 && (pGpu))
#define IsTEGRA_DISP_TEGRA_NVDISP_GPUSorBetter(pGpu) (0 && (pGpu))


// Any SIMULATION_GPUS chip?
#define IsSIMULATION_GPUS(pGpu)        (0 && (pGpu))
#define IsSIMULATION_GPUSorBetter(pGpu) (0 && (pGpu))





//
// Enable/disable printing of entity names (class, engine, etc.)
//
#define RMCFG_ENTITY_NAME(entity) ""

//
// Macros to help with enabling or disabling code based on whether
// a feature (or chip or engine or ...) is enabled or not.
// Also have RMCFG_CHIP_), RMCFG_FEATURE_ENABLED(, etc
// from rmconfig.h.
//
// NOTE: these definitions are "flat" (ie they don't use some more general
//       RMCFG_ENABLED(CHIP,X) form because the pre-processor would re-evaluate
//       the expansion of the item (chip, feature, class, api).  For classes,
//       at least, this is a problem since we would end up with class number
//       instead of its name...

// hack: MSVC is not C99 compliant

// CHIP's
#define RMCFG_CHIP_ENABLED_OR_BAIL(W)                \
     do {                                           \
         if ( ! RMCFG_CHIP_##W)                      \
         {                                          \
             NV_PRINTF(LEVEL_ERROR, "CHIP" RMCFG_ENTITY_NAME(#W) " not enabled, bailing\n"); \
             return NV_ERR_NOT_SUPPORTED;           \
          }                                          \
      } while(0)
 #define RMCFG_CHIP_ENABLED_OR_ASSERT_AND_BAIL(W)     \
      do {                                           \
          if ( ! RMCFG_CHIP_##W)                      \
          {                                          \
              NV_PRINTF(LEVEL_ERROR, "CHIP" RMCFG_ENTITY_NAME(#W) " not enabled, assert and bail\n"); \
             NV_ASSERT_PRECOMP(RMCFG_CHIP_##W);              \
             return NV_ERR_NOT_SUPPORTED;           \
         }                                          \
     } while(0)

// FEATURE's
#define RMCFG_FEATURE_ENABLED_OR_BAIL(W)            \
     do {                                           \
         if ( ! RMCFG_FEATURE_##W)                  \
         {                                          \
             NV_PRINTF(LEVEL_ERROR, "FEATURE" RMCFG_ENTITY_NAME(#W) " not enabled, bailing\n"); \
             return NV_ERR_NOT_SUPPORTED;           \
         }                                          \
     } while(0)
#define RMCFG_FEATURE_ENABLED_OR_ASSERT_AND_BAIL(W) \
     do {                                           \
         if ( ! RMCFG_FEATURE_##W)                  \
         {                                          \
             NV_PRINTF(LEVEL_ERROR, "FEATURE" RMCFG_ENTITY_NAME(#W) " not enabled, assert and bail\n"); \
             NV_ASSERT_PRECOMP(RMCFG_FEATURE_##W);          \
             return NV_ERR_NOT_SUPPORTED;           \
         }                                          \
     } while(0)

#define RMCFG_FEATURE_PLATFORM_P (RMCFG_FEATURE_PLATFORM_##P)

// MODULE's
#define RMCFG_MODULE_ENABLED_OR_BAIL(W)             \
              do {                                           \
                  if ( ! RMCFG_MODULE_##W)                   \
                  {                                          \
                      NV_PRINTF(LEVEL_ERROR, "MODULE" RMCFG_ENTITY_NAME(#W) " not enabled, bailing\n"); \
                      return NV_ERR_NOT_SUPPORTED;           \
                  }                                          \
              } while(0)
#define RMCFG_MODULE_ENABLED_OR_ASSERT_AND_BAIL(W)  \
              do {                                           \
                  if ( ! RMCFG_MODULE_##W)                   \
                  {                                          \
                      NV_PRINTF(LEVEL_ERROR, "MODULE" RMCFG_ENTITY_NAME(#W) " not enabled, assert and bail\n"); \
                      NV_ASSERT_PRECOMP(RMCFG_MODULE_##W);           \
                      return NV_ERR_NOT_SUPPORTED;           \
                  }                                          \
              } while(0)


// CLASS's
#define RMCFG_CLASS_ENABLED_OR_BAIL(W)              \
     do {                                           \
         if ( ! RMCFG_CLASS_##W)                    \
         {                                          \
             NV_PRINTF(LEVEL_ERROR, "CLASS" RMCFG_ENTITY_NAME(#W) " not enabled, bailing\n"); \
             return NV_ERR_NOT_SUPPORTED;           \
         }                                          \
     } while(0)
#define RMCFG_CLASS_ENABLED_OR_ASSERT_AND_BAIL(W)   \
     do {                                           \
         if ( ! RMCFG_CLASS_##W)                    \
         {                                          \
             NV_PRINTF(LEVEL_ERROR, "CLASS" RMCFG_ENTITY_NAME(#W) " not enabled, assert and bail\n"); \
             NV_ASSERT_PRECOMP(RMCFG_CLASS_##W);            \
             return NV_ERR_NOT_SUPPORTED;           \
         }                                          \
     } while(0)

// API's
#define RMCFG_API_ENABLED_OR_BAIL(W)                \
     do {                                           \
         if ( ! RMCFG_API_##W)                      \
         {                                          \
             NV_PRINTF(LEVEL_ERROR, "API" RMCFG_ENTITY_NAME(#W) " not enabled, bailing\n"); \
             return NV_ERR_NOT_SUPPORTED;           \
         }                                          \
     } while(0)
#define RMCFG_API_ENABLED_OR_ASSERT_AND_BAIL(W)     \
     do {                                           \
         if ( ! RMCFG_API_##W)                      \
         {                                          \
             NV_PRINTF(LEVEL_ERROR, "API" RMCFG_ENTITY_NAME(#W) " not enabled, assert and bail\n"); \
             NV_ASSERT_PRECOMP(RMCFG_API_##W);              \
             return NV_ERR_NOT_SUPPORTED;           \
         }                                          \
     } while(0)



#endif  // _G_RMCFG_PRIVATE_H_
