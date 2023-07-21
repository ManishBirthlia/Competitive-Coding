#include <curl/curl.h>
#include <iostream>

int main(int argc, char* argv[])
{
    // Initialize libcurl
    curl_global_init(CURL_GLOBAL_DEFAULT);

    // Create a curl handle
    CURL* curl = curl_easy_init();
    if (curl)
    {
        // Set the video URL
        curl_easy_setopt(curl, CURLOPT_URL, "https://www.youtube.com/watch?v=VIDEO_ID");

        // Set the output file name
        FILE* fp = fopen("video.mp4", "wb");
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp);

        // Perform the download
        CURLcode res = curl_easy_perform(curl);
        if (res != CURLE_OK)
        {
            std::cerr << "Error: " << curl_easy_strerror(res) << std::endl;
        }

        // Clean up
        curl_easy_cleanup(curl);
        fclose(fp);
    }

    // Cleanup libcurl
    curl_global_cleanup();

    return 0;
}
