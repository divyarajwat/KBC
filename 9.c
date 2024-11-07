#include<stdio.h>
int main(){
	printf("************************************************************************************************************************\n");
	printf("\t\t\t\t\t\t Welcome to KBC\n");
	printf("************************************************************************************************************************\n");
	char s[34];
	printf("Enter your first name: ");
	scanf("%s", s);
	printf("Enter your last name: ");
	scanf("%s", s);
	char c[10];
	printf("Enter your city: ");
	scanf("%s", c);
	
	int no;
	printf("Do you want to Play\n");
	printf("1.Yes \t\t\t\t 2.No\n");
	scanf("%d", &no);
	if(no==1){
		printf("*****INSTRUCTIONS******\n");
		printf(" -Press 1 to read the instructions\n");
		printf(" -Press 2 to start the game \n ");
		printf("-This is a virtual entertainment game for Kaun Banega Crorepati.\n");
		printf(" -No cash prizes to be paid to any participants playing this game.\n");
		printf(" -Correctly answer each general knowledge questions in turn, and work towards\n winning 7 CRORES of virtual prize money!\n");
		printf(" -On each level you will be presented with four possible answers. Only one of these is correct.\n");
		printf(" -For Question 1-2, you will have 30 seconds to answer.\n");
		printf(" -For Question 3-6, you will have 60 seconds to answer.\n");
		printf(" -For Questions &-14, you will have 90 seconds to answer.\n");
		printf(" -Along the way are safe havens, which act as safety nets.\n");
		printf(" -Once you pass a safe heaven, if you answer a question incorrectly and drop out of the game, \n your Virtual Prize money will not drop below that safe haven.\n If you get a question wrong below the first safe haven you.\n\n");

	}
	
	printf("Start the Game\n");
	printf("1.Yes \t\t\t\t 2.No\n");
	scanf("%d", &no);
	if(no==1){
		printf("your 1st Question is on the screen\n");
		printf("Q1. What is the capital of France?\n");
		printf("1. Paris \t\t\t\t 2. London\n3. Berlin \t\t\t\t 4. Rome\n");
		printf("Answer is: \n");
		scanf("%d", &no);
		if(no==1){
			printf("Correct!\n");
			printf("The score is 100\n\n");
		}
		else{
			printf("Oops!! Wrong Answer\n");
			printf("The Correct Answer is 1\n\n");
			exit(0);
		}
		printf("your 2nd question is on the screen\n");
		printf("Q2. Who wrote Hamlet?\n");
		printf("1. Shakespeare \t\t\t\t 2. Chaucer\n3. Dickens \t\t\t\t 4. Austen\n");
		printf("Answer is: \n");
		scanf("%d", &no);
		if(no==1){
			printf("Correct!\n");
			printf("The score is 200\n\n");
		}
		else{
			printf("Oops!!Wrong Answer\n");
			printf("The Correct Answer is 1\n\n");
			exit(0);
		}
		printf("your 3rd question is on the screen\n");
		printf("Q3. What is the largest planet?\n");
		printf("1. Earth \t\t\t\t 2. Mars\n3. Jupiter \t\t\t\t 4. Saturn\n");
		printf("Answer is: \n");
		scanf("%d", &no);
		if(no==3){
			printf("Correct!\n");
			printf("The score is 300\n\n");
		}
		else{
			printf("Oops!!Wrong Answer\n");
			printf("The Correct Answer is 3\n\n");
			exit(0);
		}
		printf("your 4th question is on the screen\n");
		printf("Q4. Who discovered penicillin?\n");
		printf("1. Newton \t\t\t\t 2. Darwin\n3. Einstein \t\t\t\t 4. Fleming\n");
		printf("Do you want to use lifeline\n");
		printf("1. yes \t\t\t\t 2. No \n");
		scanf("%d", &no);
		if(no==1){
			printf("Which lifeline you want to use\n");
			printf("1. 50-50 \t\t\t\t 2. Flip-Flop\n");
			scanf("%d", &no);
			if(no==1){
				printf("1. Drawin \t\t\t\t 2.Fleming\n");
				scanf("%d", &no);
				
				if(no==2){
					printf("Correct!\n");
					printf("The score is 400\n");
				}
				else{
					printf("Oops!!Wrong Answer\n");
					printf("The Correct Answer is 2\n\n");
					exit(0);
				}
//				exit(0);
			}
			else{
				printf("Q. What is the chemical formula for water?\n");
				printf("1. HO \t\t\t\t 2. O2\n3. H2O \t\t\t\t 4. CO2\n");
				scanf("%d", &no);
				if(no==3){
					printf("Correct!\n");
					printf("Your score is 400\n\n");
					
				}
				else{
					printf("Oops!!Wrong Answer\n");
					printf("The Correct Answer is 3\n\n");
					exit(0);
				}
			}
		}
		else if(no==2){
			
		printf("Answer is: \n");
		scanf("%d", &no);
		if(no==4){
			printf("Correct!\n");
			printf("The score is 400\n\n");
		}
		else{
			printf("Oops!!Wrong Answer\n");
			printf("The Correct Answer is 4\n\n");
			exit(0);
		}
	}
	printf("your 5th question is on the screen\n");
		printf("Q5. Which element has the atomic number 1?\n");
		printf("1. Helium \t\t\t\t 2. Oxygen\n3. Hydrogen \t\t\t\t 4. Carbon\n");
		printf("Answer is: \n");
		scanf("%d", &no);
		if(no==3){
			printf("Correct!\n");
			printf("The score is 500\n\n");
		}
		else{
			printf("Oops!!Wrong Answer\n");
			printf("The Correct Answer is 3\n\n");
			exit(0);
		}
		printf("your 6th question is on the screen\n");
		printf("Q6. Who is known as the Father of India?\n");
		printf("1. Mahatma Gandhi \t\t\t\t 2. Jawahar lal Nehru\n3. Subhash Chandra Bose \t\t\t 4. Bhagat Singh\n");
		scanf("%d", &no);
		if(no==1){
			printf("Correct!!\n");
			printf("The score is 600\n\n");
		}
		else{
			printf("Oops!!Wrong Answer\n");
			printf("The Correct Answer is 1\n\n");
			exit(0);
		}
		printf("your 7th question is on the screen\n");
		printf("Q7. Who painted Mona Lisa?\n");
		printf("1. Michelangelo \t\t\t 2. Leonardo da Vinci\n3. Rapael \t\t\t\t 4. Van Gogh\n");
		printf("Do you want to use lifeline\n");
		printf("1. yes \t\t\t\t 2. No \n");
		scanf("%d", &no);
		if(no==1){
			printf("Which lifeline you want to use\n");
			printf("1. 50-50 \t\t\t\t 2. Flip-Flop\n");
			scanf("%d", &no);
			if(no==1){
				printf("1. Leonardo da Vinci \t\t\t\t 2.Rapael\n");
				scanf("%d", &no);
				
				if(no==1){
					printf("Correct!\n");
					printf("The score is 400\n\n");
				}
				else{
					printf("Oops!!Wrong Answer\n");
					printf("The Correct Answer is 1\n\n");
					exit(0);
				}
			}
			else{
				printf("Q. Where is Fort William loactd?\n");
				printf("1. Chennai \t\t\t\t 2. Goa\n3. Kolkata \t\t\t\t 4. Mysore\n");
				scanf("%d", &no);
				if(no==3){
					printf("Correct!\n");
					printf("Your score is 400\n\n");
					
				}
				
				else{
					printf("Oops!!Wrong Answer\n");
					printf("The Correct Answer is 3\n\n");
					exit(0);
				}
			}
		}
		else if(no==2){
		scanf("%d", &no);
		if(no==2){
			printf("Correct!\n");
			printf("The score is 700\n\n");
		}
		else{
			printf("Oops!!Wrong Answer\n");
			printf("The Correct Answer is 2\n\n");
			exit(0);
		}
	}
	printf("your 8th question is on the screen\n");
		printf("Q8. Which year did World War II end?\n");
		printf("1. 1941 \t\t\t\t 2. 1943\n3. 1945 \t\t\t\t 4. 1947\n");
		scanf("%d", &no);
		if(no==3){
			printf("Correct!\n");
			printf("The score is 800\n\n");
		}
		else{
			printf("Oops!!Wrong Answer\n");
			printf("The Correct Answer is 3\n\n");
			exit(0);
		}
		printf("your 9th question is on the screen\n");
		printf("Q9. Which planet is known as the Red Planet?\n");
		printf("1. Earth \t\t\t\t 2. Venus\n3. Mars \t\t\t\t 4. Jupiter\n");
		scanf("%d", &no);
		if(no==3){
			printf("Correct!\n");
			printf("The score is 900\n\n");
		}
		else{
			printf("Oops!!Wrong Answer\n");
			printf("The Correct Answer is 3\n\n");
			exit(0);
		}
		printf("your 10th question is on the screen\n");
		printf("Q10. Who was the first man to walk on the moon?\n");
		printf("1. Yuri Gagarin \t\t\t 2. Neil Armstrong\n3. Buzz Aldrin \t\t\t\t 4. Michael Collins\n");
		scanf("%d", &no);
		if(no==2){
			printf("Correct!\n");
			printf("The score is 1000\n\n");
		}
		else{
			printf("Oops!!Wrong Answer\n");
			printf("The Correct Answer is 2\n\n");
			exit(0);
		}
	}

	else{
		printf("Game Over!!\n");
		exit(0);
	}
	printf("******************************************************************************************************\n");
	printf("\t\t\t\t Thaks For Participating!!\n");
	printf("*******************************************************************************************************\n");
	return 0;

}
