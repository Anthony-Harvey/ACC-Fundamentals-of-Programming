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
	string studentAnswers;
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
				cout << "\t" << studentName << " failed!" << endl;
			}
		}
		
	public:
		DMVTestGrader(string y, string z)
		{
			studentName = y;
			studentAnswers = z;
		}
		void setKey()
		{
			cout << "Please input the answers for the Test\n";
			cin >> answerString;
		}
		void grade()
		{
			int incorrect = 0;
			//	Known issues:
			//		Input of studentAnswers can be shorter/longer than answerString which results in improper grading.
			
			for(int i = 0; i < testSize; i++)
			{
				if (studentAnswers[i] == answerString[i])
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

char studentObjectGrader(string teacherAnswerKey, string studentName, string studentAnswers);

int main()
{
	string studentName;
	string teacherAnswerKey;
	string studentAnswers;
	int whileLCV = 1;
	
	while(whileLCV != 0)
	{
		cout << "Please Enter the name of the Student\n\t";
		cin >> studentName;
		
		cout << "Please Enter the Students Answers\n\t";
		cin >> studentAnswers;
		
		studentObjectGrader(teacherAnswerKey, studentName, studentAnswers);
		
		cout << "\nAre you done entering student test data?" << endl;
		cout << "\tEnter 1 to continue" << endl;
		//~ cout << "\tEnter 2 to change the Answer Key" << endl;
		cout << "\tEnter 0 to quit" << endl;
		cin >> whileLCV;
		
		//~ if(whileLCV == 2)
		//~ {
			//~ //	After this runs the user can enter a new Answer Key, and subsequent objects instantiate with the new Answer Key
		//~ }
	}
	return 0;
}

char studentObjectGrader(string teacherAnswerKey, string nameofStudent, string studentAnswers)
{
	DMVTestGrader testStudentGrade(nameofStudent, studentAnswers);
	testStudentGrade.setKey();
	testStudentGrade.grade();

	return 0;
}
