#include <iostream>
#include <Windows.h>

int main()
{
	
	PROCESS_MITIGATION_BINARY_SIGNATURE_POLICY sp = {};
	sp.MicrosoftSignedOnly = 1;
	SetProcessMitigationPolicy(ProcessSignaturePolicy, &sp, sizeof(sp));
	MessageBoxA(0,"test", 0, 0);
	return 0;
}