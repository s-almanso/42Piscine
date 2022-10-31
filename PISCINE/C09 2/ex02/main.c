#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>

//
//  Exercise to Include in the test.
//
#include "../ex02/ft_split.c"

//
// Test Function 
//
char **ft_split(char *str,char *charset);

//
// Global Variables -- These have to be global as the seperate threads (main, timer, execute) need to access them
//
int func_done = 0;
int timer_done = 0;

//
//  Timer Function... We can change the timer by changing the sleep(x) value.. 
//		The x value is in seconds -- Default to 10 Seconds
//
void *timer(void *var) {
	var = 0x00;
	sleep(10);
	timer_done = 1;
	return (0);
}

//
//  Helper Function to print out the split strings
//
void output(char **str) {
	int i = 0;
	while (*str) {
		
		printf("str[%d] = %s\n",i,*str++);
		i++;
	}
	printf("\n");
}

//
//  This is the Test Case that we will execute.. If it takes too long, you will have a timeout
//
void *execute(void *var) {
	var = 0x00;
	
	char *test_str = "Abu Dhabi 42 May Piscine";
	char *sep = " ";
	char *test1_str = "Don't.Panic!";
	char *sep1 = ".";
	char *test2_str = "8Time|is9an0illusion-";
	char *sep2 = "8|90-";
	char *test3_str = "88Time|||is9an0illusion-09";
	char *sep3 = "8|90zZ-";
	

	char **split;

	printf("\nQuote:\nA common mistake that people make when trying to design\nsomething completely foolproof is to underestimate the \ningenuity of complete fools \n");

	printf("\nft_split.c C09-ex03\n\n");
	printf("Test String = %s  | Sep = %s\n",test_str,sep);
	split = ft_split(test_str,sep);
	output(split);
	
	printf("Test String = %s  | Sep = %s\n",test1_str,sep1);
	split = ft_split(test1_str,sep1);
	output(split);

	printf("Test String = %s  | Sep = %s\n",test2_str,sep2);
	split = ft_split(test2_str,sep2);
	output(split);

	printf("Test String = %s  | Sep = %s\n",test3_str,sep3);
	split = ft_split(test3_str,sep3);
	output(split);

	func_done = 1;
	return (0);
}

int	main(void) {
	pthread_t threadId;  // Execution Thread ID
	pthread_t timerId;   // Timer Thread ID
	int	threadId_Sig;
	int timerID_Sig;
	
	// Create 2 threads, timer and execution
	threadId_Sig = pthread_create(&threadId, NULL, execute,  NULL);  // Create and start the exeuction function
	timerID_Sig = pthread_create(&timerId, NULL, timer, NULL);   // Create and start the timer function

	while (1) {
		// if the timer completes before the execution finishes, then we timeout
		if (timer_done) {
			pthread_cancel(threadId);
			printf("*** TIMEOUT ***\n");
			return (1);
		}
		// if execution of the function completes before the timer expires, we stop the timer and exit.
		if (func_done) {
			pthread_cancel(timerId);
			return (0);
		}
	}
	return (0);
}
