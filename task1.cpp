#include <sys/types.h>
#include <unistd.h>
#include <iostream>

using namespace std;
int main()
{
  uid_t uid = getuid();
  gid_t gid = getgid();
  pid_t pid = getpid();
  pid_t ppid = getppid();
  cout << "UID: " << uid << " GID: " << gid << " PID: "<< pid << " PPID: " << ppid <<endl;
  return 0;
}

/* Task
Напишите, откомпилируйте и запустите программу выводящую
идентификатор пользователя, идентификатор группы, идентификатор процесса и идентификатор родительского процесса. Запустите программу несколько раз,
посмотрите, какие идентификаторы меняются и как, объясните это явление.
*/