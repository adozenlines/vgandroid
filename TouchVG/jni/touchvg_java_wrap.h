/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.2
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

#ifndef SWIG_touchvg_WRAP_H_
#define SWIG_touchvg_WRAP_H_

class SwigDirector_GiCanvas : public GiCanvas, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_GiCanvas(JNIEnv *jenv);
    virtual ~SwigDirector_GiCanvas();
    virtual void setPen(int argb, float width, int style, float phase, float orgw);
    virtual void setBrush(int argb, int style);
    virtual void clearRect(float x, float y, float w, float h);
    virtual void drawRect(float x, float y, float w, float h, bool stroke, bool fill);
    virtual void drawLine(float x1, float y1, float x2, float y2);
    virtual void drawEllipse(float x, float y, float w, float h, bool stroke, bool fill);
    virtual void beginPath();
    virtual void moveTo(float x, float y);
    virtual void lineTo(float x, float y);
    virtual void bezierTo(float c1x, float c1y, float c2x, float c2y, float x, float y);
    virtual void quadTo(float cpx, float cpy, float x, float y);
    virtual void closePath();
    virtual void drawPath(bool stroke, bool fill);
    virtual void saveClip();
    virtual void restoreClip();
    virtual bool clipRect(float x, float y, float w, float h);
    virtual bool clipPath();
    virtual bool drawHandle(float x, float y, int type, float angle);
    virtual bool drawBitmap(char const *name, float xc, float yc, float w, float h, float angle);
    virtual float drawTextAt(char const *text, float x, float y, float h, int align);
    virtual bool beginShape(int type, int sid, int version, float x, float y, float w, float h);
    virtual void endShape(int type, int sid, float x, float y);
public:
    bool swig_overrides(int n) {
      return (n < 22 ? swig_override[n] : false);
    }
protected:
    bool swig_override[22];
};

class SwigDirector_MgObject : public MgObject, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_MgObject(JNIEnv *jenv);
    virtual MgObject *clone() const;
    virtual void copy(MgObject const &src);
    virtual void release();
    virtual void addRef();
    virtual bool equals(MgObject const &src) const;
    virtual int getType() const;
    virtual bool isKindOf(int type) const;
    virtual ~SwigDirector_MgObject();
public:
    bool swig_overrides(int n) {
      return (n < 7 ? swig_override[n] : false);
    }
protected:
    bool swig_override[7];
};

class SwigDirector_MgBaseShape : public MgBaseShape, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_MgBaseShape(JNIEnv *jenv);
    virtual MgObject *clone() const;
    virtual void copy(MgObject const &src);
    virtual void release();
    virtual void addRef();
    virtual bool equals(MgObject const &src) const;
    virtual int getType() const;
    virtual bool isKindOf(int type) const;
    virtual ~SwigDirector_MgBaseShape();
    virtual Box2d getExtent() const;
    virtual long getChangeCount() const;
    virtual void resetChangeCount(long count);
    virtual void afterChanged();
    virtual void update();
    virtual void transform(Matrix2d const &mat);
    virtual void clear();
    virtual void clearCachedData();
    virtual int getPointCount() const;
    virtual Point2d getPoint(int index) const;
    virtual void setPoint(int index, Point2d const &pt);
    virtual bool isClosed() const;
    virtual bool isCurve() const;
    virtual float hitTest(Point2d const &pt, float tol, MgHitResult &res) const;
    virtual bool hitTestBox(Box2d const &rect) const;
    virtual bool draw(int mode, GiGraphics &gs, GiContext const &ctx, int segment) const;
    virtual void output(MgPath &path) const;
    virtual bool save(MgStorage *s) const;
    virtual bool load(MgShapeFactory *factory, MgStorage *s);
    virtual int getHandleCount() const;
    virtual Point2d getHandlePoint(int index) const;
    virtual bool setHandlePoint(int index, Point2d const &pt, float tol);
    virtual bool isHandleFixed(int index) const;
    virtual int getHandleType(int index) const;
    virtual bool offset(Vector2d const &vec, int segment);
    virtual void setFlag(MgShapeBit bit, bool on);
    virtual void setOwner(MgObject *owner);
