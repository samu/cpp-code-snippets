class Base {
  public:
    void public_function() {};
  protected:
    void protected_function() {};
  private:
    void private_function() {};
};

class A : public Base {
  public:
    void access_members() {
      public_function();
      protected_function();
      // private_function(); // cant be called
    }

};

class B : protected Base {
  public:
    void access_members() {
      public_function();
      protected_function();
      // private_function(); // cant be called
    }

};

class C : private Base {
  public:
    void access_members() {
      public_function();
      protected_function();
      // private_function(); // cant be called
    }
};

