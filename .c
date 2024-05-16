double squareRoot(double num) {
	double x = num;
	double epsilon = 0.00001;

	while (fabs(num - x * x) > epsilon) {
		x = (x + num / x) / 2;
	}

	return x;
}

int squareRootanswer() {
	printf("Enter a positive number: ");
	double number;
	number = getnum();

	if (number < 0) {
		printf("Please enter a positive number.\n");
		return 1;
	}

	double result = squareRoot(number);
	printf("Square root of %.2f is approximately: %.6f\n", number, result);

	return 0;
}