public:
    bool swig_overrides(int n) {
      return (n < 34 ? swig_override[n] : false);
    }
protected:
    bool swig_override[34];
};

class SwigDirector_MgBaseRect : public MgBaseRect, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_MgBaseRect(JNIEnv *jenv);
    virtual MgObject *clone() const;
    virtual void copy(MgObject const &src);
    virtual void release();
    virtual void addRef();
    virtual bool equals(MgObject const &src) const;
    virtual int getType() const;
    virtual bool isKindOf(int type) const;
    virtual ~SwigDirector_MgBaseRect();
    virtual Box2d getExtent() const;
    virtual long getChangeCount() const;
    virtual void resetChangeCount(long count);
    virtual void afterChanged();
    virtual void update();
    virtual void transform(Matrix2d const &mat);
    virtual void clear();
    virtual void clearCachedData();
    virtual int getPointCount() const;
    virtual Point2d getPoint(int index) const;
    virtual void setPoint(int index, Point2d const &pt);
    virtual bool isClosed() const;
    virtual bool isCurve() const;
    virtual float hitTest(Point2d const &pt, float tol, MgHitResult &res) const;
    virtual bool hitTestBox(Box2d const &rect) const;
    virtual bool draw(int mode, GiGraphics &gs, GiContext const &ctx, int segment) const;
    virtual void output(MgPath &path) const;
    virtual bool save(MgStorage *s) const;
    virtual bool load(MgShapeFactory *factory, MgStorage *s);
    virtual int getHandleCount() const;
    virtual Point2d getHandlePoint(int index) const;
    virtual bool setHandlePoint(int index, Point2d const &pt, float tol);
    virtual bool isHandleFixed(int index) const;
    virtual int getHandleType(int index) const;
    virtual bool offset(Vector2d const &vec, int segment);
    virtual void setFlag(MgShapeBit bit, bool on);
    virtual void setOwner(MgObject *owner);
public:
    bool swig_overrides(int n) {
      return (n < 34 ? swig_override[n] : false);
    }
protected:
    bool swig_override[34];
};

class SwigDirector_MgBaseLines : public MgBaseLines, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_MgBaseLines(JNIEnv *jenv);
    virtual MgObject *clone() const;
    virtual void copy(MgObject const &src);
    virtual void release();
    virtual void addRef();
    virtual bool equals(MgObject const &src) const;
    virtual int getType() const;
    virtual bool isKindOf(int type) const;
    virtual ~SwigDirector_MgBaseLines();
    virtual Box2d getExtent() const;
    virtual long getChangeCount() const;
    virtual void resetChangeCount(long count);
    virtual void afterChanged();
    virtual void update();
    virtual void transform(Matrix2d const &mat);
    virtual void clear();
    virtual void clearCachedData();
    virtual int getPointCount() const;
    virtual Point2d getPoint(int index) const;
    virtual void setPoint(int index, Point2d const &pt);
    virtual bool isClosed() const;
    virtual bool isCurve() const;
    virtual float hitTest(Point2d const &pt, float tol, MgHitResult &res) const;
    virtual bool hitTestBox(Box2d const &rect) const;
    virtual bool draw(int mode, GiGraphics &gs, GiContext const &ctx, int segment) const;
    virtual void output(MgPath &path) const;
    virtual bool save(MgStorage *s) const;
    virtual bool load(MgShapeFactory *factory, MgStorage *s);
    virtual int getHandleCount() const;
    virtual Point2d getHandlePoint(int index) const;
    virtual bool setHandlePoint(int index, Point2d const &pt, float tol);
    virtual bool isHandleFixed(int index) const;
    virtual int getHandleType(int index) const;
    virtual bool offset(Vector2d const &vec, int segment);
    virtual void setFlag(MgShapeBit bit, bool on);
    virtual void setOwner(MgObject *owner);
    virtual bool resize(int count);
    virtual bool addPoint(Point2d const &pt);
    virtual bool insertPoint(int segment, Point2d const &pt);
    virtual bool removePoint(int index);
