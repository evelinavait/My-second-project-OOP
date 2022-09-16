#include "my_lib.hpp"

struct irasas {
  string vardas;
  string pavarde;
  int paz[10];
  int egzas;
  double galut = 0;
  double galut2;
  float median;
};

int main()
{
  irasas temp;
	int *nums;			// To dynamically allocate an array
	int num_students;	// To hold the number of students
  int n = 0, sum = 0;
  int t;

		// Prompt the user to enter how many students were.
		cout << "Studentu skaicius: ";
		cin >> num_students;


		// Determine input validation.
		while (num_students < 0)
		{
			cout << "Netinkamas skaicius!\n";
			cout << "Studentu skaicius: ";
			cin >> num_students;
		}

		// Dynamically allocate an array large enough to hold
		// that many numbers of students.
		nums = new int[num_students];

		// Get the number of movies for each student;
		for (int count = 0; count < num_students; count++)
		{
    cout << "Studento #" << (count + 1) << " informacija : \n";
    //cin >> nums[count];
    cout<<"Iveskite varda: "; cin>>temp.vardas;
    cout<<"Iveskite pavarde: "; cin>>temp.pavarde;
    cout <<"Iveskite egzamino paz.: "; cin>>temp.egzas;
    cout <<"Kiek turi paz. (1-10)? "; cin>>n;

   for (int i = 0; i < n; i++){
    cout<<"Iveskite "<<i+1<<"-aji paz.";
    cin>>temp.paz[i];
    sum+=temp.paz[i];
    }
      for (int i = 0; i < n; i++){
        for (int j = 0; j < n - i - 1; j++)
          if (temp.paz[j] < temp.paz[j + 1])
			{
				t = temp.paz[j];
				temp.paz[j] = temp.paz[j + 1];
				temp.paz[j + 1] = t;
			}
  if (n%2 == 0) // if SIZE is even 
	{temp.median = (temp.paz[n/2] + temp.paz[n/2-1])/2.0;}
	else
    temp.median = temp.paz[n/2];
    }
  temp.galut2 = temp.median*0.4 + temp.egzas*0.6;

			// Determine input validation.
			while (nums[count] < 0)
			{
				cout << "Netinkamas skaicius. Prasome ivesti teigiama skaiciu: ";
				cout << "\nStudento #" << (count + 1) << " informacija : ";
				cin >> nums[count];
			}
    }
  // Set output formatting.
		cout << fixed << showpoint << setprecision(1)
  << setw(20) << left << "Vardas"
  << setw(20) << left << "Pavarde"
  << setw(10) << left << "Galutinis (Med.) \n"
  << "-----------------------------------------------------"
  << endl;
//for (int count = 0; count < num_students; count++)
  {cout << fixed << setprecision(2)
    << left << setw(20) << temp.vardas
    << left << setw(20) << temp.pavarde
    << left << setw(10) << temp.galut2;}
  cout << "\n\n";

		// Free dynamically allocated memory.
		delete[] nums;
		nums = 0;		// Make nums point to null.



}


/*double calculateMedian(int *nums, int num_students)
{
	int middle;
	double median;
	middle = num_students / 2.0;

	if (num_students % 2 == 0 )
	{
		median = nums[middle];
	}
	else
	{
		
		median = (nums[middle] + nums[middle]) / 2.0;
	}
	return median; */
  
