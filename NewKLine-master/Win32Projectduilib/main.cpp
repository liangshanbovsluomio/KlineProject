#include "main.h"

int APIENTRY _tWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPTSTR lpCmdLine, int nCmdShow)
{
	CPaintManagerUI::SetInstance(hInstance);                 //ʵ���������Ⱦ�����
	CPaintManagerUI::SetResourcePath(CPaintManagerUI::GetInstancePath());   // ������Դ��Ĭ��·�����˴�����Ϊ��exe��ͬһĿ¼��
	CDuiFrameWnd duiFrame;
	duiFrame.Create(NULL, _T("DUIWnd"), UI_WNDSTYLE_FRAME, WS_EX_WINDOWEDGE);     //ע�ᴰ�� ע�ᳬ�� -ע�ᴰ����-��������-handlemessage��WM_CREATE��Ϣ����
	duiFrame.ShowModal();
	CPaintManagerUI::MessageLoop();                           //������Ϣѭ��
	return 0;
}