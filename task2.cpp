#include <iostream>

using namespace std;
int main(int argc, char* argv[], char* envp[])
{
  cout << "Args:" <<endl;
  for(int i = 0; i < argc; i++)
  {
     cout << "arg[" << i << "]: " << argv[i] << endl; 
  }
  
  cout << "Env:" <<endl;
  int i = 0;
  while (envp[i])
  {  
     cout << "env[" << i << "]: " << envp[i] << endl;
     i++;
  }
  return 0;
}

/*
TASK

Напишите программу, распечатывающую значения аргументов
командной строки и параметров окружающей среды для текущего
процесса.
*/