void __declspec(naked) processScriptsEventHook()
{
	__asm
	{
		pushad
		call plugin::processScriptsEvent
		popad
		jmp Addresses::nProcessScriptsEventRet
	}
}