public:
    bool swig_overrides(int n) {
      return (n < 38 ? swig_override[n] : false);
    }
protected:
    bool swig_override[38];
};

class SwigDirector_MgComposite : public MgComposite, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_MgComposite(JNIEnv *jenv);
    virtual MgObject *clone() const;
    virtual void copy(MgObject const &src);
    virtual void release();
    virtual void addRef();
    virtual bool equals(MgObject const &src) const;
    virtual int getType() const;
    virtual bool isKindOf(int type) const;
    virtual ~SwigDirector_MgComposite();
    virtual Box2d getExtent() const;
    virtual long getChangeCount() const;
    virtual void resetChangeCount(long count);
    virtual void afterChanged();
    virtual void update();
    virtual void transform(Matrix2d const &mat);
    virtual void clear();
    virtual void clearCachedData();
    virtual int getPointCount() const;
    virtual Point2d getPoint(int index) const;
    virtual void setPoint(int index, Point2d const &pt);
    virtual bool isClosed() const;
    virtual bool isCurve() const;
    virtual float hitTest(Point2d const &pt, float tol, MgHitResult &res) const;
    virtual bool hitTestBox(Box2d const &rect) const;
    virtual bool draw(int mode, GiGraphics &gs, GiContext const &ctx, int segment) const;
    virtual void output(MgPath &path) const;
    virtual bool save(MgStorage *s) const;
    virtual bool load(MgShapeFactory *factory, MgStorage *s);
    virtual int getHandleCount() const;
    virtual Point2d getHandlePoint(int index) const;
    virtual bool setHandlePoint(int index, Point2d const &pt, float tol);
    virtual bool isHandleFixed(int index) const;
    virtual int getHandleType(int index) const;
    virtual bool offset(Vector2d const &vec, int segment);
    virtual void setFlag(MgShapeBit bit, bool on);
    virtual void setOwner(MgObject *owner);
    virtual bool canOffsetShapeAlone(MgShape *shape);
public:
    bool swig_overrides(int n) {
      return (n < 35 ? swig_override[n] : false);
    }
protected:
    bool swig_override[35];
};

class SwigDirector_MgCommand : public MgCommand, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_MgCommand(JNIEnv *jenv, char const *name);
    virtual ~SwigDirector_MgCommand();
    virtual void release();
    virtual bool cancel(MgMotion const *sender);
    virtual bool initialize(MgMotion const *sender, MgStorage *s);
    virtual bool backStep(MgMotion const *sender);
    virtual bool draw(MgMotion const *sender, GiGraphics *gs);
    virtual bool gatherShapes(MgMotion const *sender, MgShapes *shapes);
    virtual bool click(MgMotion const *sender);
    virtual bool doubleClick(MgMotion const *sender);
    virtual bool longPress(MgMotion const *sender);
    virtual bool touchBegan(MgMotion const *sender);
    virtual bool touchMoved(MgMotion const *sender);
    virtual bool touchEnded(MgMotion const *sender);
    virtual bool mouseHover(MgMotion const *sender);
    virtual bool twoFingersMove(MgMotion const *sender);
    virtual bool isDrawingCommand();
    virtual bool isFloatingCommand();
    virtual bool doContextAction(MgMotion const *sender, int action);
public:
    bool swig_overrides(int n) {
      return (n < 17 ? swig_override[n] : false);
    }
protected:
    bool swig_override[17];
};

