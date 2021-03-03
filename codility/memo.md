MissingInteger(差集合, sort, vector<int>のfilter, vector<int>の最小値検索)
binarygap(10進数 -> 2進数, ltrim, 状態遷移図)
GenomicRangeQuery (valarrayの減算, 要素の出現回数ctrの使用)
MinAvgTwoSlice (和の配列の差からsliceの和を求めるやつ

0をN個持つようなviの初期化: vi hoge = vi(N, 0);
valarrayの場合は逆になる: vli hoge = vli(0, N); // :thinking_face:
valarrayにはapply()、各要素に関数を適用するものがある: varray = varray.apply([](int i) {return i+1; });

valarrayの演算系: https://qiita.com/vs4sh/items/096d6035eb9258e6987a

MinAvgTwoSlice: 数学の問題。任意のsliceは2, あるいは3の大きさのsliceに分解できる。
ある大きさ4以上のsliceの平均が最小であると仮定したとき、それを分解した2, あるいは3の大きさのsliceの平均は明らかに同じく最小か、それより小さい平均となる。
よって、平均を計算していくのは2, 3のサイズのsliceのみでよい。
参考: http://codility-lessons-jp.blogspot.com/2014/07/lesson-3-minavgtwoslice.html
