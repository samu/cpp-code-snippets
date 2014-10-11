enum Month {

  Jan, Feb, Mar

};

struct Date {

  Date();
  Date(int, int, int);
  Date(Month, int, int);
  Date(int, Month, int);

  Month getMonth();

  private:

    int day, month, year;

};