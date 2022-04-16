// C program to implement Boilerplate
// Code for the Food Ordering System
int main()
{
	while (1) {
		printf("\n\nWelcome to Food ");

		printf("Ordering System"
			"\n\n1)SIGNUP\n");
		printf("2)LOGIN\n3)EXIT\n\n");
		printf("Enter your choice\t");
		scanf("%d", &choice);

		// Switch Cases
		switch (choice) {

		// For Signup Function
		case 1: {
			signup();
			break;
		}

		// For Login Function
		case 2: {
			login();
			break;
		}
		case 3: {
			exit(1);
		}
		default: {
				printf("\nPlease Enter the "
				printf("valid choice\n");
				break;
		}
		}
	}
}

