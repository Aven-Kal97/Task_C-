 # include<iostream>
 # include<cmath>
 int main()
 {
 int resultado;
 // Primera operacion- resultado 16
 std::cout << "[11-{(-18)/9}^2]*2+2\n";
 resultado = ( 11- pow( (-18 ) / 9, 2 ) ) * 2 + 2;
 std::cout << "Resultado: " << resultado << "\n";

 //Segunda operacion 
  std::cout << "[(-9)-{(-15)/(-5)}^2]*(-8)/(-8)\n";
 resultado = ( (-9 )- pow( (-15 ) / (-5 ), 2 ) ) * (-8) + (-8 );
 std::cout << "Resultado: " << resultado << "\n";

 // Tercera operacion
  std::cout << "(-7)-(-5)*[(-4)-{(-4)^2+(-5)}]\n";
 resultado = (-7 )- (-5 ) * ( (-4 )- (pow(-4, 2 ) + (-5 ) ) );
 std::cout << "Resultado: " << resultado << "\n";

 // Cuarta operacion
 std::cout <<" 3 - (-11) * [(-2) - {(-2)^2+(-11)}]\n";
 resultado = 3 - (-11) * ((-2)-(pow(-2,2)+(-11)));
 std::cout << "Resultado: " << resultado << "\n";

 //Quinta operacion
 std::cout <<"[(-9) - {(-5)^3 - (-9) }] * ((-5) - (-4))\n";
 resultado = ((-9)-(pow(-5,3)-(-9)))*((-5)-(-4));
 std::cout << "Resultado: " << resultado << "\n";

 //Sexta operacion 
 std::cout <<"[{3^2 + 10} * 3] - 7 + 10\n";
 resultado = ((pow(3,2)+10)*3)-7+10;
 std::cout << "Resultado: " << resultado << "\n";

 //Septima operacion 
 std::cout <<" [{3^3 + 3} * 3] - 8 + 3\n";
 resultado = ((pow(3,3)+3)*3)-8+3;
 std::cout << "Resultado: " << resultado << "\n";

 //Octava operacion 
 std::cout <<"(-8) - 2 * [(-5) - {(-5)^2 + (-2)}]\n";
 resultado = (-8)-2*((-5)-((pow(-5,2))+(-2)));
 std::cout << "Resultado: " << resultado << "\n";

 //Novena operacion 
 std::cout <<"[(-4) - {(-8) ÷ (-4)}^3] * (-6) + (-6)\n";
 resultado = ((-4)-pow(((-8)/(-4)),3))*(-6)+(-6);
 std::cout << "Resultado: " << resultado << "\n";

 //Decima operacion 
 std::cout <<"[(-3) - {(-2)^3 - (-3) }] * ((-2) - (-10))\n";
 resultado = ((-3)-((pow(-2,3))-(-3)))*((-2)-(-10));
 std::cout << "Resultado: " << resultado << "\n";

 //Decimo primera operacion
 std::cout <<"[{5^2 + 11} * 5] - 10 + 11\n";
 resultado = ((pow(5,2)+11)*5) -10 + 11;
 std::cout << "Resultado: " << resultado << "\n";

 //Decimo segunda operacion
 std::cout <<"[{(-96) ÷ (-4)}^2 - (-11)] * (-6) + (-6)\n";
 resultado= (pow((-96)/(-4),2)-(-11))*(-6)+(-6);
 std::cout << "Resultado: " << resultado << "\n";
 }