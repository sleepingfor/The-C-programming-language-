/* a function setbits: return x with the n bits that begin
   at position p set to the rightmost n bits of y,leaving 
   the other bits unchanged                               */
void setbits(unsigned x,int p,int n,unsigned y) {
  y = (y << n+1) | (x >> (p+1-n)) & (~0 << n);
  return ((x >> p+1) << (p+1-n)) | (x & (~0 << p-n));
}
