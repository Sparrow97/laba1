
# include <iostream> 

using namespace std;



class TMyFirstClass
{

private:
	int sm_;
	int smp_;
	char name_[12];
	float sum_;


public:

	TMyFirstClass()
	{
		std::cout << ".ctor" << endl;
	}


	TMyFirstClass(int sm, int smp, char * name)
	{
	
		sm_ = sm;
		smp_ = smp;
		strcpy(name_, name);
	}

	void out(int n)
	{
		for (int i = 0; i < n; i++)
		{

			cout << "\nName:";
			cout << name_ << endl;
			cout << "\nOklad:";
			cout << sm_;
			cout << "\nNadbavka v %:";
			cout << smp_;
		}
	}

	float summa()
	{

		if (smp_ != 0) {
			sum_ = sm_ * smp_ * 0.01 + sm_;
		}
		else
				cout << "KEK";
		return sum_;
	}
	~TMyFirstClass()
	{
		std::cout << ".dtor" << endl;
	}
};