class SwigDirector_CmdObserverDefault : public CmdObserverDefault, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_CmdObserverDefault(JNIEnv *jenv);
    virtual ~SwigDirector_CmdObserverDefault();
    virtual void onDocLoaded(MgMotion const *sender);
    virtual void onEnterSelectCommand(MgMotion const *sender);
    virtual void onUnloadCommands(MgCmdManager *sender);
    virtual bool selectActionsNeedHided(MgMotion const *sender);
    virtual int addShapeActions(MgMotion const *sender, mgvector< int > &actions, int n, MgShape const *sp);
    virtual bool doAction(MgMotion const *sender, int action);
    virtual bool doEndAction(MgMotion const *sender, int action);
    virtual void drawInShapeCommand(MgMotion const *sender, MgCommand *cmd, GiGraphics *gs);
    virtual void drawInSelectCommand(MgMotion const *sender, MgShape const *sp, int handleIndex, GiGraphics *gs);
    virtual void onSelectionChanged(MgMotion const *sender);
    virtual bool onShapeWillAdded(MgMotion const *sender, MgShape *sp);
    virtual void onShapeAdded(MgMotion const *sender, MgShape const *sp);
    virtual bool onShapeWillDeleted(MgMotion const *sender, MgShape const *sp);
    virtual void onShapeDeleted(MgMotion const *sender, MgShape const *sp);
    virtual bool onShapeCanRotated(MgMotion const *sender, MgShape const *sp);
    virtual bool onShapeCanTransform(MgMotion const *sender, MgShape const *sp);
    virtual bool onShapeCanUnlock(MgMotion const *sender, MgShape const *sp);
    virtual bool onShapeCanUngroup(MgMotion const *sender, MgShape const *sp);
    virtual bool onShapeCanMovedHandle(MgMotion const *sender, MgShape const *sp, int index);
    virtual void onShapeMoved(MgMotion const *sender, MgShape *sp, int segment);
    virtual bool onShapeWillChanged(MgMotion const *sender, MgShape *sp, MgShape const *oldsp);
    virtual void onShapeChanged(MgMotion const *sender, MgShape *shape);
    virtual MgBaseShape *createShape(MgMotion const *sender, int type);
    virtual MgCommand *createCommand(MgMotion const *sender, char const *name);
    virtual bool onPreGesture(MgMotion *sender);
    virtual void onPostGesture(MgMotion const *sender);
    virtual void onPointSnapped(MgMotion const *sender, MgShape const *sp);
public:
    bool swig_overrides(int n) {
      return (n < 27 ? swig_override[n] : false);
    }
protected:
    bool swig_override[27];
};

class SwigDirector_MgCommandDraw : public MgCommandDraw, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_MgCommandDraw(JNIEnv *jenv, char const *name);
    virtual ~SwigDirector_MgCommandDraw();
    virtual void release();
    virtual bool cancel(MgMotion const *sender);
    virtual bool initialize(MgMotion const *sender, MgStorage *s);
    virtual bool backStep(MgMotion const *sender);
    virtual bool draw(MgMotion const *sender, GiGraphics *gs);
    virtual bool gatherShapes(MgMotion const *sender, MgShapes *shapes);
    virtual bool click(MgMotion const *sender);
    virtual bool doubleClick(MgMotion const *sender);
    virtual bool longPress(MgMotion const *sender);
    virtual bool touchBegan(MgMotion const *sender);
    virtual bool touchMoved(MgMotion const *sender);
    virtual bool touchEnded(MgMotion const *sender);
    virtual bool mouseHover(MgMotion const *sender);
    virtual bool twoFingersMove(MgMotion const *sender);
    virtual bool isDrawingCommand();
    virtual bool isFloatingCommand();
    virtual bool doContextAction(MgMotion const *sender, int action);
    virtual int getShapeType();
    virtual int getMaxStep();
    virtual int getMaxStepSwigPublic() {
      return MgCommandDraw::getMaxStep();
    }
    virtual void setStepPoint(int step, Point2d const &pt);
    virtual void setStepPointSwigPublic(int step, Point2d const &pt) {
      MgCommandDraw::setStepPoint(step,pt);
    }
public:
    bool swig_overrides(int n) {
      return (n < 20 ? swig_override[n] : false);
    }
protected:
    bool swig_override[20];
};

