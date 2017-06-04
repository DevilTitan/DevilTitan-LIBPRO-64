-- phpMyAdmin SQL Dump
-- version 4.6.5.2
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: May 23, 2017 at 07:44 AM
-- Server version: 10.1.21-MariaDB
-- PHP Version: 5.6.30

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `book_data`
--

-- --------------------------------------------------------

--
-- Table structure for table `book_info`
--

CREATE TABLE `book_info` (
  `isbn` varchar(15) COLLATE utf8mb4_vietnamese_ci NOT NULL,
  `book_name` varchar(500) COLLATE utf8mb4_vietnamese_ci NOT NULL,
  `author` varchar(40) COLLATE utf8mb4_vietnamese_ci NOT NULL,
  `year` year(4) NOT NULL,
  `publisher` varchar(40) COLLATE utf8mb4_vietnamese_ci NOT NULL
) ENGINE=MyISAM DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_vietnamese_ci ROW_FORMAT=DYNAMIC;

--
-- Dumping data for table `book_info`
--

INSERT INTO `book_info` (`isbn`, `book_name`, `author`, `year`, `publisher`) VALUES
('ENG-000001', 'The Pearson General Studies Manual 2009', 'Showick Thorpe Edgar Thorpe', 2009, 'PEARSON'),
('ENG-000002', 'The Pearson Complete Guide to the SAT', 'Nicholas Henderson', 2012, 'PEARSON'),
('ENG-000003', 'The Pearson Guide to Quantitative Aptitude for the CAT', 'K.Sinha', 2011, 'PEARSON'),
('GEN-000001', 'The Pearson General Knowledge Manual 2012', 'Edgar Thorpe', 2012, 'PEARSON'),
('GEN-000002', 'Acceptance & Commitment Therapy for Body Image Dissatisfaction', 'Adria N. Pearson,Michelle Heffner,Victor', 2008, 'PEARSON'),
('GEN-000003', 'Organisational Behaviour: Global and Southern African Perspectives', 'Stephen P. Robbins', 2007, 'PEARSON');

-- --------------------------------------------------------

--
-- Table structure for table `book_status`
--

CREATE TABLE `book_status` (
  `isbn` varchar(15) COLLATE utf8mb4_vietnamese_ci NOT NULL,
  `status` tinyint(1) NOT NULL DEFAULT '1',
  `quantity` smallint(2) NOT NULL DEFAULT '1',
  `remain` smallint(2) UNSIGNED NOT NULL DEFAULT '0'
) ENGINE=MyISAM DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_vietnamese_ci;

--
-- Indexes for dumped tables
--

--
-- Indexes for table `book_info`
--
ALTER TABLE `book_info`
  ADD PRIMARY KEY (`isbn`),
  ADD KEY `year` (`year`),
  ADD KEY `book_name` (`book_name`(191));

--
-- Indexes for table `book_status`
--
ALTER TABLE `book_status`
  ADD PRIMARY KEY (`isbn`),
  ADD KEY `status` (`status`);

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
