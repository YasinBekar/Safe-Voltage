
#include "SevenSegment3x7.h"

#include "stm32f0xx_hal.h"

#include "main.h"



void Sifirla(){
	HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_RESET);
 }



void Disp(int x){




    int birler=0;
    int onlar=0;
    int yuzler=0;
    int a=0;

    birler=x%10;

    onlar=x/10;
    onlar=onlar%10;

    a=x/100;
    yuzler=a ;


   //////////XXXXXXXXXXXXXX//BİRLER//XXXXXXXXXXXXX////////////////////////////XXXXXXXXXXXXXX//BİRLER//XXXXXXXXXXXXX////////////////////////////XXXXXXXXXXXXXX//BİRLER//XXXXXXXXXXXXX//////////////////



	switch(birler){




		case 0 :
		                      //0
		Sifirla();
		  HAL_GPIO_WritePin(Birler_GPIO_Port, Birler_Pin , GPIO_PIN_SET);
		  HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_SET);
	      HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(Birler_GPIO_Port, Birler_Pin , GPIO_PIN_RESET);


		break;


		case 1 :

		Sifirla();
		  HAL_GPIO_WritePin(Birler_GPIO_Port, Birler_Pin , GPIO_PIN_SET);
		  HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_RESET);
	      HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(Birler_GPIO_Port, Birler_Pin , GPIO_PIN_RESET);


		break;


		case 2 :

		Sifirla();
		  HAL_GPIO_WritePin(Birler_GPIO_Port, Birler_Pin , GPIO_PIN_SET);
		  HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_RESET);
	 	  HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_RESET);
	      HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(Birler_GPIO_Port, Birler_Pin , GPIO_PIN_RESET);


		break;


		case 3 :

		Sifirla();
		  HAL_GPIO_WritePin(Birler_GPIO_Port, Birler_Pin , GPIO_PIN_SET);
		  HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_SET);
          HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_RESET);
	      HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(Birler_GPIO_Port, Birler_Pin , GPIO_PIN_RESET);


		break;


		case 4 :

		Sifirla();
		  HAL_GPIO_WritePin(Birler_GPIO_Port, Birler_Pin , GPIO_PIN_SET);
		  HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_SET);
	      HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(Birler_GPIO_Port, Birler_Pin , GPIO_PIN_RESET);


		break;


		case 5 :

		Sifirla();
		  HAL_GPIO_WritePin(Birler_GPIO_Port, Birler_Pin , GPIO_PIN_SET);
		  HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_SET);
	      HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(Birler_GPIO_Port, Birler_Pin , GPIO_PIN_RESET);


		break;


		case 6 :

		Sifirla();
		  HAL_GPIO_WritePin(Birler_GPIO_Port, Birler_Pin , GPIO_PIN_SET);
		  HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_SET);
	      HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(Birler_GPIO_Port, Birler_Pin , GPIO_PIN_RESET);


		break;


		case 7 :

		Sifirla();
		  HAL_GPIO_WritePin(Birler_GPIO_Port, Birler_Pin , GPIO_PIN_SET);
		  HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_RESET);
	      HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(Birler_GPIO_Port, Birler_Pin , GPIO_PIN_RESET);


		break;


		case 8 :

		Sifirla();
		  HAL_GPIO_WritePin(Birler_GPIO_Port, Birler_Pin , GPIO_PIN_SET);
		  HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_SET);
	      HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(Birler_GPIO_Port, Birler_Pin , GPIO_PIN_RESET);


		break;


		case 9 :

		Sifirla();
		  HAL_GPIO_WritePin(Birler_GPIO_Port, Birler_Pin , GPIO_PIN_SET);
		  HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_SET);
	      HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(Birler_GPIO_Port, Birler_Pin , GPIO_PIN_RESET);


		break;


		}


	//////////XXXXXXXXXXXXXX//ONLAR//XXXXXXXXXXXXX////////////////////////////XXXXXXXXXXXXXX//ONLAR//XXXXXXXXXXXXX////////////////////////////XXXXXXXXXXXXXX//ONLAR//XXXXXXXXXXXXX////////////////////////////XXXXXXXXXXXXXX//BİRLER//XXXXXXXXXXXXX//////////////////



		switch(onlar){




			case 0 :
			                      //0
			Sifirla();
			  HAL_GPIO_WritePin(Onlar_GPIO_Port, Onlar_Pin , GPIO_PIN_SET);
			  HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_SET);
		      HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_RESET);
		      HAL_GPIO_WritePin(Onlar_GPIO_Port, Onlar_Pin , GPIO_PIN_RESET);

			break;


			case 1 :

			Sifirla();
	          HAL_GPIO_WritePin(Onlar_GPIO_Port, Onlar_Pin , GPIO_PIN_SET);
			  HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_RESET);
		      HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_RESET);
		      HAL_GPIO_WritePin(Onlar_GPIO_Port, Onlar_Pin , GPIO_PIN_RESET);
			break;


			case 2 :

			Sifirla();
	          HAL_GPIO_WritePin(Onlar_GPIO_Port, Onlar_Pin , GPIO_PIN_SET);
			  HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_RESET);
		 	  HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_RESET);
		      HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_SET);
		      HAL_GPIO_WritePin(Onlar_GPIO_Port, Onlar_Pin , GPIO_PIN_RESET);
			break;


			case 3 :

			Sifirla();
	          HAL_GPIO_WritePin(Onlar_GPIO_Port, Onlar_Pin , GPIO_PIN_SET);
			  HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_SET);
	          HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_RESET);
		      HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_RESET);
	  		  HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_SET);
		      HAL_GPIO_WritePin(Onlar_GPIO_Port, Onlar_Pin , GPIO_PIN_RESET);
			break;


			case 4 :

			Sifirla();
	          HAL_GPIO_WritePin(Onlar_GPIO_Port, Onlar_Pin , GPIO_PIN_SET);
			  HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_SET);
		      HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_SET);
		      HAL_GPIO_WritePin(Onlar_GPIO_Port, Onlar_Pin , GPIO_PIN_RESET);
			break;


			case 5 :

			Sifirla();
	          HAL_GPIO_WritePin(Onlar_GPIO_Port, Onlar_Pin , GPIO_PIN_SET);
			  HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_SET);
		      HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_SET);
		      HAL_GPIO_WritePin(Onlar_GPIO_Port, Onlar_Pin , GPIO_PIN_RESET);
			break;


			case 6 :

			Sifirla();
	          HAL_GPIO_WritePin(Onlar_GPIO_Port, Onlar_Pin , GPIO_PIN_SET);
			  HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_SET);
		      HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_SET);
		      HAL_GPIO_WritePin(Onlar_GPIO_Port, Onlar_Pin , GPIO_PIN_RESET);
			break;


			case 7 :

			Sifirla();
	          HAL_GPIO_WritePin(Onlar_GPIO_Port, Onlar_Pin , GPIO_PIN_SET);
			  HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_RESET);
		      HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_RESET);
		      HAL_GPIO_WritePin(Onlar_GPIO_Port, Onlar_Pin , GPIO_PIN_RESET);
			break;


			case 8 :

			Sifirla();
	          HAL_GPIO_WritePin(Onlar_GPIO_Port, Onlar_Pin , GPIO_PIN_SET);
			  HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_SET);
		      HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_SET);
		      HAL_GPIO_WritePin(Onlar_GPIO_Port, Onlar_Pin , GPIO_PIN_RESET);
			break;


			case 9 :

			Sifirla();
	          HAL_GPIO_WritePin(Onlar_GPIO_Port, Onlar_Pin , GPIO_PIN_SET);
			  HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_SET);
		      HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_SET);
		      HAL_GPIO_WritePin(Onlar_GPIO_Port, Onlar_Pin , GPIO_PIN_RESET);
			break;



			}




		//////////XXXXXXXXXXXXXX//YUZLER//XXXXXXXXXXXXX////////////////////////////XXXXXXXXXXXXXX//YUZLER//XXXXXXXXXXXXX////////////////////////////XXXXXXXXXXXXXX//YUZLER//XXXXXXXXXXXXX//////////////////


			switch(yuzler){




				case 0 :
				                      //0
				Sifirla();
			      HAL_GPIO_WritePin(Yuzler_GPIO_Port, Yuzler_Pin , GPIO_PIN_SET);
				  HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_SET);
			      HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_RESET);
		     	  HAL_GPIO_WritePin(Yuzler_GPIO_Port, Yuzler_Pin , GPIO_PIN_RESET);
				break;


				case 1 :

				Sifirla();
			      HAL_GPIO_WritePin(Yuzler_GPIO_Port, Yuzler_Pin , GPIO_PIN_SET);
				  HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_RESET);
				  HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_RESET);
				  HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_RESET);
				  HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_RESET);
			      HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_RESET);
		     	  HAL_GPIO_WritePin(Yuzler_GPIO_Port, Yuzler_Pin , GPIO_PIN_RESET);
				break;


				case 2 :

				Sifirla();
			      HAL_GPIO_WritePin(Yuzler_GPIO_Port, Yuzler_Pin , GPIO_PIN_SET);
				  HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_RESET);
			 	  HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_RESET);
			      HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_SET);
		     	  HAL_GPIO_WritePin(Yuzler_GPIO_Port, Yuzler_Pin , GPIO_PIN_RESET);
				break;


				case 3 :

				Sifirla();
			      HAL_GPIO_WritePin(Yuzler_GPIO_Port, Yuzler_Pin , GPIO_PIN_SET);
				  HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_SET);
		          HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_RESET);
			      HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_RESET);
		  		  HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_SET);
		     	  HAL_GPIO_WritePin(Yuzler_GPIO_Port, Yuzler_Pin , GPIO_PIN_RESET);
				break;


				case 4 :

				Sifirla();
			      HAL_GPIO_WritePin(Yuzler_GPIO_Port, Yuzler_Pin , GPIO_PIN_SET);
				  HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_RESET);
				  HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_RESET);
				  HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_RESET);
				  HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_SET);
			      HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_SET);
		     	  HAL_GPIO_WritePin(Yuzler_GPIO_Port, Yuzler_Pin , GPIO_PIN_RESET);
				break;


				case 5 :

				Sifirla();
			      HAL_GPIO_WritePin(Yuzler_GPIO_Port, Yuzler_Pin , GPIO_PIN_SET);
				  HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_RESET);
				  HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_RESET);
				  HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_SET);
			      HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_SET);
		     	  HAL_GPIO_WritePin(Yuzler_GPIO_Port, Yuzler_Pin , GPIO_PIN_RESET);
				break;


				case 6 :

				Sifirla();
			      HAL_GPIO_WritePin(Yuzler_GPIO_Port, Yuzler_Pin , GPIO_PIN_SET);
				  HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_RESET);
				  HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_SET);
			      HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_SET);
		     	  HAL_GPIO_WritePin(Yuzler_GPIO_Port, Yuzler_Pin , GPIO_PIN_RESET);
				break;


				case 7 :

				Sifirla();
			      HAL_GPIO_WritePin(Yuzler_GPIO_Port, Yuzler_Pin , GPIO_PIN_SET);
				  HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_RESET);
				  HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_RESET);
				  HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_RESET);
			      HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_RESET);
		     	  HAL_GPIO_WritePin(Yuzler_GPIO_Port, Yuzler_Pin , GPIO_PIN_RESET);
				break;


				case 8 :

				Sifirla();
			      HAL_GPIO_WritePin(Yuzler_GPIO_Port, Yuzler_Pin , GPIO_PIN_SET);
				  HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_SET);
			      HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_SET);
		     	  HAL_GPIO_WritePin(Yuzler_GPIO_Port, Yuzler_Pin , GPIO_PIN_RESET);
				break;


				case 9 :

				Sifirla();
			      HAL_GPIO_WritePin(Yuzler_GPIO_Port, Yuzler_Pin , GPIO_PIN_SET);
				  HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_RESET);
				  HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_SET);
			      HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_SET);
		     	  HAL_GPIO_WritePin(Yuzler_GPIO_Port, Yuzler_Pin , GPIO_PIN_RESET);
				break;



				}






}