class SwigDirector_MgCmdDrawRect : public MgCmdDrawRect, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_MgCmdDrawRect(JNIEnv *jenv, char const *name = Name());
    virtual ~SwigDirector_MgCmdDrawRect();
    virtual void release();
    virtual bool cancel(MgMotion const *sender);
    virtual bool initialize(MgMotion const *sender, MgStorage *s);
    virtual bool backStep(MgMotion const *sender);
    virtual bool draw(MgMotion const *sender, GiGraphics *gs);
    virtual bool gatherShapes(MgMotion const *sender, MgShapes *shapes);
    virtual bool click(MgMotion const *sender);
    virtual bool doubleClick(MgMotion const *sender);
    virtual bool longPress(MgMotion const *sender);
    virtual bool touchBegan(MgMotion const *sender);
    virtual bool touchMoved(MgMotion const *sender);
    virtual bool touchEnded(MgMotion const *sender);
    virtual bool mouseHover(MgMotion const *sender);
    virtual bool twoFingersMove(MgMotion const *sender);
    virtual bool isDrawingCommand();
    virtual bool isFloatingCommand();
    virtual bool doContextAction(MgMotion const *sender, int action);
    virtual int getShapeType();
    virtual int getMaxStep();
    virtual int getMaxStepSwigPublic() {
      return MgCommandDraw::getMaxStep();
    }
    virtual void setStepPoint(int step, Point2d const &pt);
    virtual void setStepPointSwigPublic(int step, Point2d const &pt) {
      MgCommandDraw::setStepPoint(step,pt);
    }
    virtual void addRectShape(MgMotion const *sender);
    virtual void addRectShapeSwigPublic(MgMotion const *sender) {
      MgCmdDrawRect::addRectShape(sender);
    }
public:
    bool swig_overrides(int n) {
      return (n < 21 ? swig_override[n] : false);
    }
protected:
    bool swig_override[21];
};

class SwigDirector_GiView : public GiView, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_GiView(JNIEnv *jenv);
    virtual ~SwigDirector_GiView();
    virtual void regenAll(bool changed);
    virtual void regenAppend(int sid, long playh);
    virtual void redraw(bool changed);
    virtual bool useFinger();
    virtual bool isContextActionsVisible();
    virtual bool showContextActions(mgvector< int > const &actions, mgvector< float > const &buttonXY, float x, float y, float w, float h);
    virtual void hideContextActions();
    virtual void commandChanged();
    virtual void selectionChanged();
    virtual void contentChanged();
    virtual void dynamicChanged();
    virtual void viewChanged(GiView *oldview);
    virtual void shapeDeleted(int sid);
    virtual bool shapeClicked(int sid, int tag, float x, float y);
    virtual void showMessage(char const *text);
    virtual void getLocalizedString(char const *name, MgStringCallback *result);
public:
    bool swig_overrides(int n) {
      return (n < 16 ? swig_override[n] : false);
    }
protected:
    bool swig_override[16];
};

struct SwigDirector_MgFindImageCallback : public MgFindImageCallback, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_MgFindImageCallback(JNIEnv *jenv);
    virtual ~SwigDirector_MgFindImageCallback();
    virtual void onFindImage(int sid, char const *name);
public:
    bool swig_overrides(int n) {
      return (n < 1 ? swig_override[n] : false);
    }
protected:
    bool swig_override[1];
};

struct SwigDirector_MgStringCallback : public MgStringCallback, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_MgStringCallback(JNIEnv *jenv);
    virtual ~SwigDirector_MgStringCallback();
    virtual void onGetString(char const *text);
public:
    bool swig_overrides(int n) {
      return (n < 1 ? swig_override[n] : false);
    }
protected:
    bool swig_override[1];
};

struct SwigDirector_MgOptionCallback : public MgOptionCallback, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_MgOptionCallback(JNIEnv *jenv);
    virtual ~SwigDirector_MgOptionCallback();
    virtual void onGetOption(char const *group, char const *name, char const *text);
public:
    bool swig_overrides(int n) {
      return (n < 1 ? swig_override[n] : false);
    }
protected:
    bool swig_override[1];
};


#endif