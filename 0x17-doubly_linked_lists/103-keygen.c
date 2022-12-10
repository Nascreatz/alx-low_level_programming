#include <stdio>
int len_e = GetWindowTextLength(GetDlgItem(hwnd, IDC_EMAIL));
int len_f = GetWindowTextLength(GetDlgItem(hwnd, IDC_FIRST));
int len_l = GetWindowTextLength(GetDlgItem(hwnd, IDC_LAST));

if(len_e > 0 && len_f > 0 && len_l > 0)  {
  if(len_e > 2 && len_f > 2 && len_l > 2) {
    char *buf_e;
    buf_e = (char*)GlobalAlloc(GPTR, len_e + 1);
    GetDlgItemText(hwnd, IDC_EMAIL, buf_e, len_e + 1);
							
    char *buf_f;
    buf_f = (char*)GlobalAlloc(GPTR, len_f + 1);
    GetDlgItemText(hwnd, IDC_FIRST, buf_f, len_f + 1);
							
    char *buf_l;
    buf_l = (char*)GlobalAlloc(GPTR, len_l + 1);
    GetDlgItemText(hwnd, IDC_LAST, buf_l, len_l + 1);
							
    char tmp[] = { buf_e[0], buf_e[1], buf_f[0], buf_f[1], buf_l[0], buf_l[1] };
    char enc[] = "qazwsx123*()*()&";
    int len_k = strlen(tmp);
							
    char key[0];
    int i;
    for (i = 0; i < len_k; i++) {
      if (i == 2 || i == 4)
        SendMessage(key_hWnd, EM_REPLACESEL, 0, "-");
      tmp[i] = tmp[i] ^ enc[i];
      if (tmp[i] < 0x10)
        SendMessage(key_hWnd, EM_REPLACESEL, 0, "Z");
      itoa((int)tmp[i], key, 16);
      strupr(key);
      SendMessage(key_hWnd, EM_REPLACESEL, 0, key);
    }

    GlobalFree((HANDLE)buf_e);
    GlobalFree((HANDLE)buf_f);
    GlobalFree((HANDLE)buf_l);
  } else {
    MessageBox(hwnd, "All fields must be more than 2 characters long!", "Warning", MB_OK);
  }
}
