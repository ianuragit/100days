 #include <iostream>
  using namespace std;

  int fib(int n)    // Take an n value
  {
    if (n == 0 || n == 1) return 1; 
    // Fib(0) and Fib(1) are equal to 1
    return fib(n-1) + fib(n-2);
  }

  main()
  {
    int n;
    cout << "Non-Negative Integer Please : ";
    cin >> n;
    cout << "Fibonacci(" << n << ") = " << fib(n) << "." << endl;  
    return 0;
  }
