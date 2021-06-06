#include <iostream>
#include <cstring>
#include <cctype>
#include <cmath>
using namespace std;

template <class T>
class Stack
{
	private:
		const int max;
		T node[50];
		int top;
	public:
		Stack() : max(50), top(-1) {}
		int isEmpty() { return (top == -1); }
		T Top() { return ((top == -1) ? -1 : node[top]); }
		void push(T ch);
		T pop();
};

template <class T>
void Stack<T>::push(T ch)
{
	if(top == max-1)
	{
		cout << "stack full" << endl;
		exit(0);
	}
	node[++top] = ch;
}

template <class T>
T Stack<T>::pop()
{
	if(top == -1)
	{
		cout << "stack empty" << endl;
		exit(0);
	}
	return node[top--];
}

class Expression
{
	private:
		string infix;
		double result;
		int isOperator(char);
		int isRightAssociative(char);
		int getPrecedenceValue(char);
		int hasGreaterPrecedence(char, char);
		int isOpeningBracket(char);
		int isClosingBracket(char);
		double performOperation(char, double, double);
	public:
		void getData();
		string toPostfix();
		double evaluateExpression();
		int getResult();
		void output();
};

void Expression::getData()
{
	cout << "Enter an Expression : ";
	cin >> infix;
}

int Expression::isOperator(char ch)
{
	switch(ch)
	{
		case '+' : return 1;
		case '-' : return 1;
		case '*' : return 1;
		case '/' : return 1;
		case '^' : return 1;
		default  : return 0;
	}
}

int Expression::isRightAssociative(char Operator)
{
	return (Operator == '^');
}

int Expression::getPrecedenceValue(char Operator)
{
	switch(Operator)
	{
		case '+' : return 1;
		case '-' : return 1;
		case '*' : return 2;
		case '/' : return 2;
		case '^' : return 3;
		default  : return 0;
	}
}

int Expression::hasGreaterPrecedence(char Operator1, char Operator2)
{
	int precedenceValue1 = getPrecedenceValue(Operator1);
	int precedenceValue2 = getPrecedenceValue(Operator2);
	if(precedenceValue1 == precedenceValue2)
	{
		if(isRightAssociative(Operator1))
			return 0;
		return 1;
	}
	return (precedenceValue1 > precedenceValue2);
}

int Expression::isOpeningBracket(char ch)// can make these functions inline, by using if and || condition and operator
{
	switch(ch)
	{
		case '(' : return 1;
		case '{' : return 1;
		case '[' : return 1;
		default  : return 0;
	}
}

int Expression::isClosingBracket(char ch)
{
	switch(ch)
	{
		case ')' : return 1;
		case '}' : return 1;
		case ']' : return 1;
		default  : return 0;
	}
}

string Expression::toPostfix() 
{
	Stack<char> s;
	string postfix;
	for(size_t i = 0; i < infix.size(); ++i)
	{
		if(isdigit(infix[i]))
			postfix.push_back(infix[i]);
		else if(isOperator(infix[i]))
		{
			while(!s.isEmpty() && !isOpeningBracket(infix[i]) && hasGreaterPrecedence(s.Top(), infix[i]))
				postfix.push_back(s.pop());
			s.push(infix[i]);
		}
		else if(isOpeningBracket(infix[i]))
			s.push(infix[i]);
		else if(isClosingBracket(infix[i]))
		{
			while(!s.isEmpty() && !isOpeningBracket(s.Top()))
				postfix.push_back(s.pop());
			s.pop();
		}
	}
	while(!s.isEmpty())
		postfix.push_back(s.pop());
	return postfix;	
}

double Expression::performOperation(char Operator, double operand1, double operand2)
{
	switch(Operator)
	{
		case '+' : return (operand1 + operand2);
		case '-' : return (operand1 - operand2);
		case '*' : return (operand1 * operand2);
		case '/' : return (operand1 / operand2);
		case '^' : return (pow(operand1, operand2));
		default  : return -1;
	}
}

double Expression::evaluateExpression()
{
	string postfix = toPostfix();
	Stack<double> s;
	for(size_t i = 0; i < postfix.size(); ++i)
	{
		if(isdigit(postfix[i]))
			s.push(postfix[i] - '0');//here the input is integers as of now, but then 5/8 might happens which is less than 0, so everything else in double and not int, or else the point value is not considered
		else
		{
			double operand2 = s.pop();
			double operand1 = s.pop();
			double operand3 = performOperation(postfix[i], operand1, operand2);
			s.push(operand3);
		}
	}
	result = s.pop();
	return result;
}

void Expression::output()
{
	cout << "The value of the Expression " << infix << " is : " << result << endl;
}

double getDivisorValue()
{
	double d;
	cout << "Enter Divisor Value : " << endl;
	try{
		cin >> d;
		if(d == 0)
			throw d;
	}
	catch(double)
	{
		cout << "Division by zero " << endl;
		d = getDivisorValue();
	}
	return d;
}

int main()
{
	Expression exp;
	exp.getData();
	double result = exp.evaluateExpression();
	exp.output();
	double d = getDivisorValue();
	cout << result << " / " << d << " = " << (result / d) << endl;
	return 0;
}
