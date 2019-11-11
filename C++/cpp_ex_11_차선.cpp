void imageProcessing(Mat &image, Mat &result)
{
    result = imageCopy(image);
    convertColor(result, result, COLOR_BGRA2BGR);
    vector<Point> src_pts, dst_pts;
    int x1, y1, x2, y2;
    x1 = 888;
    y1 = 445;
    x2 = 908;
    y2 = 455;
    int h = result.rows;
    int w = result.cols;
    src_pts.push_back(Point(561, 479));
    src_pts.push_back(Point(778, 479));
    src_pts.push_back(Point(1111, 642));
    src_pts.push_back(Point(324, 642));
    dst_pts.push_back(Point(int(w * 0.2), int(h * 0.1)));
    dst_pts.push_back(Point(int(w * 0.8), int(h * 0.1)));
    dst_pts.push_back(Point(int(w * 0.8), int(h * 1.0)));
    dst_pts.push_back(Point(int(w * 0.2), int(h * 1.0)));
    imagePerspectiveTransformation(result, result, src_pts, dst_pts, Size(w, h));
    
   return;
}