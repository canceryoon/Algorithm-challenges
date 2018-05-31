int designerPdfViewer(vector<int> h, string word) {
  int area;
  int taller = -1;
  // 'a' == 97
  for(int i = 0; i < word.length(); i++)
    taller = (taller > h[word[i]-97])? taller : h[word[i]-97];

  return taller*word.length();
}
