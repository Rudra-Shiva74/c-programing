#include <stdio.h>
int main()
{
	int Mathmatics, Physics, English, Hindi, Chemistry;
	// take the input number
	printf("The number in Math = ");
	scanf("%d", &Mathmatics);

	printf("The number in Physics = ");
	scanf("%d", &Physics);

	printf("The number in English = ");
	scanf("%d", &English);

	printf("The number in Hindi = ");
	scanf("%d", &Hindi);

	printf("The number in Chemistry = ");
	scanf("%d", &Chemistry);

	// print the all number in all subject

	printf("The total number in all subject = %d\n", (Mathmatics + Physics + English + Hindi + Chemistry));

	// this is the condition if back in all subject subjects

	if ((Mathmatics < 30) && (Physics < 30) && (English < 30) && (Hindi < 30) && (Chemistry < 30))
	{
		printf("Not Try Again\n");
		printf("Jao Company me Kamayo Khayo Tum Padhoge Nahi Sirf Paisa Barbad Karoge");
	}
	// this is the condition if back on 4 subjects

	// mpeh
	else if ((Mathmatics < 30) && (Physics < 30) && (English < 30) && (Hindi < 30))
	{
		printf("Try Again\n");
		printf("Improve your Mathmatics , Physics , English and Hindi subjects");
	}
	// mpec
	else if ((Mathmatics < 30) && (Physics < 30) && (English < 30) && (Hindi < 30))
	{
		printf("Try Again\n");
		printf("Improve your Mathmatics , Physics , English and Hindi subjects");
	}
	// mceh
	else if ((Mathmatics < 30) && (Chemistry < 30) && (English < 30) && (Hindi < 30))
	{
		printf("Try Again\n");
		printf("Improve your Mathmatics , Chemistry , English and Hindi subjects");
	}
	// ephc
	else if ((Chemistry < 30) && (Physics < 30) && (English < 30) && (Hindi < 30))
	{
		printf("Try Again\n");
		printf("Improve your Chemistry , Physics , English and Hindi subjects");
	}
	// mpch
	else if ((Mathmatics < 30) && (Physics < 30) && (Chemistry < 30) && (Hindi < 30))
	{
		printf("Try Again\n");
		printf("Improve your Mathmatics , Physics , Chemistry and Hindi subjects");
	}

	// this is the condition if back on 3 subjects
	// mpe
	else if ((Mathmatics < 30) && (Physics < 30) && (English < 30))
	{
		printf("Try Again\n");
		printf("Improve your Mathmatics , Physics and English subjects");
	}
	// mph
	else if ((Mathmatics < 30) && (Physics < 30) && (Hindi < 30))
	{
		printf("Try Again\n");
		printf("Improve your Mathmatics , Physics and Hindi subjects");
	}
	// mpc
	else if ((Mathmatics < 30) && (Physics < 30) && (Chemistry < 30))
	{
		printf("Try Again\n");
		printf("Improve your Mathmatics , Physics and Chemistry subjects");
	}
	// meh
	else if ((Mathmatics < 30) && (English < 30) && (Hindi < 30))
	{
		printf("Try Again\n");
		printf("Improve your Mathmatics , English and Chemistry Hindi");
	}
	// mec
	else if ((Mathmatics < 30) && (English < 30) && (Chemistry < 30))
	{
		printf("Try Again\n");
		printf("Improve your Mathmatics , English and Chemistry subjects");
	}
	// mhc
	else if ((Mathmatics < 30) && (Hindi < 30) && (Chemistry < 30))
	{
		printf("Try Again\n");
		printf("Improve your Mathmatics , Hindi and Chemistry subjects");
	}
	// peh
	else if ((Physics < 30) && (English < 30) && (Hindi < 30))
	{
		printf("Try Again\n");
		printf("Improve your Physics , English and Hindi subjects");
	}
	// pec
	else if ((Physics < 30) && (English < 30) && (Chemistry < 30))
	{
		printf("Try Again\n");
		printf("Improve your Physics , English and Chemistry subjects");
	}
	// hec
	else if ((Hindi < 30) && (English < 30) && (Chemistry < 30))
	{
		printf("Try Again\n");
		printf("Improve your Hindi , English and Chemistry subjects");
	}
	// phc
	else if ((Physics < 30) && (Hindi < 30) && (Chemistry < 30))
	{
		printf("Try Again\n");
		printf("Improve your Physics , Hindi and Chemistry subjects");
	}
	// this is the condition if back on 2 subjects
	else if ((Mathmatics < 30) && (Physics < 30))
	{
		printf("Try Again\n");
		printf("Improve your Mathmatics and Physics subjects");
	}
	else if ((Mathmatics < 30) && (Hindi < 30))
	{
		printf("Try Again\n");
		printf("Improve your Mathmatics and Hindi subjects");
	}
	else if ((Mathmatics < 30) && (English < 30))
	{
		printf("Try Again\n");
		printf("Improve your Mathmatics and English subjects");
	}
	else if ((Mathmatics < 30) && (Chemistry < 30))
	{
		printf("Try Again\n");
		printf("Improve your Mathmatics and Chemistry subjects");
	}
	else if ((Physics < 30) && (Hindi < 30))
	{
		printf("Try Again\n");
		printf("Improve your Physics and Hindi subjects");
	}
	else if ((Physics < 30) && (English < 30))
	{
		printf("Try Again\n");
		printf("Improve your Physics and English subjects");
	}
	else if ((Physics < 30) && (Chemistry < 30))
	{
		printf("Try Again\n");
		printf("Improve your Physics and Chemistry subjects");
	}
	else if ((Hindi < 30) && (English < 30))
	{
		printf("Try Again\n");
		printf("Improve your Hindi and English subjects");
	}
	else if ((Hindi < 30) && (Chemistry < 30))
	{
		printf("Try Again\n");
		printf("Improve your Hindi and Chemistry subjects");
	}
	else if ((English < 30) && (Chemistry < 30))
	{
		printf("Try Again\n");
		printf("Improve your English and Chemistry subjects");
	}
	// this is the condition if fail in one subject

	else if (Mathmatics < 30)
	{
		printf("Try Again\n");
		printf("Improve your Mathmatics subject");
	}
	else if (Physics < 30)
	{
		printf("Try Again\n");
		printf("Improve your Physics subject");
	}
	else if (English < 30)
	{
		printf("Try Again\n");
		printf("Improve your English subject");
	}
	else if (Hindi < 30)
	{
		printf("Try Again\n");
		printf("Improve your Hindi subject");
	}
	else if (Chemistry < 30)
	{
		printf("Try Again\n");
		printf("Improve your Chemistry subject");
	}
	// this the condition which is decide the rank

	else if ((Mathmatics + Physics + English + Hindi + Chemistry) >= 300)
	{
		printf("Result : - First");
	}
	else if ((Mathmatics + Physics + English + Hindi + Chemistry) >= 245)
	{
		printf("Result : - Second");
	}
	else if ((Mathmatics + Physics + English + Hindi + Chemistry) >= 150)
	{
		printf("Result : - Third");
	}
	else if ((Mathmatics + Physics + English + Hindi + Chemistry) < 150)
	{
		printf("Try Again");
	}
}