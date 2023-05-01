#include "git_experimental.cpp"

int main()
{
    Github_Experimental git;
    cout << "Version: " << git.get_version() << endl;
    cout << "Author: " << git.get_author() << endl;
    return 0;
}
