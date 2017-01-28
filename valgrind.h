/**
 * \file valgrind.h
 *
 * ValGrind Analyze
 *
 */

/*
Conditional jump or move depends on uninitialised value(s)
  in thread_img::run() in /home/chris/Desktop/Projet_V5/thread_img.cpp:50
  1: QColor::setRgb(int, int, int, int) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  2: QColor::QColor(int, int, int, int) in /usr/include/qt4/QtGui/qcolor.h:283
  3: thread_img::run() in /home/chris/Desktop/Projet_V5/thread_img.cpp:50
  4: Control::allGrayscale(QList&lt;QGraphicsItem*&gt;) in /home/chris/Desktop/Projet_V5/control.cpp:88
  5: View::allGrayscale() in /home/chris/Desktop/Projet_V5/view.cpp:354
  6: View::qt_static_metacall(QObject*, QMetaObject::Call, int, void**) in /home/chris/Desktop/build-Projet_V5-Desktop-Debug/moc_view.cpp:75
  7: QMetaObject::activate(QObject*, QMetaObject const*, int, void**) in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7
  8: QAction::triggered(bool) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  9: QAction::activate(QAction::ActionEvent) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  10: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  11: QAbstractButton::mouseReleaseEvent(QMouseEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  12: QToolButton::mouseReleaseEvent(QMouseEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  13: QWidget::event(QEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  14: QApplicationPrivate::notify_helper(QObject*, QEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  15: QApplication::notify(QObject*, QEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  16: QCoreApplication::notifyInternal(QObject*, QEvent*) in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7
  17: QApplicationPrivate::sendMouseEvent(QWidget*, QMouseEvent*, QWidget*, QWidget*, QWidget**, QPointer&lt;QWidget&gt;&amp;, bool) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  18: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  19: QApplication::x11ProcessEvent(_XEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  20: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  21: g_main_context_dispatch in /lib/x86_64-linux-gnu/libglib-2.0.so.0.4800.1
  22: /lib/x86_64-linux-gnu/libglib-2.0.so.0.4800.1
  23: g_main_context_iteration in /lib/x86_64-linux-gnu/libglib-2.0.so.0.4800.1
  24: QEventDispatcherGlib::processEvents(QFlags&lt;QEventLoop::ProcessEventsFlag&gt;) in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7
  25: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
Uninitialised value was created by a heap allocation  1: malloc in /usr/lib/valgrind/vgpreload_memcheck-amd64-linux.so
  2: QImageData::create(QSize const&amp;, QImage::Format, int) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  3: QImage::QImage(QSize const&amp;, QImage::Format) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  4: thread_img::run() in /home/chris/Desktop/Projet_V5/thread_img.cpp:27
  5: Control::allGrayscale(QList&lt;QGraphicsItem*&gt;) in /home/chris/Desktop/Projet_V5/control.cpp:88
  6: View::allGrayscale() in /home/chris/Desktop/Projet_V5/view.cpp:354
  7: View::qt_static_metacall(QObject*, QMetaObject::Call, int, void**) in /home/chris/Desktop/build-Projet_V5-Desktop-Debug/moc_view.cpp:75
  8: QMetaObject::activate(QObject*, QMetaObject const*, int, void**) in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7
  9: QAction::triggered(bool) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  10: QAction::activate(QAction::ActionEvent) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  11: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  12: QAbstractButton::mouseReleaseEvent(QMouseEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  13: QToolButton::mouseReleaseEvent(QMouseEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  14: QWidget::event(QEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  15: QApplicationPrivate::notify_helper(QObject*, QEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  16: QApplication::notify(QObject*, QEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  17: QCoreApplication::notifyInternal(QObject*, QEvent*) in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7
  18: QApplicationPrivate::sendMouseEvent(QWidget*, QMouseEvent*, QWidget*, QWidget*, QWidget**, QPointer&lt;QWidget&gt;&amp;, bool) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  19: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  20: QApplication::x11ProcessEvent(_XEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  21: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  22: g_main_context_dispatch in /lib/x86_64-linux-gnu/libglib-2.0.so.0.4800.1
  23: /lib/x86_64-linux-gnu/libglib-2.0.so.0.4800.1
  24: g_main_context_iteration in /lib/x86_64-linux-gnu/libglib-2.0.so.0.4800.1
  25: QEventDispatcherGlib::processEvents(QFlags&lt;QEventLoop::ProcessEventsFlag&gt;) in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7




Conditional jump or move depends on uninitialised value(s)
  in thread_img::run() in /home/chris/Desktop/Projet_V5/thread_img.cpp:50
  1: QColor::setRgb(int, int, int, int) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  2: QColor::QColor(int, int, int, int) in /usr/include/qt4/QtGui/qcolor.h:283
  3: thread_img::run() in /home/chris/Desktop/Projet_V5/thread_img.cpp:50
  4: Control::allGrayscale(QList&lt;QGraphicsItem*&gt;) in /home/chris/Desktop/Projet_V5/control.cpp:88
  5: View::allGrayscale() in /home/chris/Desktop/Projet_V5/view.cpp:354
  6: View::qt_static_metacall(QObject*, QMetaObject::Call, int, void**) in /home/chris/Desktop/build-Projet_V5-Desktop-Debug/moc_view.cpp:75
  7: QMetaObject::activate(QObject*, QMetaObject const*, int, void**) in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7
  8: QAction::triggered(bool) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  9: QAction::activate(QAction::ActionEvent) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  10: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  11: QAbstractButton::mouseReleaseEvent(QMouseEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  12: QToolButton::mouseReleaseEvent(QMouseEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  13: QWidget::event(QEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  14: QApplicationPrivate::notify_helper(QObject*, QEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  15: QApplication::notify(QObject*, QEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  16: QCoreApplication::notifyInternal(QObject*, QEvent*) in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7
  17: QApplicationPrivate::sendMouseEvent(QWidget*, QMouseEvent*, QWidget*, QWidget*, QWidget**, QPointer&lt;QWidget&gt;&amp;, bool) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  18: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  19: QApplication::x11ProcessEvent(_XEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  20: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  21: g_main_context_dispatch in /lib/x86_64-linux-gnu/libglib-2.0.so.0.4800.1
  22: /lib/x86_64-linux-gnu/libglib-2.0.so.0.4800.1
  23: g_main_context_iteration in /lib/x86_64-linux-gnu/libglib-2.0.so.0.4800.1
  24: QEventDispatcherGlib::processEvents(QFlags&lt;QEventLoop::ProcessEventsFlag&gt;) in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7
  25: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
Uninitialised value was created by a heap allocation  1: malloc in /usr/lib/valgrind/vgpreload_memcheck-amd64-linux.so
  2: QImageData::create(QSize const&amp;, QImage::Format, int) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  3: QImage::QImage(QSize const&amp;, QImage::Format) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  4: thread_img::run() in /home/chris/Desktop/Projet_V5/thread_img.cpp:27
  5: Control::allGrayscale(QList&lt;QGraphicsItem*&gt;) in /home/chris/Desktop/Projet_V5/control.cpp:88
  6: View::allGrayscale() in /home/chris/Desktop/Projet_V5/view.cpp:354
  7: View::qt_static_metacall(QObject*, QMetaObject::Call, int, void**) in /home/chris/Desktop/build-Projet_V5-Desktop-Debug/moc_view.cpp:75
  8: QMetaObject::activate(QObject*, QMetaObject const*, int, void**) in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7
  9: QAction::triggered(bool) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  10: QAction::activate(QAction::ActionEvent) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  11: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  12: QAbstractButton::mouseReleaseEvent(QMouseEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  13: QToolButton::mouseReleaseEvent(QMouseEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  14: QWidget::event(QEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  15: QApplicationPrivate::notify_helper(QObject*, QEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  16: QApplication::notify(QObject*, QEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  17: QCoreApplication::notifyInternal(QObject*, QEvent*) in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7
  18: QApplicationPrivate::sendMouseEvent(QWidget*, QMouseEvent*, QWidget*, QWidget*, QWidget**, QPointer&lt;QWidget&gt;&amp;, bool) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  19: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  20: QApplication::x11ProcessEvent(_XEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  21: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  22: g_main_context_dispatch in /lib/x86_64-linux-gnu/libglib-2.0.so.0.4800.1
  23: /lib/x86_64-linux-gnu/libglib-2.0.so.0.4800.1
  24: g_main_context_iteration in /lib/x86_64-linux-gnu/libglib-2.0.so.0.4800.1
  25: QEventDispatcherGlib::processEvents(QFlags&lt;QEventLoop::ProcessEventsFlag&gt;) in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7



Conditional jump or move depends on uninitialised value(s)
  in thread_img::run() in /home/chris/Desktop/Projet_V5/thread_img.cpp:50
  1: QColor::setRgb(int, int, int, int) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  2: QColor::QColor(int, int, int, int) in /usr/include/qt4/QtGui/qcolor.h:283
  3: thread_img::run() in /home/chris/Desktop/Projet_V5/thread_img.cpp:50
  4: Control::allGrayscale(QList&lt;QGraphicsItem*&gt;) in /home/chris/Desktop/Projet_V5/control.cpp:88
  5: View::allGrayscale() in /home/chris/Desktop/Projet_V5/view.cpp:354
  6: View::qt_static_metacall(QObject*, QMetaObject::Call, int, void**) in /home/chris/Desktop/build-Projet_V5-Desktop-Debug/moc_view.cpp:75
  7: QMetaObject::activate(QObject*, QMetaObject const*, int, void**) in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7
  8: QAction::triggered(bool) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  9: QAction::activate(QAction::ActionEvent) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  10: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  11: QAbstractButton::mouseReleaseEvent(QMouseEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  12: QToolButton::mouseReleaseEvent(QMouseEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  13: QWidget::event(QEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  14: QApplicationPrivate::notify_helper(QObject*, QEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  15: QApplication::notify(QObject*, QEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  16: QCoreApplication::notifyInternal(QObject*, QEvent*) in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7
  17: QApplicationPrivate::sendMouseEvent(QWidget*, QMouseEvent*, QWidget*, QWidget*, QWidget**, QPointer&lt;QWidget&gt;&amp;, bool) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  18: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  19: QApplication::x11ProcessEvent(_XEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  20: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  21: g_main_context_dispatch in /lib/x86_64-linux-gnu/libglib-2.0.so.0.4800.1
  22: /lib/x86_64-linux-gnu/libglib-2.0.so.0.4800.1
  23: g_main_context_iteration in /lib/x86_64-linux-gnu/libglib-2.0.so.0.4800.1
  24: QEventDispatcherGlib::processEvents(QFlags&lt;QEventLoop::ProcessEventsFlag&gt;) in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7
  25: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
Uninitialised value was created by a heap allocation  1: malloc in /usr/lib/valgrind/vgpreload_memcheck-amd64-linux.so
  2: QImageData::create(QSize const&amp;, QImage::Format, int) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  3: QImage::QImage(QSize const&amp;, QImage::Format) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  4: thread_img::run() in /home/chris/Desktop/Projet_V5/thread_img.cpp:27
  5: Control::allGrayscale(QList&lt;QGraphicsItem*&gt;) in /home/chris/Desktop/Projet_V5/control.cpp:88
  6: View::allGrayscale() in /home/chris/Desktop/Projet_V5/view.cpp:354
  7: View::qt_static_metacall(QObject*, QMetaObject::Call, int, void**) in /home/chris/Desktop/build-Projet_V5-Desktop-Debug/moc_view.cpp:75
  8: QMetaObject::activate(QObject*, QMetaObject const*, int, void**) in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7
  9: QAction::triggered(bool) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  10: QAction::activate(QAction::ActionEvent) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  11: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  12: QAbstractButton::mouseReleaseEvent(QMouseEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  13: QToolButton::mouseReleaseEvent(QMouseEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  14: QWidget::event(QEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  15: QApplicationPrivate::notify_helper(QObject*, QEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  16: QApplication::notify(QObject*, QEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  17: QCoreApplication::notifyInternal(QObject*, QEvent*) in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7
  18: QApplicationPrivate::sendMouseEvent(QWidget*, QMouseEvent*, QWidget*, QWidget*, QWidget**, QPointer&lt;QWidget&gt;&amp;, bool) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  19: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  20: QApplication::x11ProcessEvent(_XEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  21: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  22: g_main_context_dispatch in /lib/x86_64-linux-gnu/libglib-2.0.so.0.4800.1
  23: /lib/x86_64-linux-gnu/libglib-2.0.so.0.4800.1
  24: g_main_context_iteration in /lib/x86_64-linux-gnu/libglib-2.0.so.0.4800.1
  25: QEventDispatcherGlib::processEvents(QFlags&lt;QEventLoop::ProcessEventsFlag&gt;) in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7




Conditional jump or move depends on uninitialised value(s)
  in Control::convertForPeleMele(QImage) in /home/chris/Desktop/Projet_V5/control.cpp:100
  1: QImageData::checkForAlphaPixels() const in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  2: QRasterPixmapData::createPixmapForImage(QImage&amp;, QFlags&lt;Qt::ImageConversionFlag&gt;, bool) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  3: QRasterPixmapData::fromImage(QImage const&amp;, QFlags&lt;Qt::ImageConversionFlag&gt;) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  4: QPixmap::fromImage(QImage const&amp;, QFlags&lt;Qt::ImageConversionFlag&gt;) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  5: QPixmap::convertFromImage(QImage const&amp;, QFlags&lt;Qt::ImageConversionFlag&gt;) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  6: Control::convertForPeleMele(QImage) in /home/chris/Desktop/Projet_V5/control.cpp:100
  7: View::peleMele() in /home/chris/Desktop/Projet_V5/view.cpp:322
  8: View::qt_static_metacall(QObject*, QMetaObject::Call, int, void**) in /home/chris/Desktop/build-Projet_V5-Desktop-Debug/moc_view.cpp:73
  9: QMetaObject::activate(QObject*, QMetaObject const*, int, void**) in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7
  10: QAction::triggered(bool) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  11: QAction::activate(QAction::ActionEvent) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  12: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  13: QAbstractButton::mouseReleaseEvent(QMouseEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  14: QToolButton::mouseReleaseEvent(QMouseEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  15: QWidget::event(QEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  16: QApplicationPrivate::notify_helper(QObject*, QEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  17: QApplication::notify(QObject*, QEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  18: QCoreApplication::notifyInternal(QObject*, QEvent*) in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7
  19: QApplicationPrivate::sendMouseEvent(QWidget*, QMouseEvent*, QWidget*, QWidget*, QWidget**, QPointer&lt;QWidget&gt;&amp;, bool) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  20: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  21: QApplication::x11ProcessEvent(_XEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  22: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  23: g_main_context_dispatch in /lib/x86_64-linux-gnu/libglib-2.0.so.0.4800.1
  24: /lib/x86_64-linux-gnu/libglib-2.0.so.0.4800.1
  25: g_main_context_iteration in /lib/x86_64-linux-gnu/libglib-2.0.so.0.4800.1
Uninitialised value was created by a heap allocation  1: malloc in /usr/lib/valgrind/vgpreload_memcheck-amd64-linux.so
  2: QImageData::create(QSize const&amp;, QImage::Format, int) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  3: QImage::QImage(int, int, QImage::Format) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  4: View::peleMele() in /home/chris/Desktop/Projet_V5/view.cpp:315
  5: View::qt_static_metacall(QObject*, QMetaObject::Call, int, void**) in /home/chris/Desktop/build-Projet_V5-Desktop-Debug/moc_view.cpp:73
  6: QMetaObject::activate(QObject*, QMetaObject const*, int, void**) in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7
  7: QAction::triggered(bool) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  8: QAction::activate(QAction::ActionEvent) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  9: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  10: QAbstractButton::mouseReleaseEvent(QMouseEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  11: QToolButton::mouseReleaseEvent(QMouseEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  12: QWidget::event(QEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  13: QApplicationPrivate::notify_helper(QObject*, QEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  14: QApplication::notify(QObject*, QEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  15: QCoreApplication::notifyInternal(QObject*, QEvent*) in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7
  16: QApplicationPrivate::sendMouseEvent(QWidget*, QMouseEvent*, QWidget*, QWidget*, QWidget**, QPointer&lt;QWidget&gt;&amp;, bool) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  17: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  18: QApplication::x11ProcessEvent(_XEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  19: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  20: g_main_context_dispatch in /lib/x86_64-linux-gnu/libglib-2.0.so.0.4800.1
  21: /lib/x86_64-linux-gnu/libglib-2.0.so.0.4800.1
  22: g_main_context_iteration in /lib/x86_64-linux-gnu/libglib-2.0.so.0.4800.1
  23: QEventDispatcherGlib::processEvents(QFlags&lt;QEventLoop::ProcessEventsFlag&gt;) in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7
  24: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  25: QEventLoop::processEvents(QFlags&lt;QEventLoop::ProcessEventsFlag&gt;) in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7




Conditional jump or move depends on uninitialised value(s)
  in Control::convertForPeleMele(QImage) in /home/chris/Desktop/Projet_V5/control.cpp:100
  1: QRasterPixmapData::createPixmapForImage(QImage&amp;, QFlags&lt;Qt::ImageConversionFlag&gt;, bool) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  2: QRasterPixmapData::fromImage(QImage const&amp;, QFlags&lt;Qt::ImageConversionFlag&gt;) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  3: QPixmap::fromImage(QImage const&amp;, QFlags&lt;Qt::ImageConversionFlag&gt;) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  4: QPixmap::convertFromImage(QImage const&amp;, QFlags&lt;Qt::ImageConversionFlag&gt;) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  5: Control::convertForPeleMele(QImage) in /home/chris/Desktop/Projet_V5/control.cpp:100
  6: View::peleMele() in /home/chris/Desktop/Projet_V5/view.cpp:322
  7: View::qt_static_metacall(QObject*, QMetaObject::Call, int, void**) in /home/chris/Desktop/build-Projet_V5-Desktop-Debug/moc_view.cpp:73
  8: QMetaObject::activate(QObject*, QMetaObject const*, int, void**) in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7
  9: QAction::triggered(bool) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  10: QAction::activate(QAction::ActionEvent) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  11: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  12: QAbstractButton::mouseReleaseEvent(QMouseEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  13: QToolButton::mouseReleaseEvent(QMouseEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  14: QWidget::event(QEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  15: QApplicationPrivate::notify_helper(QObject*, QEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  16: QApplication::notify(QObject*, QEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  17: QCoreApplication::notifyInternal(QObject*, QEvent*) in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7
  18: QApplicationPrivate::sendMouseEvent(QWidget*, QMouseEvent*, QWidget*, QWidget*, QWidget**, QPointer&lt;QWidget&gt;&amp;, bool) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  19: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  20: QApplication::x11ProcessEvent(_XEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  21: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  22: g_main_context_dispatch in /lib/x86_64-linux-gnu/libglib-2.0.so.0.4800.1
  23: /lib/x86_64-linux-gnu/libglib-2.0.so.0.4800.1
  24: g_main_context_iteration in /lib/x86_64-linux-gnu/libglib-2.0.so.0.4800.1
  25: QEventDispatcherGlib::processEvents(QFlags&lt;QEventLoop::ProcessEventsFlag&gt;) in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7
Uninitialised value was created by a heap allocation  1: malloc in /usr/lib/valgrind/vgpreload_memcheck-amd64-linux.so
  2: QImageData::create(QSize const&amp;, QImage::Format, int) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  3: QImage::QImage(int, int, QImage::Format) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  4: View::peleMele() in /home/chris/Desktop/Projet_V5/view.cpp:315
  5: View::qt_static_metacall(QObject*, QMetaObject::Call, int, void**) in /home/chris/Desktop/build-Projet_V5-Desktop-Debug/moc_view.cpp:73
  6: QMetaObject::activate(QObject*, QMetaObject const*, int, void**) in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7
  7: QAction::triggered(bool) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  8: QAction::activate(QAction::ActionEvent) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  9: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  10: QAbstractButton::mouseReleaseEvent(QMouseEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  11: QToolButton::mouseReleaseEvent(QMouseEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  12: QWidget::event(QEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  13: QApplicationPrivate::notify_helper(QObject*, QEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  14: QApplication::notify(QObject*, QEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  15: QCoreApplication::notifyInternal(QObject*, QEvent*) in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7
  16: QApplicationPrivate::sendMouseEvent(QWidget*, QMouseEvent*, QWidget*, QWidget*, QWidget**, QPointer&lt;QWidget&gt;&amp;, bool) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  17: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  18: QApplication::x11ProcessEvent(_XEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  19: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  20: g_main_context_dispatch in /lib/x86_64-linux-gnu/libglib-2.0.so.0.4800.1
  21: /lib/x86_64-linux-gnu/libglib-2.0.so.0.4800.1
  22: g_main_context_iteration in /lib/x86_64-linux-gnu/libglib-2.0.so.0.4800.1
  23: QEventDispatcherGlib::processEvents(QFlags&lt;QEventLoop::ProcessEventsFlag&gt;) in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7
  24: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  25: QEventLoop::processEvents(QFlags&lt;QEventLoop::ProcessEventsFlag&gt;) in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7





Syscall param write(buf) points to uninitialised byte(s)
  in Model::SaveModImage(QString, QImage) in /home/chris/Desktop/Projet_V5/model.cpp:24
  1: /build/glibc-Qz8a69/glibc-2.23/io/../sysdeps/unix/syscall-template.S:84
  2: /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7
  3: QFile::flush() in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7
  4: QImageWriter::write(QImage const&amp;) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  5: QImage::save(QString const&amp;, char const*, int) const in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  6: Model::SaveModImage(QString, QImage) in /home/chris/Desktop/Projet_V5/model.cpp:24
  7: Control::Save_Image(QString, QImage) in /home/chris/Desktop/Projet_V5/control.cpp:67
  8: View::SaveImage() in /home/chris/Desktop/Projet_V5/view.cpp:291
  9: View::qt_static_metacall(QObject*, QMetaObject::Call, int, void**) in /home/chris/Desktop/build-Projet_V5-Desktop-Debug/moc_view.cpp:72
  10: QMetaObject::activate(QObject*, QMetaObject const*, int, void**) in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7
  11: QAction::triggered(bool) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  12: QAction::activate(QAction::ActionEvent) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  13: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  14: QAbstractButton::mouseReleaseEvent(QMouseEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  15: QToolButton::mouseReleaseEvent(QMouseEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  16: QWidget::event(QEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  17: QApplicationPrivate::notify_helper(QObject*, QEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  18: QApplication::notify(QObject*, QEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  19: QCoreApplication::notifyInternal(QObject*, QEvent*) in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7
  20: QApplicationPrivate::sendMouseEvent(QWidget*, QMouseEvent*, QWidget*, QWidget*, QWidget**, QPointer&lt;QWidget&gt;&amp;, bool) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  21: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  22: QApplication::x11ProcessEvent(_XEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  23: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  24: g_main_context_dispatch in /lib/x86_64-linux-gnu/libglib-2.0.so.0.4800.1
  25: /lib/x86_64-linux-gnu/libglib-2.0.so.0.4800.1
Address 0x25fadc45 is 821 bytes inside a block of size 32,768 alloc'd  1: malloc in /usr/lib/valgrind/vgpreload_memcheck-amd64-linux.so
  2: QByteArray::realloc(int) in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7
  3: QByteArray::resize(int) in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7
  4: QFile::writeData(char const*, long long) in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7
  5: QIODevice::write(char const*, long long) in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7
  6: /usr/lib/x86_64-linux-gnu/qt4/plugins/imageformats/libqjpeg.so
  7: jpeg_finish_compress in /usr/lib/x86_64-linux-gnu/libjpeg.so.8.0.2
  8: /usr/lib/x86_64-linux-gnu/qt4/plugins/imageformats/libqjpeg.so
  9: QImageWriter::write(QImage const&amp;) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  10: QImage::save(QString const&amp;, char const*, int) const in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  11: Model::SaveModImage(QString, QImage) in /home/chris/Desktop/Projet_V5/model.cpp:24
  12: Control::Save_Image(QString, QImage) in /home/chris/Desktop/Projet_V5/control.cpp:67
  13: View::SaveImage() in /home/chris/Desktop/Projet_V5/view.cpp:291
  14: View::qt_static_metacall(QObject*, QMetaObject::Call, int, void**) in /home/chris/Desktop/build-Projet_V5-Desktop-Debug/moc_view.cpp:72
  15: QMetaObject::activate(QObject*, QMetaObject const*, int, void**) in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7
  16: QAction::triggered(bool) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  17: QAction::activate(QAction::ActionEvent) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  18: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  19: QAbstractButton::mouseReleaseEvent(QMouseEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  20: QToolButton::mouseReleaseEvent(QMouseEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  21: QWidget::event(QEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  22: QApplicationPrivate::notify_helper(QObject*, QEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  23: QApplication::notify(QObject*, QEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  24: QCoreApplication::notifyInternal(QObject*, QEvent*) in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7
  25: QApplicationPrivate::sendMouseEvent(QWidget*, QMouseEvent*, QWidget*, QWidget*, QWidget**, QPointer&lt;QWidget&gt;&amp;, bool) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
Uninitialised value was created by a heap allocation  1: malloc in /usr/lib/valgrind/vgpreload_memcheck-amd64-linux.so
  2: QImageData::create(QSize const&amp;, QImage::Format, int) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  3: QImage::QImage(int, int, QImage::Format) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  4: View::SaveImage() in /home/chris/Desktop/Projet_V5/view.cpp:276
  5: View::qt_static_metacall(QObject*, QMetaObject::Call, int, void**) in /home/chris/Desktop/build-Projet_V5-Desktop-Debug/moc_view.cpp:72
  6: QMetaObject::activate(QObject*, QMetaObject const*, int, void**) in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7
  7: QAction::triggered(bool) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  8: QAction::activate(QAction::ActionEvent) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  9: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  10: QAbstractButton::mouseReleaseEvent(QMouseEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  11: QToolButton::mouseReleaseEvent(QMouseEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  12: QWidget::event(QEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  13: QApplicationPrivate::notify_helper(QObject*, QEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  14: QApplication::notify(QObject*, QEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  15: QCoreApplication::notifyInternal(QObject*, QEvent*) in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7
  16: QApplicationPrivate::sendMouseEvent(QWidget*, QMouseEvent*, QWidget*, QWidget*, QWidget**, QPointer&lt;QWidget&gt;&amp;, bool) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  17: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  18: QApplication::x11ProcessEvent(_XEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  19: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  20: g_main_context_dispatch in /lib/x86_64-linux-gnu/libglib-2.0.so.0.4800.1
  21: /lib/x86_64-linux-gnu/libglib-2.0.so.0.4800.1
  22: g_main_context_iteration in /lib/x86_64-linux-gnu/libglib-2.0.so.0.4800.1
  23: QEventDispatcherGlib::processEvents(QFlags&lt;QEventLoop::ProcessEventsFlag&gt;) in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7
  24: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  25: QEventLoop::processEvents(QFlags&lt;QEventLoop::ProcessEventsFlag&gt;) in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7




Invalid read of size 8
  in View::~View() in /home/chris/Desktop/Projet_V5/view.cpp:49
  1: View::~View() in /home/chris/Desktop/Projet_V5/view.cpp:49
  2: main in /home/chris/Desktop/Projet_V5/main.cpp:14
Address 0xcfcecb0 is 0 bytes inside a block of size 16 free'd  1: operator delete(void*) in /usr/lib/valgrind/vgpreload_memcheck-amd64-linux.so
  2: QGraphicsScene::clear() in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  3: QGraphicsScene::~QGraphicsScene() in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  4: QGraphicsScene::~QGraphicsScene() in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  5: View::newProject() in /home/chris/Desktop/Projet_V5/view.cpp:340
  6: View::qt_static_metacall(QObject*, QMetaObject::Call, int, void**) in /home/chris/Desktop/build-Projet_V5-Desktop-Debug/moc_view.cpp:74
  7: QMetaObject::activate(QObject*, QMetaObject const*, int, void**) in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7
  8: QAction::triggered(bool) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  9: QAction::activate(QAction::ActionEvent) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  10: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  11: QAbstractButton::mouseReleaseEvent(QMouseEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  12: QToolButton::mouseReleaseEvent(QMouseEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  13: QWidget::event(QEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  14: QApplicationPrivate::notify_helper(QObject*, QEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  15: QApplication::notify(QObject*, QEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  16: QCoreApplication::notifyInternal(QObject*, QEvent*) in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7
  17: QApplicationPrivate::sendMouseEvent(QWidget*, QMouseEvent*, QWidget*, QWidget*, QWidget**, QPointer&lt;QWidget&gt;&amp;, bool) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  18: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  19: QApplication::x11ProcessEvent(_XEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  20: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  21: g_main_context_dispatch in /lib/x86_64-linux-gnu/libglib-2.0.so.0.4800.1
  22: /lib/x86_64-linux-gnu/libglib-2.0.so.0.4800.1
  23: g_main_context_iteration in /lib/x86_64-linux-gnu/libglib-2.0.so.0.4800.1
  24: QEventDispatcherGlib::processEvents(QFlags&lt;QEventLoop::ProcessEventsFlag&gt;) in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7
  25: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
Block was alloc'd at  1: operator new(unsigned long) in /usr/lib/valgrind/vgpreload_memcheck-amd64-linux.so
  2: View::show_Image(QPixmap) in /home/chris/Desktop/Projet_V5/view.cpp:84
  3: Control::Save_Image(QString, QImage) in /home/chris/Desktop/Projet_V5/control.cpp:70
  4: View::SaveImage() in /home/chris/Desktop/Projet_V5/view.cpp:291
  5: View::qt_static_metacall(QObject*, QMetaObject::Call, int, void**) in /home/chris/Desktop/build-Projet_V5-Desktop-Debug/moc_view.cpp:72
  6: QMetaObject::activate(QObject*, QMetaObject const*, int, void**) in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7
  7: QAction::triggered(bool) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  8: QAction::activate(QAction::ActionEvent) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  9: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  10: QAbstractButton::mouseReleaseEvent(QMouseEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  11: QToolButton::mouseReleaseEvent(QMouseEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  12: QWidget::event(QEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  13: QApplicationPrivate::notify_helper(QObject*, QEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  14: QApplication::notify(QObject*, QEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  15: QCoreApplication::notifyInternal(QObject*, QEvent*) in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7
  16: QApplicationPrivate::sendMouseEvent(QWidget*, QMouseEvent*, QWidget*, QWidget*, QWidget**, QPointer&lt;QWidget&gt;&amp;, bool) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  17: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  18: QApplication::x11ProcessEvent(_XEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  19: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  20: g_main_context_dispatch in /lib/x86_64-linux-gnu/libglib-2.0.so.0.4800.1
  21: /lib/x86_64-linux-gnu/libglib-2.0.so.0.4800.1
  22: g_main_context_iteration in /lib/x86_64-linux-gnu/libglib-2.0.so.0.4800.1
  23: QEventDispatcherGlib::processEvents(QFlags&lt;QEventLoop::ProcessEventsFlag&gt;) in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7
  24: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  25: QEventLoop::processEvents(QFlags&lt;QEventLoop::ProcessEventsFlag&gt;) in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7




Jump to the invalid address stated on the next line
  in main in /home/chris/Desktop/Projet_V5/main.cpp:14
Address 0x0 is not stack'd, malloc'd or (recently) free'd  1: 0x0
  2: main in /home/chris/Desktop/Projet_V5/main.cpp:14



16 bytes in 1 blocks are definitely lost in loss record 3,656 of 19,430
  in main in /home/chris/Desktop/Projet_V5/main.cpp:20
  1: operator new(unsigned long) in /usr/lib/valgrind/vgpreload_memcheck-amd64-linux.so
  2: QAccessible::queryAccessibleInterface(QObject*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  3: QAccessible::setRootObject(QObject*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  4: QApplication::exec() in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  5: main in /home/chris/Desktop/Projet_V5/main.cpp:20



1,296 (16 direct, 1,280 indirect) bytes in 1 blocks are definitely lost in loss record 18,960 of 19,430
  in View::show_Image(QPixmap) in /home/chris/Desktop/Projet_V5/view.cpp:84
  1: operator new(unsigned long) in /usr/lib/valgrind/vgpreload_memcheck-amd64-linux.so
  2: View::show_Image(QPixmap) in /home/chris/Desktop/Projet_V5/view.cpp:84
  3: Control::convertForPeleMele(QImage) in /home/chris/Desktop/Projet_V5/control.cpp:102
  4: View::peleMele() in /home/chris/Desktop/Projet_V5/view.cpp:322
  5: View::qt_static_metacall(QObject*, QMetaObject::Call, int, void**) in /home/chris/Desktop/build-Projet_V5-Desktop-Debug/moc_view.cpp:73
  6: QMetaObject::activate(QObject*, QMetaObject const*, int, void**) in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7
  7: QAction::triggered(bool) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  8: QAction::activate(QAction::ActionEvent) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  9: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  10: QAbstractButton::mouseReleaseEvent(QMouseEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  11: QToolButton::mouseReleaseEvent(QMouseEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  12: QWidget::event(QEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  13: QApplicationPrivate::notify_helper(QObject*, QEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  14: QApplication::notify(QObject*, QEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  15: QCoreApplication::notifyInternal(QObject*, QEvent*) in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7
  16: QApplicationPrivate::sendMouseEvent(QWidget*, QMouseEvent*, QWidget*, QWidget*, QWidget**, QPointer&lt;QWidget&gt;&amp;, bool) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  17: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  18: QApplication::x11ProcessEvent(_XEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  19: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  20: g_main_context_dispatch in /lib/x86_64-linux-gnu/libglib-2.0.so.0.4800.1
  21: /lib/x86_64-linux-gnu/libglib-2.0.so.0.4800.1
  22: g_main_context_iteration in /lib/x86_64-linux-gnu/libglib-2.0.so.0.4800.1
  23: QEventDispatcherGlib::processEvents(QFlags&lt;QEventLoop::ProcessEventsFlag&gt;) in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7
  24: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  25: QEventLoop::processEvents(QFlags&lt;QEventLoop::ProcessEventsFlag&gt;) in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7





7,083,636 bytes in 1 blocks are possibly lost in loss record 19,430 of 19,430
  in View::peleMele() in /home/chris/Desktop/Projet_V5/view.cpp:322
  1: malloc in /usr/lib/valgrind/vgpreload_memcheck-amd64-linux.so
  2: QImageData::create(QSize const&amp;, QImage::Format, int) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  3: QImage::QImage(int, int, QImage::Format) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  4: QImage::copy(QRect const&amp;) const in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  5: QImage::QImage(QImage const&amp;) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  6: View::peleMele() in /home/chris/Desktop/Projet_V5/view.cpp:322
  7: View::qt_static_metacall(QObject*, QMetaObject::Call, int, void**) in /home/chris/Desktop/build-Projet_V5-Desktop-Debug/moc_view.cpp:73
  8: QMetaObject::activate(QObject*, QMetaObject const*, int, void**) in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7
  9: QAction::triggered(bool) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  10: QAction::activate(QAction::ActionEvent) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  11: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  12: QAbstractButton::mouseReleaseEvent(QMouseEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  13: QToolButton::mouseReleaseEvent(QMouseEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  14: QWidget::event(QEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  15: QApplicationPrivate::notify_helper(QObject*, QEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  16: QApplication::notify(QObject*, QEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  17: QCoreApplication::notifyInternal(QObject*, QEvent*) in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7
  18: QApplicationPrivate::sendMouseEvent(QWidget*, QMouseEvent*, QWidget*, QWidget*, QWidget**, QPointer&lt;QWidget&gt;&amp;, bool) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  19: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  20: QApplication::x11ProcessEvent(_XEvent*) in /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  21: /usr/lib/x86_64-linux-gnu/libQtGui.so.4.8.7
  22: g_main_context_dispatch in /lib/x86_64-linux-gnu/libglib-2.0.so.0.4800.1
  23: /lib/x86_64-linux-gnu/libglib-2.0.so.0.4800.1
  24: g_main_context_iteration in /lib/x86_64-linux-gnu/libglib-2.0.so.0.4800.1
  25: QEventDispatcherGlib::processEvents(QFlags&lt;QEventLoop::ProcessEventsFlag&gt;) in /usr/lib/x86_64-linux-gnu/libQtCore.so.4.8.7
*/
