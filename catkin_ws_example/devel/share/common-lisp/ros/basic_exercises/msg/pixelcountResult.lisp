; Auto-generated. Do not edit!


(cl:in-package basic_exercises-msg)


;//! \htmlinclude pixelcountResult.msg.html

(cl:defclass <pixelcountResult> (roslisp-msg-protocol:ros-message)
  ((count
    :reader count
    :initarg :count
    :type cl:integer
    :initform 0))
)

(cl:defclass pixelcountResult (<pixelcountResult>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <pixelcountResult>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'pixelcountResult)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name basic_exercises-msg:<pixelcountResult> is deprecated: use basic_exercises-msg:pixelcountResult instead.")))

(cl:ensure-generic-function 'count-val :lambda-list '(m))
(cl:defmethod count-val ((m <pixelcountResult>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader basic_exercises-msg:count-val is deprecated.  Use basic_exercises-msg:count instead.")
  (count m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <pixelcountResult>) ostream)
  "Serializes a message object of type '<pixelcountResult>"
  (cl:let* ((signed (cl:slot-value msg 'count)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <pixelcountResult>) istream)
  "Deserializes a message object of type '<pixelcountResult>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'count) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<pixelcountResult>)))
  "Returns string type for a message object of type '<pixelcountResult>"
  "basic_exercises/pixelcountResult")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'pixelcountResult)))
  "Returns string type for a message object of type 'pixelcountResult"
  "basic_exercises/pixelcountResult")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<pixelcountResult>)))
  "Returns md5sum for a message object of type '<pixelcountResult>"
  "602d642babe509c7c59f497c23e716a9")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'pixelcountResult)))
  "Returns md5sum for a message object of type 'pixelcountResult"
  "602d642babe509c7c59f497c23e716a9")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<pixelcountResult>)))
  "Returns full string definition for message of type '<pixelcountResult>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%int32 count~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'pixelcountResult)))
  "Returns full string definition for message of type 'pixelcountResult"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%int32 count~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <pixelcountResult>))
  (cl:+ 0
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <pixelcountResult>))
  "Converts a ROS message object to a list"
  (cl:list 'pixelcountResult
    (cl:cons ':count (count msg))
))