#ifndef _CONFIG_H_
#define _CONFIG_H_

#define USE_COMPACT_KISS_FFT
//#define USE_KISS_FFT

#ifdef _WIN32

//#define		FIXED_POINT

#define 	inline __inline
#define 	restrict

#elif defined (__TCS__)

#define		FIXED_POINT
#define		PREPROCESS_MDF_FLOAT
#define		TM_ASM

#define		TM_DEBUGMEM_ALIGNNMENT						1

#define		TM_PROFILE									1
#define		TM_PROFILE_FIRMEM16							0
#define		TM_PROFILE_IIRMEM16							0
#define		TM_PROFILE_FILTERMEM16						0
#define		TM_PROFILE_VQNBEST							0
#define		TM_PROFILE_VQNBESTSIGN						0
#define		TM_PROFILE_COMPUTEQUANTWEIGHTS				0
#define		TM_PROFILE_LSPQUANT							0
#define		TM_PROFILE_LSPWEIGHTQUANT					0
#define		TM_PROFILE_LSPENFORCEMARGIN					0
#define		TM_PROFILE_LSPTOLPC							0
#define		TM_PROFILE_INNERPROD						0
#define		TM_PROFILE_PITCHXCORR						0
#define		TM_PROFILE_LSP_INTERPOLATE					0
#define		TM_PROFILE_CHEBPOLYEVA						0
#define		TM_PROFILE_COMPUTEWEIGHTEDCODEBOOK			0
#define		TM_PROFILE_TARGETUPDATE						0
#define		TM_PROFILE_SPXAUTOCORR						0
#define		TM_PROFILE_COMPUTEPITCHERROR				0
#define		TM_PROFILE_COMPUTERMS16						0
#define		TM_PROFILE_NORMALIZE16						0
#define		TM_PROFILE_BWLPC							0
#define		TM_PROFILE_HIGHPASS							0
#define		TM_PROFILE_SIGNALMUL						0
#define		TM_PROFILE_SIGNALDIV						0
#define		TM_PROFILE_COMPUTEIMPULSERESPONSE			0
#define		TM_PROFILE_PITCHGAINSEARCH3TAPVQ			0
#define		TM_PROFILE_OPENLOOPNBESTPITCH				0
#define		TM_PROFILE_PREPROCESSANALYSIS				0
#define		TM_PROFILE_UPDATENOISEPROB					0
#define		TM_PROFILE_COMPUTEGAINFLOOR					0
#define		TM_PROFILE_FILTERDCNOTCH16					0
#define		TM_PROFILE_MDFINNERPROD						0
#define		TM_PROFILE_SPECTRALMULACCUM					0
#define		TM_PROFILE_WEIGHTEDSPECTRALMULCONJ			0
#define		TM_PROFILE_MDFADJUSTPROP					0
#define		TM_PROFILE_SPEEXECHOGETRESIDUAL				0
#define		TM_PROFILE_MAXIMIZERANGE					0
#define		TM_PROFILE_RENORMRANGE						0
#define		TM_PROFILE_POWERSPECTRUM					0
#define		TM_PROFILE_QMFSYNTH							0
#define		TM_PROFILE_QMFDECOMP						0
#define		TM_PROFILE_FILTERBANKCOMPUTEBANK32			0
#define		TM_PROFILE_FILTERBANKCOMPUTEPSD16			0

#define		TM_UNROLL									1
#define		TM_UNROLL_FILTER							1
#define		TM_UNROLL_IIR								1
#define		TM_UNROLL_FIR								1
#define		TM_UNROLL_HIGHPASS							1
#define		TM_UNROLL_SIGNALMUL							1
#define		TM_UNROLL_SIGNALDIV							1
#define		TM_UNROLL_VQNBEST							1
#define		TM_UNROLL_VQSIGNNBEST						1
#define		TM_UNROLL__SPXAUTOCORR						1
#define		TM_UNROLL_COMPUTERMS16						1
#define		TM_UNROLL_COMPUTEIMPULSERESPONSE			1
#define		TM_UNROLL_QMFSYNTH							1
#define		TM_UNROLL_PITCHGAINSEARCH3TAPVQ				1
#define		TM_UNROLL_OPENLOOPNBESTPITCH				1
#define		TM_UNROLL_FILTERBANKCOMPUTEBANK32			1
#define		TM_UNROLL_FILTERBANKCOMPUTEPSD16			1
#define		TM_UNROLL_SPEEXPREPROCESSRUN				1
#define		TM_UNROLL_PREPROCESSANALYSIS				1
#define		TM_UNROLL_UPDATENOISEPROB					1
#define		TM_UNROLL_COMPUTEGAINFLOOR					1
#define		TM_UNROLL_SPEEXECHOGETRESIDUAL				1
#define		TM_UNROLL_SPEEXECHOCANCELLATION				1
#define		TM_UNROLL_FILTERDCNOTCH16					1
#define		TM_UNROLL_MDFINNERPRODUCT					1
#define		TM_UNROLL_SPECTRALMULACCUM					1
#define		TM_UNROLL_MDFADJUSTPROP						1

#endif

#endif

