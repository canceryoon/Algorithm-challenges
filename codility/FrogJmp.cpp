int solution(int X, int Y, int D) {
  int gap = Y-X;  
  if(gap % D == 0) return (gap / D);
  else return ((gap / D) +1 );
}
