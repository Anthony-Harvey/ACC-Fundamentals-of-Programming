//	Anthony Harvey
//	cosc-1337:	Sravan Kumpati
//	Lab 4:		Driver's License Exam
//	DUE:		

	//	Chapter 8, pg.597
	//	
	//	The State Department of Motor Vehicles (DMV) has asked you to write a program that grades the written portion of the driver's license exam,
	//	which has 20 multiple choice questions.
	//
	//	Here are the correct answers:
	//		1:	B	6:	A	11:	B	16:	C
	//		2:	D	7:	B	12:	C	17:	C
	//		3:	A	8:	A	13:	D	18:	B
	//		4:	A	9:	C	14:	A	19:	D
	//		5:	C	10:	D	15:	D	20:	A
	//
	//	To do this, you should create a "TestGrader" class. The class will have an answers array of 20 characters,
	//	which holds the correct test answers.
	//	
	//	It will have two public member functions that enable user programs
	//	to interact with the classes:
	//		setKey()
	//		grade()
	//
	//	The "setKey()" function receives a 20-character string holding the correct answers and copies the information
	//	into its array:
	//		answers[]
	//
	//	The "grade()" function receives a 20-character string holding the test taker's answers and compares each
	//	of their answers to the correct one.
	//
	//	An applicant must correctly answer 15 or more of the 20 questions to pass the exam.
	//
	//	The "grade()" function should return the following to the user:
	//		
	//		-	A message indicating whether or not they passed the exam
	//		-	The number of right answers and the number of wrong answers
	//		-	A list of the question numbers for all incorrectly answered questions
	//
	//	The program that creates and uses a "TestGrader" object should first make a single call to "setKey",
	//	passing it a string containing the 20 correct answers.
	//	
	//	Once this is done, it should allow a test takers 20 answers to be entered,
	//	making sure only letter A-D are allowed,
	//	and stores them in a 20 character Array.
	//
	//	BDAACABACDBCDADCCBDA
	
	
//	Psuedo Code Below


#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const int testSize = 20;
const int passingGrade = 75;

class DMVTestGrader
{
	string answerString;
	string studentName;
	string studentAnswerKey;
	int testScore;
	
	private:
		void passFail(int inc)
		{
			testScore = (((testSize - inc) * 100.0) / testSize);
			cout << "\tTest Score: " << testScore << endl;
			
			if(testScore >= passingGrade)
			{
				cout << "\t" << studentName << " passed!" << endl;
			}
			else
			{
				cout << studentName << " failed!\n" << endl;
			}
			
		}
		
	public:
		DMVTestGrader(string x, string y, string z)
		{
			answerString = x;
			studentName = y;
			studentAnswerKey = z;
		}
		void getAnswers()
		{
			//~ return answerKey;
		}
		
		void setAnswerKey(string answerString)
		{
			cout << "Please input the answers for the Test\n";
			cin >> answerString;
		}
		
		void grade()
		{
			int incorrect = 0;
			for(int i = 0; i < testSize; i++)
			{
				if (studentAnswerKey[i] == answerString[i])
				{
					cout << "Answer " << i + 1 << " is Correct!\n";
				}
				else
				{
					//	count incorrect answers
					incorrect++;
				}
			}
			cout << "\tIncorrect answers: " << incorrect << endl;
			passFail(incorrect);
			
		}
		
};

//~ void userAnswers (int []);
char studentObjectGrader(string teacherAnswerKey, string studentName, string studentAnswerKey);

int main()
{
	string studentName;
	string teacherAnswerKey;
	string studentAnswerKey;
	int whileLCV = 1;
	
	cout << "Please Enter the Answer Key for the test\n\t";
	cin >> teacherAnswerKey;
	
	while(whileLCV != 0)
	{
		cout << "Please Enter the name of the Student\n\t";
		cin >> studentName;
		
		cout << "Please Enter the Students Answers\n\t";
		cin >> studentAnswerKey;
		
		studentObjectGrader(teacherAnswerKey, studentName, studentAnswerKey);
		
		cout << "Are you done entering student test data?" << endl;
		cout << "\tEnter 1 to continue" << endl;
		cout << "\tEnter 0 to quit" << endl;
		cin >> whileLCV;
	}
	return 0;
}

char studentObjectGrader(string teacherAnswerKey, string nameofStudent, string studentAnswerKey)
{
	//~ string y;
	//~ y = nameofStudent;
	
	DMVTestGrader testStudentGrade(teacherAnswerKey, nameofStudent, studentAnswerKey);
	//~ testStudentGrade.setAnswerKey(teacherAnswerKey);
	testStudentGrade.grade();

	//	Maybe this should be int function?
	return 0;
}
//~ void showSCores
