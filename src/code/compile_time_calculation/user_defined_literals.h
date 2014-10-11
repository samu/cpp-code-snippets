constexpr double operator"" _cm(long double x){
  return x / 100.;
}

constexpr double operator"" _cm(unsigned long long x){
  return x / 100.;
}

constexpr double operator"" _m(long double x){
  return x;
}

constexpr double operator"" _m(unsigned long long x){
  return x;
}

constexpr double operator"" _km(long double x){
  return x * 1000;
}

constexpr double operator"" _km(unsigned long long x){
  return x * 1000;
}

void user_defined_literals() {
  std::cout << "1_cm: " << 1_cm << " meters" << std::endl;
  std::cout << "1_km: " << 1_km << " meters" << std::endl;

  // output
  // 1_cm: 0.01 meters
  // 1_km: 1000 meters
}