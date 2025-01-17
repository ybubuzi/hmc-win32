#include <windows.h>
#include <node_api.h>
#include <string>
#include <assert.h>
#include <stringapiset.h>
#include <vector>
#include <tchar.h>
#include <map>
#include <any>


// #include <locale>
// #include <codecvt>
using namespace std;
#ifdef UNICODE
typedef LPWSTR LPTSTR;
typedef LPCWSTR LPCTSTR;
#else
typedef LPSTR LPTSTR;
typedef LPCSTR LPCTSTR;
#endif
napi_value _create_false_Boolean(napi_env env);

napi_value _create_true_Boolean(napi_env env);

napi_value _create_bool_Boolean(napi_env env, bool SetBoolean);

napi_value _create_String_Array(napi_env env, vector<string> stringVector);

napi_value _create_int64_Number(napi_env env, int64_t SetNumber);

napi_value _create_int32_Number(napi_env env, int SetNumber);

napi_value _create_W2U8_string(napi_env env, wchar_t *SetString);

napi_value _create_A2U8_string(napi_env env, char *SetString);

napi_value _create_String(napi_env env, string SetString);

napi_value _create_char_string(napi_env env, char *SetString);

napi_value _create_buff_Buffer(napi_env env, void **data, size_t size);

string UTF8ToGBK(const char *str);

inline string _A2U8_(const char *pszText);
inline wstring _A2W_(const char *pszText);
inline string _U82A_(const char *pszText);
inline wstring _U82W_(const char *pszText);
inline string _W2A_(const wchar_t *pwszText);
inline string _W2U8_(const wchar_t *pwszText);
// inline wstring _CW2W_(const WCHAR *pszText);

string _NAPI_Call_Type(napi_valuetype valuetype0);
wstring call_String_NAPI_WINAPI_W(napi_env env, napi_value value);

string call_String_NAPI_WINAPI_A(napi_env env, napi_value value);

string call_String_NAPI_UTF8(napi_env env, napi_value value);

bool util_diff_napi_type(napi_env env, napi_value value, napi_valuetype valuetype);
napi_valuetype util_get_napi_type(napi_env env, napi_value value);
string util_get_napi_type_name(napi_env env, napi_value value);

struct hmcRect;
bool rectInRect(hmcRect inRect, hmcRect mian);
hmcRect RECT2Rect(RECT inputRect);
bool RECTinRECT(RECT inRect, RECT mian);
bool pointInRect(POINT pt, hmcRect rect);
bool isInside(int x1, int y1, int x2, int y2, int x, int y);
vector<RECT> GetDeviceCapsAll();