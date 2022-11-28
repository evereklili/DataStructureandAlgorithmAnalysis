////recursive functio 
//#include<iostream>
//using namespace std;
//int f(int x)
//{
//	if (x == 0)
//	{
//		return 0;
//	}
//	else
//	{
//		return 2 * f(x - 1) + x * x;
//	}
//}
//int bad(int n)
//{
//	if (n == 0) {
//		return 0;
//	}
//	else
//	{
//		return bad(n / 3 + 1) + n - 1;
//	}
//}
//int main()
//{
//	
//	for (int i = 0; i <= 10; i++)
//	{
//		cout <<"f("<<i<<")=" << f(i) << endl;
//	}
//
//	for (int i = 0; i <= 10; i++)
//	{
//		cout << "bad(" << i << ")=" << bad(i) << endl;
//	}
//	  //base case : you must always lead to the first two fundamental rules of recursion
//	//making progress : for the case that are to be solved recursively, the recursive call must always be to a case that makes progress toward a base case.
//
//	return 0;
//}
////f(0) = 0
////f(1) = 1
////f(2) = 6
////f(3) = 21
////f(4) = 58
////f(5) = 141
////f(6) = 318
////f(7) = 685
////f(8) = 1434
////f(9) = 2949
////f(10) = 5998

//#include<iostream>
//using namespace std;
//class IntCell
//{
//public:
//	IntCell()
//	{
//		int storedValue = 0;
//	}
//	IntCell(int initialValue)
//	{
//		storedValue = initialValue;
//	}
//	int read()
//	{
//		return storedValue;
//	}
//	void write(int x)
//	{
//		 storedValue = x;
//	}
//private: 
//	int storedValue;
//};
//
//#ifndef MATRIX_H
//#define MATRIX_H
//#ifndef DS_EXCEPTIONS_H
//#define DS_EXCEPTIONS_H
// 
//#include <vector>
//#include <initializer_list>
//using namespace std;
//
//template <typename Object>
//class matrix
//{
//public:
//    matrix(int rows, int cols) : array(rows)
//    {
//        for (auto& thisRow : array)
//            thisRow.resize(cols);
//    }
//
//    matrix(initializer_list<vector<Object>> lst) : array(lst.size())
//    {
//        int i = 0;
//        for (auto& v : lst)
//            array[i++] = std::move(v);
//    }
//
//    matrix(const vector<vector<Object>>& v) : array{ v }
//    { }
//    matrix(vector<vector<Object>>&& v) : array{ std::move(v) }
//    { }
//
//    const vector<Object>& operator[](int row) const
//    {
//        return array[row];
//    }
//    vector<Object>& operator[](int row)
//    {
//        return array[row];
//    }
//
//    int numrows() const
//    {
//        return array.size();
//    }
//    int numcols() const
//    {
//        return numrows() ? array[0].size() : 0;
//    }
//private:
//    vector<vector<Object>> array;
//};
//class UnderflowException { };
//class IllegalArgumentException { };
//class ArrayIndexOutOfBoundsException { };
//class IteratorOutOfBoundsException { };
//class IteratorMismatchException { };
//class IteratorUninitializedException { };
//#endif
//

//#include <iostream>
//using namespace std;
//void printDigit(int n)
//{
//    cout << n;
//}
//
//void printOut(int n)  // Print nonnegative n
//{
//    if (n >= 10)
//        printOut(n / 10);
//    cout << endl;
//    printDigit(n % 10);
//}
//
//int main()
//{
//    printOut(1369);
//    cout << endl;
//    return 0;
//}

//
//#include <iostream>
//using namespace std;
//
///**
// * A class for simulating an integer memory cell.
// */
//class IntCell
//{
//public:
//    /**
//     * Construct the IntCell.
//     * Initial value is 0.
//     */
//    IntCell() //yapılandırıcı 
//    {
//        storedValue = 0;
//    }
//
//    /**
//     * Construct the IntCell.
//     * Initial value is initialValue.
//     */
//    IntCell(int initialValue) //yapılandırıcı   
//    {
//        storedValue = initialValue;
//    }
//
//    /**
//     * Return the stored value.
//     */
//    int read()
//    {
//        return storedValue;
//    }
//
//    /**
//     * Change the stored value to x.
//     */
//    void write(int x)
//    {
//        storedValue = x;
//    }
//
//private:
//    int storedValue;//sadece sınıfı içinde okunur.  
//};
//
//int main()
//{
//    IntCell m;
//
//    m.write(5);
//    cout << "Cell contents: " << m.read() << endl;
//
//    return 0;
//}

#include <iostream>
using namespace std;

/**
 * A class for simulating an integer memory cell.
 */
//class IntCell
//{
//public:
//    explicit IntCell(int initialValue = 0)
//        : storedValue{ initialValue } { }
//    int read() const
//    {
//        return storedValue;
//    }
//    void write(int x)
//    {
//        storedValue = x;
//    }
//private:
//    int storedValue;
//};
//
//int main()
//{
//    IntCell m;
//
//    m.write(5);
//    cout << "Cell contents: " << m.read() << endl;
//
//    return 0;
//}
//
//#include "IntCell.h"
//#include<iostream>
///**
// * Construct the IntCell with initialValue
// */
//IntCell::IntCell(int initialValue) : storedValue{ initialValue }
//{
//}
//
///**
// * Return the stored value.
// */
//int IntCell::read() const
//{
//    return storedValue;
//}
//
///**
// * Store x.
// */
//void IntCell::write(int x)
//{
//    storedValue = x;
//}
#include <iostream>
#include "IntCell.h"
using namespace std;

int main()
{
    IntCell m;   // Or, IntCell m( 0 ); but not IntCell m( );

    m.write(5);
    cout << "Cell contents: " << m.read() << endl;

    return 0;
}