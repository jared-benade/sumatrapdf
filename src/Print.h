/* Copyright 2020 the SumatraPDF project authors (see AUTHORS file).
   License: GPLv3 */

bool PrintFile(const WCHAR* fileName, WCHAR* printerName = nullptr, bool displayErrors = true,
               const WCHAR* settings = nullptr, const WCHAR* logFilePath = nullptr);
bool PrintFile(EngineBase* engine, WCHAR* printerName = nullptr, bool displayErrors = true,
               const WCHAR* settings = nullptr, const WCHAR* logFilePath = nullptr);
void OnMenuPrint(WindowInfo* win, bool waitForCompletion = false, const WCHAR* logFilePath = nullptr);
void AbortPrinting(WindowInfo* win);
