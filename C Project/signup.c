// Function to create a new user for
// the Food ordering system
void signup()
{
	printf("Enter Your name\t");
	scanf("%s", temp_name);

	printf("Enter Your Age\t");
	scanf("%d", &temp_age);

	printf("Enter Your Email\t");
	scanf("%s", temp_email);

	printf("Enter Password\t");
	scanf("%s", temp_password1);

	printf("Confirm Password\t");
	scanf("%s", temp_password2);

	printf("Enter Your Mobile Number\t");
	scanf("%s", temp_mobile);

	// Function Call to validate
	// the user creation
	x = validate();
	if (x == 1)
		account_check();
}

