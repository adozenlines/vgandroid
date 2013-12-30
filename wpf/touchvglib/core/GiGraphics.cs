/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.11
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

namespace touchvg.core {

using System;
using System.Runtime.InteropServices;

public class GiGraphics : IDisposable {
  private HandleRef swigCPtr;
  protected bool swigCMemOwn;

  internal GiGraphics(IntPtr cPtr, bool cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = new HandleRef(this, cPtr);
  }

  internal static HandleRef getCPtr(GiGraphics obj) {
    return (obj == null) ? new HandleRef(null, IntPtr.Zero) : obj.swigCPtr;
  }

  ~GiGraphics() {
    Dispose();
  }

  public virtual void Dispose() {
    lock(this) {
      if (swigCPtr.Handle != IntPtr.Zero) {
        if (swigCMemOwn) {
          swigCMemOwn = false;
          touchvgPINVOKE.delete_GiGraphics(swigCPtr);
        }
        swigCPtr = new HandleRef(null, IntPtr.Zero);
      }
      GC.SuppressFinalize(this);
    }
  }

  public GiGraphics(GiTransform xform, bool needFreeXf) : this(touchvgPINVOKE.new_GiGraphics__SWIG_0(GiTransform.getCPtr(xform), needFreeXf), true) {
  }

  public GiGraphics(GiTransform xform) : this(touchvgPINVOKE.new_GiGraphics__SWIG_1(GiTransform.getCPtr(xform)), true) {
  }

  public GiGraphics(GiGraphics src) : this(touchvgPINVOKE.new_GiGraphics__SWIG_2(GiGraphics.getCPtr(src)), true) {
    if (touchvgPINVOKE.SWIGPendingException.Pending) throw touchvgPINVOKE.SWIGPendingException.Retrieve();
  }

  public static GiGraphics fromHandle(int h) {
    IntPtr cPtr = touchvgPINVOKE.GiGraphics_fromHandle(h);
    GiGraphics ret = (cPtr == IntPtr.Zero) ? null : new GiGraphics(cPtr, false);
    return ret;
  }

  public int toHandle() {
    int ret = touchvgPINVOKE.GiGraphics_toHandle(swigCPtr);
    return ret;
  }

  public void copy(GiGraphics src) {
    touchvgPINVOKE.GiGraphics_copy(swigCPtr, GiGraphics.getCPtr(src));
    if (touchvgPINVOKE.SWIGPendingException.Pending) throw touchvgPINVOKE.SWIGPendingException.Retrieve();
  }

  public GiTransform xf() {
    GiTransform ret = new GiTransform(touchvgPINVOKE.GiGraphics_xf(swigCPtr), false);
    return ret;
  }

  public bool isDrawing() {
    bool ret = touchvgPINVOKE.GiGraphics_isDrawing(swigCPtr);
    return ret;
  }

  public bool isPrint() {
    bool ret = touchvgPINVOKE.GiGraphics_isPrint(swigCPtr);
    return ret;
  }

  public bool isStopping() {
    bool ret = touchvgPINVOKE.GiGraphics_isStopping(swigCPtr);
    return ret;
  }

  public void stopDrawing(bool stopped) {
    touchvgPINVOKE.GiGraphics_stopDrawing__SWIG_0(swigCPtr, stopped);
  }

  public void stopDrawing() {
    touchvgPINVOKE.GiGraphics_stopDrawing__SWIG_1(swigCPtr);
  }

  public Box2d getClipModel() {
    Box2d ret = new Box2d(touchvgPINVOKE.GiGraphics_getClipModel(swigCPtr), true);
    return ret;
  }

  public Box2d getClipWorld() {
    Box2d ret = new Box2d(touchvgPINVOKE.GiGraphics_getClipWorld(swigCPtr), true);
    return ret;
  }

