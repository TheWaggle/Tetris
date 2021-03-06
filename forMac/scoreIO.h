#include <stdio.h>
#include <curl/curl.h>

int post_score(char *post_data)
{
  CURLcode ret;
  CURL *hnd;

  hnd = curl_easy_init();
  curl_easy_setopt(hnd, CURLOPT_BUFFERSIZE, 102400L);
  curl_easy_setopt(hnd, CURLOPT_URL, "http://0.0.0.0:8080/post_score"); // Post送信するURI, portによって変更する必要あり.
  curl_easy_setopt(hnd, CURLOPT_NOPROGRESS, 1L);
  curl_easy_setopt(hnd, CURLOPT_POSTFIELDS, post_data); // Post送信で渡す際に指定するscore.
  curl_easy_setopt(hnd, CURLOPT_POSTFIELDSIZE_LARGE, (curl_off_t)7);
  curl_easy_setopt(hnd, CURLOPT_USERAGENT, "curl/7.68.0");
  curl_easy_setopt(hnd, CURLOPT_MAXREDIRS, 50L);
  curl_easy_setopt(hnd, CURLOPT_HTTP_VERSION, (long)CURL_HTTP_VERSION_2TLS);
  curl_easy_setopt(hnd, CURLOPT_CUSTOMREQUEST, "POST");
  curl_easy_setopt(hnd, CURLOPT_FTP_SKIP_PASV_IP, 1L);
  curl_easy_setopt(hnd, CURLOPT_TCP_KEEPALIVE, 1L);

  ret = curl_easy_perform(hnd);

  curl_easy_cleanup(hnd);
  hnd = NULL;

  return (int)ret;
}

int get_score()
{
  CURLcode ret;
  CURL *hnd;

  hnd = curl_easy_init();
  curl_easy_setopt(hnd, CURLOPT_BUFFERSIZE, 102400L);
  curl_easy_setopt(hnd, CURLOPT_URL, "http://0.0.0.0:8080/get_score"); // Post送信するURI, portによって変更する必要あり.
  curl_easy_setopt(hnd, CURLOPT_NOPROGRESS, 1L);
  curl_easy_setopt(hnd, CURLOPT_USERAGENT, "curl/7.68.0");
  curl_easy_setopt(hnd, CURLOPT_MAXREDIRS, 50L);
  curl_easy_setopt(hnd, CURLOPT_HTTP_VERSION, (long)CURL_HTTP_VERSION_2TLS);
  curl_easy_setopt(hnd, CURLOPT_FTP_SKIP_PASV_IP, 1L);
  curl_easy_setopt(hnd, CURLOPT_TCP_KEEPALIVE, 1L);

  ret = curl_easy_perform(hnd);

  curl_easy_cleanup(hnd);
  hnd = NULL;

  return (int)ret;

}