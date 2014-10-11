void inner_product_demo() {
  std::vector<int> v1{1,   2,   3};
  //                  *    *    *
  std::vector<int> v2{4,   5,   6};
  //                  4 + 10 + 18   = 32

  int res = std::inner_product(v1.begin(), v1.end(), v2.begin(), 0);

  std::cout << "res: " << res << std::endl;

  // output
  // res: 32
}