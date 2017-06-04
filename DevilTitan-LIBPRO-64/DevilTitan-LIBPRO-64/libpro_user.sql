-- phpMyAdmin SQL Dump
-- version 4.6.5.2
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: May 23, 2017 at 07:45 AM
-- Server version: 10.1.21-MariaDB
-- PHP Version: 5.6.30

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `libpro_user`
--

-- --------------------------------------------------------

--
-- Table structure for table `book_request`
--

CREATE TABLE `book_request` (
  `user_id` smallint(6) NOT NULL,
  `no_of_request` tinyint(2) NOT NULL DEFAULT '1',
  `book_request` varchar(100) COLLATE utf8mb4_vietnamese_ci NOT NULL,
  `author` varchar(40) COLLATE utf8mb4_vietnamese_ci NOT NULL,
  `publisher` varchar(40) COLLATE utf8mb4_vietnamese_ci NOT NULL,
  `day_of_arrival` date NOT NULL
) ENGINE=MyISAM DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_vietnamese_ci;

-- --------------------------------------------------------

--
-- Table structure for table `reader_management`
--

CREATE TABLE `reader_management` (
  `user_id` smallint(6) NOT NULL,
  `infringement` varchar(100) COLLATE utf8mb4_vietnamese_ci NOT NULL,
  `day_of_violation` date NOT NULL,
  `is_resolved` tinyint(1) NOT NULL DEFAULT '0'
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_vietnamese_ci;

-- --------------------------------------------------------

--
-- Table structure for table `reader_rent`
--

CREATE TABLE `reader_rent` (
  `user_id` smallint(6) UNSIGNED ZEROFILL NOT NULL,
  `borrow_book` varchar(100) CHARACTER SET utf8mb4 COLLATE utf8mb4_bin NOT NULL,
  `isbn` varchar(15) CHARACTER SET utf8mb4 COLLATE utf8mb4_bin NOT NULL,
  `borrow_date` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  `due_date` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP
) ENGINE=MyISAM DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_vietnamese_ci;

--
-- Dumping data for table `reader_rent`
--

INSERT INTO `reader_rent` (`user_id`, `borrow_book`, `isbn`, `borrow_date`, `due_date`) VALUES
(000001, 'The Pearson General Knowledge Manual 2012', 'GEN-000001', '2017-05-22 01:12:00', '2017-06-05 07:18:00');

-- --------------------------------------------------------

--
-- Table structure for table `reader_violation`
--

CREATE TABLE `reader_violation` (
  `user_id` smallint(6) UNSIGNED ZEROFILL NOT NULL,
  `infringement` varchar(100) COLLATE utf8mb4_vietnamese_ci NOT NULL,
  `day_of_violation` date NOT NULL
) ENGINE=MyISAM DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_vietnamese_ci;

-- --------------------------------------------------------

--
-- Table structure for table `user_account`
--

CREATE TABLE `user_account` (
  `user_id` smallint(6) NOT NULL,
  `account_name` varchar(40) CHARACTER SET utf8mb4 COLLATE utf8mb4_bin NOT NULL,
  `password` varchar(20) CHARACTER SET utf8mb4 COLLATE utf8mb4_bin NOT NULL,
  `is_active` tinyint(1) NOT NULL DEFAULT '0',
  `is_banned` tinyint(1) NOT NULL DEFAULT '0'
) ENGINE=MyISAM DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_vietnamese_ci;

-- --------------------------------------------------------

--
-- Table structure for table `user_info`
--

CREATE TABLE `user_info` (
  `user_id` smallint(6) UNSIGNED ZEROFILL NOT NULL,
  `first_name` varchar(10) CHARACTER SET utf8 COLLATE utf8_bin DEFAULT NULL,
  `last_name` varchar(30) CHARACTER SET utf8 COLLATE utf8_bin DEFAULT NULL,
  `Gender` tinyint(1) NOT NULL,
  `doB` date DEFAULT NULL,
  `phone_number` varchar(12) CHARACTER SET utf8 COLLATE utf8_vietnamese_ci DEFAULT NULL,
  `email` varchar(100) CHARACTER SET hp8 COLLATE hp8_bin DEFAULT NULL,
  `occupation` varchar(10) COLLATE utf8mb4_vietnamese_ci DEFAULT NULL,
  `company_school` varchar(100) CHARACTER SET utf8mb4 COLLATE utf8mb4_bin DEFAULT NULL,
  `Address` varchar(200) CHARACTER SET utf8mb4 COLLATE utf8mb4_bin DEFAULT NULL
) ENGINE=MyISAM DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_vietnamese_ci COMMENT='Basic infos of users';

--
-- Dumping data for table `user_info`
--

INSERT INTO `user_info` (`user_id`, `first_name`, `last_name`, `Gender`, `doB`, `phone_number`, `email`, `occupation`, `company_school`, `Address`) VALUES
(000001, 'Khoa', 'Nguyễn Phan Đăng', 1, '1998-07-08', '0938760213', 'khoanguyen0807@gmail.com', 'Student', 'Bach Khoa University of HCMC', '210 Khuông Việt, Phú Trung ward, Tân Phú district'),
(000002, 'Nghĩa', 'Nguyễn Trọng', 1, '1998-03-22', '01639190971', '1612212@hcmut.edu.vn', 'Student', 'Bach Khoa University of HCMC', 'Nhà khách đại học Quốc Gia TP.HCM'),
(000003, 'Dương', 'Cao Chánh', 1, '1998-02-27', '01629581621', 'duonguranus@gmail.com', 'Student', 'Bach Khoa University of HCMC', '100 Âu cơ, p.Bê Đê, quận Xấu Chó'),
(000004, 'Khôi', 'Nguyễn Minh', 1, '1998-06-01', '0070020010', 'nguyenminhkhoi@gmail.com', 'Etudiant', 'Bach Khoa University of HCMC', '199 Phạm văn Đồng, Phú Nhuận district'),
(000005, 'Như', 'Phan Thị Ái', 0, '2017-07-20', '012458826', 'chonhu@gmail.com', 'Student', 'Bach Khoa University of HCMC', '234 Bê Đê street, p.Phú, Q.dfdf');

-- --------------------------------------------------------

--
-- Table structure for table `user_notification`
--

CREATE TABLE `user_notification` (
  `user_id` smallint(6) NOT NULL,
  `day_of_noti` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  `notification` text COLLATE utf8mb4_vietnamese_ci NOT NULL,
  `is_read` tinyint(1) NOT NULL DEFAULT '0'
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_vietnamese_ci;

--
-- Indexes for dumped tables
--

--
-- Indexes for table `book_request`
--
ALTER TABLE `book_request`
  ADD PRIMARY KEY (`user_id`,`no_of_request`);

--
-- Indexes for table `reader_rent`
--
ALTER TABLE `reader_rent`
  ADD PRIMARY KEY (`user_id`);

--
-- Indexes for table `reader_violation`
--
ALTER TABLE `reader_violation`
  ADD KEY `infringement` (`infringement`);

--
-- Indexes for table `user_account`
--
ALTER TABLE `user_account`
  ADD PRIMARY KEY (`user_id`,`account_name`);

--
-- Indexes for table `user_info`
--
ALTER TABLE `user_info`
  ADD PRIMARY KEY (`user_id`),
  ADD KEY `name` (`first_name`,`last_name`),
  ADD KEY `user_id` (`user_id`),
  ADD KEY `user_id_2` (`user_id`);

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
