#ifndef GIT_EXAMPLE_IMAGE_VIEWER_BITMAPIMAGE_H
#define GIT_EXAMPLE_IMAGE_VIEWER_BITMAPIMAGE_H

#include <string>

class BitmapImage {
public:
    BitmapImage();

    ~BitmapImage();

    bool load(std::string name);

    
private:
    int width, height;
    int* buffer;
    std::string name;
public:
    char getChannels() const;

    char getDepth() const;

    bool resize(int width,int height){
        this->height=height;
        this->width=width;
    }

private:
    char channels;
    char depth;
};


#endif //GIT_EXAMPLE_IMAGE_VIEWER_BITMAPIMAGE_H
