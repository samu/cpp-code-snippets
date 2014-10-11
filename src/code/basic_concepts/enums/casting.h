void casting() {
  enum season { Spring, Summer, Autumn, Winter };
  //            0       1       2       3

  int summer = Summer;

  season favourite_season{Winter};
  std::cout << "favourite_season: " << favourite_season << std::endl;
  // output
  // favourite_season: 3

  // favourite_season = 1;
  //                    ^  error: invalid conversion from ‘int’ to ‘casting()::season’

  favourite_season = static_cast<season>(1);
  std::cout << "favourite_season: " << favourite_season << std::endl;

  // output
  // favourite_season: 1
}