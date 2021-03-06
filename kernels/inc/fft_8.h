/*******************************************************************************
 *                      LTE UPLINK RECEIVER PHY BENCHMARK                      *
 *                                                                             *
 * This file is distributed under the license terms given by LICENSE.TXT       *
 ******************************************************************************/
#ifndef _FFT_H
#define _FFT_H

#include "complex_def.h"

#ifdef __cplusplus
extern "C" {
#endif

void fft(complex* io,int n,complex* w);
void ifft(complex* io,int n,complex* w);

#ifdef __cplusplus
}
#endif


#endif
