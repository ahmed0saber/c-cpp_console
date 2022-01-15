#include <windows.h>

// Forward declaration of the LeftClick function
void LeftClick ( );

// Forward declaration of the MouseMove function
void MouseMove ( int x, int y );

int main()
{
    MouseMove(530, 1);
    LeftClick();
    MouseMove(530, 350);
    LeftClick();
    return 0;
}

// LeftClick function
void LeftClick ( )
{  
  INPUT    Input={0};
  // left down 
  Input.type      = INPUT_MOUSE;
  Input.mi.dwFlags  = MOUSEEVENTF_LEFTDOWN;
  ::SendInput(1,&Input,sizeof(INPUT));

  // left up
  ::ZeroMemory(&Input,sizeof(INPUT));
  Input.type      = INPUT_MOUSE;
  Input.mi.dwFlags  = MOUSEEVENTF_LEFTUP;
  ::SendInput(1,&Input,sizeof(INPUT));
}

// MouseMove function
void MouseMove (int x, int y )
{  
	double fScreenWidth    = ::GetSystemMetrics( SM_CXSCREEN )-1; 
	double fScreenHeight  = ::GetSystemMetrics( SM_CYSCREEN )-1; 
	double fx = x*(65535.0f/fScreenWidth);
	double fy = y*(65535.0f/fScreenHeight);
	INPUT  Input={0};
	Input.type      = INPUT_MOUSE;
	Input.mi.dwFlags  = MOUSEEVENTF_MOVE|MOUSEEVENTF_ABSOLUTE;
	Input.mi.dx = fx;
	Input.mi.dy = fy;
	::SendInput(1,&Input,sizeof(INPUT));
}
