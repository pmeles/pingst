/*******************************************************************************
 *                      LTE UPLINK RECEIVER PHY BENCHMARK                      *
 *                                                                             *
 * This file is distributed under the license terms given by LICENSE.TXT       *
 ******************************************************************************/

#include "interleave_11.h"

void interleave(complex* in, complex* out, int n){
  int s, c, r, i;
  int cols = 12;
  int rows = 7;
  int steps = n/(rows*cols);

  for (s = 0; s < steps; s++) {
    for (c = 0; c < cols; c++) {
      for (r = 0; r < rows; r++) {
	out[s*rows*cols + r*cols + c] = in[s*rows*cols + c*rows + r];
      }
    }
  }

  // HMS: Temporary fix to make out equal length of in
  for (i=(s-1)*rows*cols + (r-1)*cols + c; i<n; i++)
    out[i] = in[i];
}