  public RECT_2D getClipBox(RECT_2D rc) {
    RECT_2D ret = new RECT_2D(touchvgPINVOKE.GiGraphics_getClipBox(swigCPtr, RECT_2D.getCPtr(rc)), false);
    if (touchvgPINVOKE.SWIGPendingException.Pending) throw touchvgPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public bool setClipBox(RECT_2D rc) {
    bool ret = touchvgPINVOKE.GiGraphics_setClipBox(swigCPtr, RECT_2D.getCPtr(rc));
    if (touchvgPINVOKE.SWIGPendingException.Pending) throw touchvgPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public bool setClipWorld(Box2d rectWorld) {
    bool ret = touchvgPINVOKE.GiGraphics_setClipWorld(swigCPtr, Box2d.getCPtr(rectWorld));
    if (touchvgPINVOKE.SWIGPendingException.Pending) throw touchvgPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public bool isGrayMode() {
    bool ret = touchvgPINVOKE.GiGraphics_isGrayMode(swigCPtr);
    return ret;
  }

  public void setGrayMode(bool gray) {
    touchvgPINVOKE.GiGraphics_setGrayMode(swigCPtr, gray);
  }

  public GiColor getBkColor() {
    GiColor ret = new GiColor(touchvgPINVOKE.GiGraphics_getBkColor(swigCPtr), true);
    return ret;
  }

  public GiColor setBkColor(GiColor color) {
    GiColor ret = new GiColor(touchvgPINVOKE.GiGraphics_setBkColor(swigCPtr, GiColor.getCPtr(color)), true);
    if (touchvgPINVOKE.SWIGPendingException.Pending) throw touchvgPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public GiColor calcPenColor(GiColor color) {
    GiColor ret = new GiColor(touchvgPINVOKE.GiGraphics_calcPenColor(swigCPtr, GiColor.getCPtr(color)), true);
    if (touchvgPINVOKE.SWIGPendingException.Pending) throw touchvgPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public float calcPenWidth(float lineWidth, bool useViewScale) {
    float ret = touchvgPINVOKE.GiGraphics_calcPenWidth(swigCPtr, lineWidth, useViewScale);
    return ret;
  }

  public void setMaxPenWidth(float pixels, float minw) {
    touchvgPINVOKE.GiGraphics_setMaxPenWidth__SWIG_0(swigCPtr, pixels, minw);
  }

  public void setMaxPenWidth(float pixels) {
    touchvgPINVOKE.GiGraphics_setMaxPenWidth__SWIG_1(swigCPtr, pixels);
  }

  public bool drawLine(GiContext ctx, Point2d startPt, Point2d endPt, bool modelUnit) {
    bool ret = touchvgPINVOKE.GiGraphics_drawLine__SWIG_0(swigCPtr, GiContext.getCPtr(ctx), Point2d.getCPtr(startPt), Point2d.getCPtr(endPt), modelUnit);
    if (touchvgPINVOKE.SWIGPendingException.Pending) throw touchvgPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public bool drawLine(GiContext ctx, Point2d startPt, Point2d endPt) {
    bool ret = touchvgPINVOKE.GiGraphics_drawLine__SWIG_1(swigCPtr, GiContext.getCPtr(ctx), Point2d.getCPtr(startPt), Point2d.getCPtr(endPt));
    if (touchvgPINVOKE.SWIGPendingException.Pending) throw touchvgPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public bool drawLines(GiContext ctx, int count, Point2d points, bool modelUnit) {
    bool ret = touchvgPINVOKE.GiGraphics_drawLines__SWIG_0(swigCPtr, GiContext.getCPtr(ctx), count, Point2d.getCPtr(points), modelUnit);
    return ret;
  }

  public bool drawLines(GiContext ctx, int count, Point2d points) {
    bool ret = touchvgPINVOKE.GiGraphics_drawLines__SWIG_1(swigCPtr, GiContext.getCPtr(ctx), count, Point2d.getCPtr(points));
    return ret;
  }

  public bool drawBeziers(GiContext ctx, int count, Point2d points, bool closed, bool modelUnit) {
    bool ret = touchvgPINVOKE.GiGraphics_drawBeziers__SWIG_0(swigCPtr, GiContext.getCPtr(ctx), count, Point2d.getCPtr(points), closed, modelUnit);
    return ret;
  }

  public bool drawBeziers(GiContext ctx, int count, Point2d points, bool closed) {
    bool ret = touchvgPINVOKE.GiGraphics_drawBeziers__SWIG_1(swigCPtr, GiContext.getCPtr(ctx), count, Point2d.getCPtr(points), closed);
    return ret;
  }

  public bool drawBeziers(GiContext ctx, int count, Point2d points) {
    bool ret = touchvgPINVOKE.GiGraphics_drawBeziers__SWIG_2(swigCPtr, GiContext.getCPtr(ctx), count, Point2d.getCPtr(points));
    return ret;
  }

  public bool drawArc(GiContext ctx, Point2d center, float rx, float ry, float startAngle, float sweepAngle, bool modelUnit) {
    bool ret = touchvgPINVOKE.GiGraphics_drawArc__SWIG_0(swigCPtr, GiContext.getCPtr(ctx), Point2d.getCPtr(center), rx, ry, startAngle, sweepAngle, modelUnit);
    if (touchvgPINVOKE.SWIGPendingException.Pending) throw touchvgPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public bool drawArc(GiContext ctx, Point2d center, float rx, float ry, float startAngle, float sweepAngle) {
    bool ret = touchvgPINVOKE.GiGraphics_drawArc__SWIG_1(swigCPtr, GiContext.getCPtr(ctx), Point2d.getCPtr(center), rx, ry, startAngle, sweepAngle);
    if (touchvgPINVOKE.SWIGPendingException.Pending) throw touchvgPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public bool drawArc3P(GiContext ctx, Point2d startpt, Point2d midpt, Point2d endpt, bool modelUnit) {
    bool ret = touchvgPINVOKE.GiGraphics_drawArc3P__SWIG_0(swigCPtr, GiContext.getCPtr(ctx), Point2d.getCPtr(startpt), Point2d.getCPtr(midpt), Point2d.getCPtr(endpt), modelUnit);
    if (touchvgPINVOKE.SWIGPendingException.Pending) throw touchvgPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public bool drawArc3P(GiContext ctx, Point2d startpt, Point2d midpt, Point2d endpt) {
    bool ret = touchvgPINVOKE.GiGraphics_drawArc3P__SWIG_1(swigCPtr, GiContext.getCPtr(ctx), Point2d.getCPtr(startpt), Point2d.getCPtr(midpt), Point2d.getCPtr(endpt));
    if (touchvgPINVOKE.SWIGPendingException.Pending) throw touchvgPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public bool drawPolygon(GiContext ctx, int count, Point2d points, bool modelUnit) {
    bool ret = touchvgPINVOKE.GiGraphics_drawPolygon__SWIG_0(swigCPtr, GiContext.getCPtr(ctx), count, Point2d.getCPtr(points), modelUnit);
    return ret;
  }

  public bool drawPolygon(GiContext ctx, int count, Point2d points) {
    bool ret = touchvgPINVOKE.GiGraphics_drawPolygon__SWIG_1(swigCPtr, GiContext.getCPtr(ctx), count, Point2d.getCPtr(points));
    return ret;
  }

  public bool drawEllipse(GiContext ctx, Point2d center, float rx, float ry, bool modelUnit) {
    bool ret = touchvgPINVOKE.GiGraphics_drawEllipse__SWIG_0(swigCPtr, GiContext.getCPtr(ctx), Point2d.getCPtr(center), rx, ry, modelUnit);
    if (touchvgPINVOKE.SWIGPendingException.Pending) throw touchvgPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public bool drawEllipse(GiContext ctx, Point2d center, float rx, float ry) {
    bool ret = touchvgPINVOKE.GiGraphics_drawEllipse__SWIG_1(swigCPtr, GiContext.getCPtr(ctx), Point2d.getCPtr(center), rx, ry);
    if (touchvgPINVOKE.SWIGPendingException.Pending) throw touchvgPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public bool drawEllipse(GiContext ctx, Point2d center, float rx) {
    bool ret = touchvgPINVOKE.GiGraphics_drawEllipse__SWIG_2(swigCPtr, GiContext.getCPtr(ctx), Point2d.getCPtr(center), rx);
    if (touchvgPINVOKE.SWIGPendingException.Pending) throw touchvgPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public bool drawEllipse(GiContext ctx, Box2d rect, bool modelUnit) {
    bool ret = touchvgPINVOKE.GiGraphics_drawEllipse__SWIG_3(swigCPtr, GiContext.getCPtr(ctx), Box2d.getCPtr(rect), modelUnit);
    if (touchvgPINVOKE.SWIGPendingException.Pending) throw touchvgPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public bool drawEllipse(GiContext ctx, Box2d rect) {
    bool ret = touchvgPINVOKE.GiGraphics_drawEllipse__SWIG_4(swigCPtr, GiContext.getCPtr(ctx), Box2d.getCPtr(rect));
    if (touchvgPINVOKE.SWIGPendingException.Pending) throw touchvgPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public bool drawPie(GiContext ctx, Point2d center, float rx, float ry, float startAngle, float sweepAngle, bool modelUnit) {
    bool ret = touchvgPINVOKE.GiGraphics_drawPie__SWIG_0(swigCPtr, GiContext.getCPtr(ctx), Point2d.getCPtr(center), rx, ry, startAngle, sweepAngle, modelUnit);
    if (touchvgPINVOKE.SWIGPendingException.Pending) throw touchvgPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public bool drawPie(GiContext ctx, Point2d center, float rx, float ry, float startAngle, float sweepAngle) {
    bool ret = touchvgPINVOKE.GiGraphics_drawPie__SWIG_1(swigCPtr, GiContext.getCPtr(ctx), Point2d.getCPtr(center), rx, ry, startAngle, sweepAngle);
    if (touchvgPINVOKE.SWIGPendingException.Pending) throw touchvgPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public bool drawRect(GiContext ctx, Box2d rect, bool modelUnit) {
    bool ret = touchvgPINVOKE.GiGraphics_drawRect__SWIG_0(swigCPtr, GiContext.getCPtr(ctx), Box2d.getCPtr(rect), modelUnit);
    if (touchvgPINVOKE.SWIGPendingException.Pending) throw touchvgPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public bool drawRect(GiContext ctx, Box2d rect) {
    bool ret = touchvgPINVOKE.GiGraphics_drawRect__SWIG_1(swigCPtr, GiContext.getCPtr(ctx), Box2d.getCPtr(rect));
    if (touchvgPINVOKE.SWIGPendingException.Pending) throw touchvgPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public bool drawRoundRect(GiContext ctx, Box2d rect, float rx, float ry, bool modelUnit) {
    bool ret = touchvgPINVOKE.GiGraphics_drawRoundRect__SWIG_0(swigCPtr, GiContext.getCPtr(ctx), Box2d.getCPtr(rect), rx, ry, modelUnit);
    if (touchvgPINVOKE.SWIGPendingException.Pending) throw touchvgPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public bool drawRoundRect(GiContext ctx, Box2d rect, float rx, float ry) {
    bool ret = touchvgPINVOKE.GiGraphics_drawRoundRect__SWIG_1(swigCPtr, GiContext.getCPtr(ctx), Box2d.getCPtr(rect), rx, ry);
    if (touchvgPINVOKE.SWIGPendingException.Pending) throw touchvgPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public bool drawRoundRect(GiContext ctx, Box2d rect, float rx) {
    bool ret = touchvgPINVOKE.GiGraphics_drawRoundRect__SWIG_2(swigCPtr, GiContext.getCPtr(ctx), Box2d.getCPtr(rect), rx);
    if (touchvgPINVOKE.SWIGPendingException.Pending) throw touchvgPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public bool drawSplines(GiContext ctx, int count, Point2d knots, Vector2d knotvs, bool modelUnit) {
    bool ret = touchvgPINVOKE.GiGraphics_drawSplines__SWIG_0(swigCPtr, GiContext.getCPtr(ctx), count, Point2d.getCPtr(knots), Vector2d.getCPtr(knotvs), modelUnit);
    return ret;
  }

  public bool drawSplines(GiContext ctx, int count, Point2d knots, Vector2d knotvs) {
    bool ret = touchvgPINVOKE.GiGraphics_drawSplines__SWIG_1(swigCPtr, GiContext.getCPtr(ctx), count, Point2d.getCPtr(knots), Vector2d.getCPtr(knotvs));
    return ret;
  }

  public bool drawClosedSplines(GiContext ctx, int count, Point2d knots, Vector2d knotvs, bool modelUnit) {
    bool ret = touchvgPINVOKE.GiGraphics_drawClosedSplines__SWIG_0(swigCPtr, GiContext.getCPtr(ctx), count, Point2d.getCPtr(knots), Vector2d.getCPtr(knotvs), modelUnit);
    return ret;
  }

  public bool drawClosedSplines(GiContext ctx, int count, Point2d knots, Vector2d knotvs) {
    bool ret = touchvgPINVOKE.GiGraphics_drawClosedSplines__SWIG_1(swigCPtr, GiContext.getCPtr(ctx), count, Point2d.getCPtr(knots), Vector2d.getCPtr(knotvs));
    return ret;
  }

  public bool drawBSplines(GiContext ctx, int count, Point2d ctlpts, bool modelUnit) {
    bool ret = touchvgPINVOKE.GiGraphics_drawBSplines__SWIG_0(swigCPtr, GiContext.getCPtr(ctx), count, Point2d.getCPtr(ctlpts), modelUnit);
    return ret;
  }

  public bool drawBSplines(GiContext ctx, int count, Point2d ctlpts) {
    bool ret = touchvgPINVOKE.GiGraphics_drawBSplines__SWIG_1(swigCPtr, GiContext.getCPtr(ctx), count, Point2d.getCPtr(ctlpts));
    return ret;
  }

  public bool drawClosedBSplines(GiContext ctx, int count, Point2d ctlpts, bool modelUnit) {
    bool ret = touchvgPINVOKE.GiGraphics_drawClosedBSplines__SWIG_0(swigCPtr, GiContext.getCPtr(ctx), count, Point2d.getCPtr(ctlpts), modelUnit);
    return ret;
  }

  public bool drawClosedBSplines(GiContext ctx, int count, Point2d ctlpts) {
    bool ret = touchvgPINVOKE.GiGraphics_drawClosedBSplines__SWIG_1(swigCPtr, GiContext.getCPtr(ctx), count, Point2d.getCPtr(ctlpts));
    return ret;
  }

  public bool drawQuadSplines(GiContext ctx, int count, Point2d ctlpts, bool modelUnit) {
    bool ret = touchvgPINVOKE.GiGraphics_drawQuadSplines__SWIG_0(swigCPtr, GiContext.getCPtr(ctx), count, Point2d.getCPtr(ctlpts), modelUnit);
    return ret;
  }

  public bool drawQuadSplines(GiContext ctx, int count, Point2d ctlpts) {
    bool ret = touchvgPINVOKE.GiGraphics_drawQuadSplines__SWIG_1(swigCPtr, GiContext.getCPtr(ctx), count, Point2d.getCPtr(ctlpts));
    return ret;
  }

  public bool drawPath(GiContext ctx, GiPath path, bool fill, bool modelUnit) {
    bool ret = touchvgPINVOKE.GiGraphics_drawPath__SWIG_0(swigCPtr, GiContext.getCPtr(ctx), GiPath.getCPtr(path), fill, modelUnit);
    if (touchvgPINVOKE.SWIGPendingException.Pending) throw touchvgPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public bool drawPath(GiContext ctx, GiPath path, bool fill) {
    bool ret = touchvgPINVOKE.GiGraphics_drawPath__SWIG_1(swigCPtr, GiContext.getCPtr(ctx), GiPath.getCPtr(path), fill);
    if (touchvgPINVOKE.SWIGPendingException.Pending) throw touchvgPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public bool drawHandle(Point2d pnt, int type, bool modelUnit) {
    bool ret = touchvgPINVOKE.GiGraphics_drawHandle__SWIG_0(swigCPtr, Point2d.getCPtr(pnt), type, modelUnit);
    if (touchvgPINVOKE.SWIGPendingException.Pending) throw touchvgPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public bool drawHandle(Point2d pnt, int type) {
    bool ret = touchvgPINVOKE.GiGraphics_drawHandle__SWIG_1(swigCPtr, Point2d.getCPtr(pnt), type);
    if (touchvgPINVOKE.SWIGPendingException.Pending) throw touchvgPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public bool beginPaint(GiCanvas canvas, RECT_2D clipBox) {
    bool ret = touchvgPINVOKE.GiGraphics_beginPaint__SWIG_0(swigCPtr, GiCanvas.getCPtr(canvas), RECT_2D.getCPtr(clipBox));
    if (touchvgPINVOKE.SWIGPendingException.Pending) throw touchvgPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public bool beginPaint(GiCanvas canvas) {
    bool ret = touchvgPINVOKE.GiGraphics_beginPaint__SWIG_1(swigCPtr, GiCanvas.getCPtr(canvas));
    return ret;
  }

  public void endPaint() {
    touchvgPINVOKE.GiGraphics_endPaint(swigCPtr);
  }

}

}
