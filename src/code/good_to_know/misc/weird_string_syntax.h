void weird_string_syntax() {
  std::string  s1 = "line1"
                    "line2"
                    "line3";

  std::cout << s1 << std::endl;

  // output
  // line1line2line3
}